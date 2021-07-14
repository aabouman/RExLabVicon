# syntax: proto3
using ProtoBuf
import ProtoBuf.meta

mutable struct VICON <: ProtoType
    __protobuf_jl_internal_meta::ProtoMeta
    __protobuf_jl_internal_values::Dict{Symbol,Any}
    __protobuf_jl_internal_defaultset::Set{Symbol}

    function VICON(; kwargs...)
        obj = new(meta(VICON), Dict{Symbol,Any}(), Set{Symbol}())
        values = obj.__protobuf_jl_internal_values
        symdict = obj.__protobuf_jl_internal_meta.symdict
        for nv in kwargs
            fldname, fldval = nv
            fldtype = symdict[fldname].jtyp
            (fldname in keys(symdict)) || error(string(typeof(obj), " has no field with name ", fldname))
            if fldval !== nothing
                values[fldname] = isa(fldval, fldtype) ? fldval : convert(fldtype, fldval)
            end
        end
        obj
    end
end # mutable struct VICON
const __meta_VICON = Ref{ProtoMeta}()
function meta(::Type{VICON})
    ProtoBuf.metalock() do
        if !isassigned(__meta_VICON)
            __meta_VICON[] = target = ProtoMeta(VICON)
            allflds = Pair{Symbol,Union{Type,String}}[:pos_x => Float64, :pos_y => Float64, :pos_z => Float64, :quat_w => Float64, :quat_x => Float64, :quat_y => Float64, :quat_z => Float64, :time => Float64]
            meta(target, VICON, allflds, ProtoBuf.DEF_REQ, ProtoBuf.DEF_FNUM, ProtoBuf.DEF_VAL, ProtoBuf.DEF_PACK, ProtoBuf.DEF_WTYPES, ProtoBuf.DEF_ONEOFS, ProtoBuf.DEF_ONEOF_NAMES)
        end
        __meta_VICON[]
    end
end
function Base.getproperty(obj::VICON, name::Symbol)
    if name === :pos_x
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :pos_y
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :pos_z
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :quat_w
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :quat_x
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :quat_y
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :quat_z
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :time
        return (obj.__protobuf_jl_internal_values[name])::Float64
    else
        getfield(obj, name)
    end
end

mutable struct IMU <: ProtoType
    __protobuf_jl_internal_meta::ProtoMeta
    __protobuf_jl_internal_values::Dict{Symbol,Any}
    __protobuf_jl_internal_defaultset::Set{Symbol}

    function IMU(; kwargs...)
        obj = new(meta(IMU), Dict{Symbol,Any}(), Set{Symbol}())
        values = obj.__protobuf_jl_internal_values
        symdict = obj.__protobuf_jl_internal_meta.symdict
        for nv in kwargs
            fldname, fldval = nv
            fldtype = symdict[fldname].jtyp
            (fldname in keys(symdict)) || error(string(typeof(obj), " has no field with name ", fldname))
            if fldval !== nothing
                values[fldname] = isa(fldval, fldtype) ? fldval : convert(fldtype, fldval)
            end
        end
        obj
    end
end # mutable struct IMU
const __meta_IMU = Ref{ProtoMeta}()
function meta(::Type{IMU})
    ProtoBuf.metalock() do
        if !isassigned(__meta_IMU)
            __meta_IMU[] = target = ProtoMeta(IMU)
            allflds = Pair{Symbol,Union{Type,String}}[:acc_x => Float64, :acc_y => Float64, :acc_z => Float64, :gyr_x => Float64, :gyr_y => Float64, :gyr_z => Float64, :time => Float64]
            meta(target, IMU, allflds, ProtoBuf.DEF_REQ, ProtoBuf.DEF_FNUM, ProtoBuf.DEF_VAL, ProtoBuf.DEF_PACK, ProtoBuf.DEF_WTYPES, ProtoBuf.DEF_ONEOFS, ProtoBuf.DEF_ONEOF_NAMES)
        end
        __meta_IMU[]
    end
end
function Base.getproperty(obj::IMU, name::Symbol)
    if name === :acc_x
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :acc_y
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :acc_z
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :gyr_x
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :gyr_y
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :gyr_z
        return (obj.__protobuf_jl_internal_values[name])::Float64
    elseif name === :time
        return (obj.__protobuf_jl_internal_values[name])::Float64
    else
        getfield(obj, name)
    end
end

export VICON, IMU
