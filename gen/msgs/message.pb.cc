// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#include "message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace messaging {
class VICONDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VICON>
      _instance;
} _VICON_default_instance_;
class IMUDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<IMU>
      _instance;
} _IMU_default_instance_;
}  // namespace messaging
namespace protobuf_message_2eproto {
static void InitDefaultsVICON() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::messaging::_VICON_default_instance_;
    new (ptr) ::messaging::VICON();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::messaging::VICON::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_VICON =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsVICON}, {}};

static void InitDefaultsIMU() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::messaging::_IMU_default_instance_;
    new (ptr) ::messaging::IMU();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::messaging::IMU::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_IMU =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsIMU}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VICON.base);
  ::google::protobuf::internal::InitSCC(&scc_info_IMU.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, pos_x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, pos_y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, pos_z_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, quat_w_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, quat_x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, quat_y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, quat_z_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::VICON, time_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::IMU, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::IMU, acc_x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::IMU, acc_y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::IMU, acc_z_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::IMU, gyr_x_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::IMU, gyr_y_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::IMU, gyr_z_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::messaging::IMU, time_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::messaging::VICON)},
  { 13, -1, sizeof(::messaging::IMU)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::messaging::_VICON_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::messaging::_IMU_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "message.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\rmessage.proto\022\tmessaging\"\202\001\n\005VICON\022\r\n\005"
      "pos_x\030\001 \001(\001\022\r\n\005pos_y\030\002 \001(\001\022\r\n\005pos_z\030\003 \001("
      "\001\022\016\n\006quat_w\030\004 \001(\001\022\016\n\006quat_x\030\005 \001(\001\022\016\n\006qua"
      "t_y\030\006 \001(\001\022\016\n\006quat_z\030\007 \001(\001\022\014\n\004time\030\010 \001(\001\""
      "m\n\003IMU\022\r\n\005acc_x\030\001 \001(\001\022\r\n\005acc_y\030\002 \001(\001\022\r\n\005"
      "acc_z\030\003 \001(\001\022\r\n\005gyr_x\030\004 \001(\001\022\r\n\005gyr_y\030\005 \001("
      "\001\022\r\n\005gyr_z\030\006 \001(\001\022\014\n\004time\030\007 \001(\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 278);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_message_2eproto
namespace messaging {

// ===================================================================

void VICON::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VICON::kPosXFieldNumber;
const int VICON::kPosYFieldNumber;
const int VICON::kPosZFieldNumber;
const int VICON::kQuatWFieldNumber;
const int VICON::kQuatXFieldNumber;
const int VICON::kQuatYFieldNumber;
const int VICON::kQuatZFieldNumber;
const int VICON::kTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VICON::VICON()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_message_2eproto::scc_info_VICON.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:messaging.VICON)
}
VICON::VICON(const VICON& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&pos_x_, &from.pos_x_,
    static_cast<size_t>(reinterpret_cast<char*>(&time_) -
    reinterpret_cast<char*>(&pos_x_)) + sizeof(time_));
  // @@protoc_insertion_point(copy_constructor:messaging.VICON)
}

void VICON::SharedCtor() {
  ::memset(&pos_x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&time_) -
      reinterpret_cast<char*>(&pos_x_)) + sizeof(time_));
}

VICON::~VICON() {
  // @@protoc_insertion_point(destructor:messaging.VICON)
  SharedDtor();
}

void VICON::SharedDtor() {
}

void VICON::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VICON::descriptor() {
  ::protobuf_message_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VICON& VICON::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_message_2eproto::scc_info_VICON.base);
  return *internal_default_instance();
}


void VICON::Clear() {
// @@protoc_insertion_point(message_clear_start:messaging.VICON)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&pos_x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&time_) -
      reinterpret_cast<char*>(&pos_x_)) + sizeof(time_));
  _internal_metadata_.Clear();
}

