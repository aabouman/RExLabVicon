module Messages

using CEnum

struct IMU_message
    acc_x::Cfloat
    acc_y::Cfloat
    acc_z::Cfloat
    gyr_x::Cfloat
    gyr_y::Cfloat
    gyr_z::Cfloat
    mag_x::Cfloat
    mag_y::Cfloat
    mag_z::Cfloat
end

struct Input_message
    force_x::Cfloat
    force_y::Cfloat
    force_z::Cfloat
    torque_x::Cfloat
    torque_y::Cfloat
    torque_z::Cfloat
end

struct Combined_message
    imu::IMU_message
    input::Input_message
end

# exports
const PREFIXES = ["CX", "clang_"]
for name in names(@__MODULE__; all=true), prefix in PREFIXES
    if startswith(string(name), prefix)
        @eval export $name
    end
end

end # module
