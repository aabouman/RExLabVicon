module ImuPublisher

    export imu_publisher

    using ZMQ
    using ProtoBuf
    using SerialCOBS
    using Dates

    include("$(@__DIR__)/../../gen/msgs/Messages.jl")
    include("$(@__DIR__)/../../gen/msgs/message_pb.jl")
    include("$(@__DIR__)/../../gen/msgs/messaging.jl")

    function create_pub(ctx, pub_ip, pub_port)
        p = Socket(ctx, PUB)
        ZMQ.bind(p, "tcp://$pub_ip:$pub_port")
        return p
    end

    # %%
    function imu_publisher(pub_ip::String, pub_port::String, 
                           serial_port::String, baud_rate::Int; 
                           debug::Bool=false)
        ard = Arduino(serial_port, baud_rate);

        ctx = Context(1)
        pub = create_pub(ctx, pub_ip, pub_port)
        imu = IMU(acc_x=0., acc_y=0., acc_z=0.,
                  gyr_x=0., gyr_y=0., gyr_z=0.,
                  time=time())
        iob = PipeBuffer()

        try
            open(ard) do sp

                while true
                    if bytesavailable(ard) > 0
                        output = recieve(ard)

                        # Check that the message read is the same size as a IMU_message type
                        if sizeof(output) == sizeof(Messages.IMU_message)
                            msg = reinterpret(Messages.IMU_message, output)[1]

                            if debug
                                print("IMU msg: [$(msg.acc_x), $(msg.acc_y), $(msg.acc_z)], [$(msg.gyr_x), $(msg.gyr_y), $(msg.gyr_z)] \r")
                            end

                            writeproto(iob, imu)
                            setproperty!(imu, :acc_x, msg.acc_x)
                			setproperty!(imu, :acc_y, msg.acc_y)
                			setproperty!(imu, :acc_z, msg.acc_z)
                            setproperty!(imu, :gyr_x, msg.gyr_x)
                			setproperty!(imu, :gyr_y, msg.gyr_y)
                			setproperty!(imu, :gyr_z, msg.gyr_z)
                			setproperty!(imu, :time, time())

                			ZMQ.send(pub, take!(iob))
                            sleep(0.0001)
                        end
                    else
                        if debug
                            # print("Waiting for bytes\r")
                        end
                    end
                end
            end
        catch e
            close(ctx)
            if e isa InterruptException
                println("Process terminated by you")

            else
                rethrow(e)
            end
        end

    end
end