bool VICON::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:messaging.VICON)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double pos_x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &pos_x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double pos_y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &pos_y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double pos_z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &pos_z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double quat_w = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &quat_w_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double quat_x = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &quat_x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double quat_y = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &quat_y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double quat_z = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &quat_z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double time = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(65u /* 65 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:messaging.VICON)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:messaging.VICON)
  return false;
#undef DO_
}

void VICON::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:messaging.VICON)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double pos_x = 1;
  if (this->pos_x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->pos_x(), output);
  }

  // double pos_y = 2;
  if (this->pos_y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->pos_y(), output);
  }

  // double pos_z = 3;
  if (this->pos_z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->pos_z(), output);
  }

  // double quat_w = 4;
  if (this->quat_w() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->quat_w(), output);
  }

  // double quat_x = 5;
  if (this->quat_x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->quat_x(), output);
  }

  // double quat_y = 6;
  if (this->quat_y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->quat_y(), output);
  }

  // double quat_z = 7;
  if (this->quat_z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->quat_z(), output);
  }

  // double time = 8;
  if (this->time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:messaging.VICON)
}

::google::protobuf::uint8* VICON::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:messaging.VICON)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double pos_x = 1;
  if (this->pos_x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->pos_x(), target);
  }

  // double pos_y = 2;
  if (this->pos_y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->pos_y(), target);
  }

  // double pos_z = 3;
  if (this->pos_z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->pos_z(), target);
  }

  // double quat_w = 4;
  if (this->quat_w() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->quat_w(), target);
  }

  // double quat_x = 5;
  if (this->quat_x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->quat_x(), target);
  }

  // double quat_y = 6;
  if (this->quat_y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->quat_y(), target);
  }

  // double quat_z = 7;
  if (this->quat_z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->quat_z(), target);
  }

  // double time = 8;
  if (this->time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(8, this->time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:messaging.VICON)
  return target;
}

size_t VICON::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:messaging.VICON)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double pos_x = 1;
  if (this->pos_x() != 0) {
    total_size += 1 + 8;
  }

  // double pos_y = 2;
  if (this->pos_y() != 0) {
    total_size += 1 + 8;
  }

  // double pos_z = 3;
  if (this->pos_z() != 0) {
    total_size += 1 + 8;
  }

  // double quat_w = 4;
  if (this->quat_w() != 0) {
    total_size += 1 + 8;
  }

  // double quat_x = 5;
  if (this->quat_x() != 0) {
    total_size += 1 + 8;
  }

  // double quat_y = 6;
  if (this->quat_y() != 0) {
    total_size += 1 + 8;
  }

  // double quat_z = 7;
  if (this->quat_z() != 0) {
    total_size += 1 + 8;
  }

  // double time = 8;
  if (this->time() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VICON::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:messaging.VICON)
  GOOGLE_DCHECK_NE(&from, this);
  const VICON* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VICON>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:messaging.VICON)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:messaging.VICON)
    MergeFrom(*source);
  }
}

void VICON::MergeFrom(const VICON& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:messaging.VICON)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.pos_x() != 0) {
    set_pos_x(from.pos_x());
  }
  if (from.pos_y() != 0) {
    set_pos_y(from.pos_y());
  }
  if (from.pos_z() != 0) {
    set_pos_z(from.pos_z());
  }
  if (from.quat_w() != 0) {
    set_quat_w(from.quat_w());
  }
  if (from.quat_x() != 0) {
    set_quat_x(from.quat_x());
  }
  if (from.quat_y() != 0) {
    set_quat_y(from.quat_y());
  }
  if (from.quat_z() != 0) {
    set_quat_z(from.quat_z());
  }
  if (from.time() != 0) {
    set_time(from.time());
  }
}

void VICON::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:messaging.VICON)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VICON::CopyFrom(const VICON& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:messaging.VICON)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VICON::IsInitialized() const {
  return true;
}

void VICON::Swap(VICON* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VICON::InternalSwap(VICON* other) {
  using std::swap;
  swap(pos_x_, other->pos_x_);
  swap(pos_y_, other->pos_y_);
  swap(pos_z_, other->pos_z_);
  swap(quat_w_, other->quat_w_);
  swap(quat_x_, other->quat_x_);
  swap(quat_y_, other->quat_y_);
  swap(quat_z_, other->quat_z_);
  swap(time_, other->time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VICON::GetMetadata() const {
  protobuf_message_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void IMU::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int IMU::kAccXFieldNumber;
const int IMU::kAccYFieldNumber;
const int IMU::kAccZFieldNumber;
const int IMU::kGyrXFieldNumber;
const int IMU::kGyrYFieldNumber;
const int IMU::kGyrZFieldNumber;
const int IMU::kTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

IMU::IMU()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_message_2eproto::scc_info_IMU.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:messaging.IMU)
}
IMU::IMU(const IMU& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&acc_x_, &from.acc_x_,
    static_cast<size_t>(reinterpret_cast<char*>(&time_) -
    reinterpret_cast<char*>(&acc_x_)) + sizeof(time_));
  // @@protoc_insertion_point(copy_constructor:messaging.IMU)
}

void IMU::SharedCtor() {
  ::memset(&acc_x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&time_) -
      reinterpret_cast<char*>(&acc_x_)) + sizeof(time_));
}

IMU::~IMU() {
  // @@protoc_insertion_point(destructor:messaging.IMU)
  SharedDtor();
}

void IMU::SharedDtor() {
}

void IMU::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* IMU::descriptor() {
  ::protobuf_message_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const IMU& IMU::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_message_2eproto::scc_info_IMU.base);
  return *internal_default_instance();
}


void IMU::Clear() {
// @@protoc_insertion_point(message_clear_start:messaging.IMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&acc_x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&time_) -
      reinterpret_cast<char*>(&acc_x_)) + sizeof(time_));
  _internal_metadata_.Clear();
}

bool IMU::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:messaging.IMU)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double acc_x = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &acc_x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double acc_y = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &acc_y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double acc_z = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &acc_z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double gyr_x = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &gyr_x_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double gyr_y = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &gyr_y_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double gyr_z = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &gyr_z_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double time = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &time_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:messaging.IMU)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:messaging.IMU)
  return false;
#undef DO_
}

void IMU::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:messaging.IMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double acc_x = 1;
  if (this->acc_x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->acc_x(), output);
  }

  // double acc_y = 2;
  if (this->acc_y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->acc_y(), output);
  }

  // double acc_z = 3;
  if (this->acc_z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->acc_z(), output);
  }

  // double gyr_x = 4;
  if (this->gyr_x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->gyr_x(), output);
  }

  // double gyr_y = 5;
  if (this->gyr_y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->gyr_y(), output);
  }

  // double gyr_z = 6;
  if (this->gyr_z() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->gyr_z(), output);
  }

  // double time = 7;
  if (this->time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->time(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:messaging.IMU)
}

::google::protobuf::uint8* IMU::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:messaging.IMU)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double acc_x = 1;
  if (this->acc_x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->acc_x(), target);
  }

  // double acc_y = 2;
  if (this->acc_y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->acc_y(), target);
  }

  // double acc_z = 3;
  if (this->acc_z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->acc_z(), target);
  }

  // double gyr_x = 4;
  if (this->gyr_x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->gyr_x(), target);
  }

  // double gyr_y = 5;
  if (this->gyr_y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->gyr_y(), target);
  }

  // double gyr_z = 6;
  if (this->gyr_z() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->gyr_z(), target);
  }

  // double time = 7;
  if (this->time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->time(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:messaging.IMU)
  return target;
}

size_t IMU::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:messaging.IMU)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double acc_x = 1;
  if (this->acc_x() != 0) {
    total_size += 1 + 8;
  }

  // double acc_y = 2;
  if (this->acc_y() != 0) {
    total_size += 1 + 8;
  }

  // double acc_z = 3;
  if (this->acc_z() != 0) {
    total_size += 1 + 8;
  }

  // double gyr_x = 4;
  if (this->gyr_x() != 0) {
    total_size += 1 + 8;
  }

  // double gyr_y = 5;
  if (this->gyr_y() != 0) {
    total_size += 1 + 8;
  }

  // double gyr_z = 6;
  if (this->gyr_z() != 0) {
    total_size += 1 + 8;
  }

  // double time = 7;
  if (this->time() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void IMU::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:messaging.IMU)
  GOOGLE_DCHECK_NE(&from, this);
  const IMU* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const IMU>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:messaging.IMU)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:messaging.IMU)
    MergeFrom(*source);
  }
}

void IMU::MergeFrom(const IMU& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:messaging.IMU)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.acc_x() != 0) {
    set_acc_x(from.acc_x());
  }
  if (from.acc_y() != 0) {
    set_acc_y(from.acc_y());
  }
  if (from.acc_z() != 0) {
    set_acc_z(from.acc_z());
  }
  if (from.gyr_x() != 0) {
    set_gyr_x(from.gyr_x());
  }
  if (from.gyr_y() != 0) {
    set_gyr_y(from.gyr_y());
  }
  if (from.gyr_z() != 0) {
    set_gyr_z(from.gyr_z());
  }
  if (from.time() != 0) {
    set_time(from.time());
  }
}

void IMU::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:messaging.IMU)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IMU::CopyFrom(const IMU& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:messaging.IMU)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMU::IsInitialized() const {
  return true;
}

void IMU::Swap(IMU* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IMU::InternalSwap(IMU* other) {
  using std::swap;
  swap(acc_x_, other->acc_x_);
  swap(acc_y_, other->acc_y_);
  swap(acc_z_, other->acc_z_);
  swap(gyr_x_, other->gyr_x_);
  swap(gyr_y_, other->gyr_y_);
  swap(gyr_z_, other->gyr_z_);
  swap(time_, other->time_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata IMU::GetMetadata() const {
  protobuf_message_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_message_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace messaging
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::messaging::VICON* Arena::CreateMaybeMessage< ::messaging::VICON >(Arena* arena) {
  return Arena::CreateInternal< ::messaging::VICON >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::messaging::IMU* Arena::CreateMaybeMessage< ::messaging::IMU >(Arena* arena) {
  return Arena::CreateInternal< ::messaging::IMU >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
