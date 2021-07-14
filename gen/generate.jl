function generate()
    msg_name = "vicon_message.proto"

    # Build the protocol buffer messages
    run(`protoc -I=. --proto_path=$(@__DIR__)/proto --cpp_out=$(@__DIR__)/msgs $(msg_name)`);
    run(`protoc -I=. --plugin=$(homedir())/.julia/packages/ProtoBuf/TYEdo/plugin/protoc-gen-julia --proto_path=$(@__DIR__)/proto --julia_out=$(@__DIR__)/msgs $(msg_name)`)

    

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
