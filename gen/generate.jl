# using Clang
# using Clang.Generators
#
#
# const MESSAGE_H = ["$(@__DIR__)/../../Arduino/IMU_PacketSerial/messages.h"]
#
# options = load_options("$(@__DIR__)/generator.toml")
#
# args = get_default_args()
#
# ctx = create_context(MESSAGE_H, args, options)
#
# build!(ctx)


# TODO: add regenerate warning


function generate()
    msg_loc = "message.proto"

    # Build the protocol buffer messages
    run(`protoc -I=. --proto_path=$(@__DIR__)/proto --cpp_out=$(@__DIR__)/msgs $(msg_loc)`);
    run(`protoc -I=. --plugin=$(homedir())/.julia/packages/ProtoBuf/TYEdo/plugin/protoc-gen-julia --proto_path=$(@__DIR__)/proto --julia_out=$(@__DIR__)/msgs $(msg_loc)`)

    

    # Build the vicon executable
    cd("$(@__DIR__)/../src/vicon")

    try
        mkdir("$(@__DIR__)/../src/vicon/build")
    catch
    end

    cd("$(@__DIR__)/../src/vicon/build")

    try
        rm("$(@__DIR__)/../src/vicon/build/CMakeCache.txt")
    catch
    end

    run(`cmake ..`)
    run(`make clean`)
    run(`make`)

    if isfile("$(@__DIR__)/../src/vicon/build/example")
        println("BUILD SUCCESSFUL")
    else
        println("BUILD FAILED")
    end
end

generate()
