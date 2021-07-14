// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vicon_msg.proto

#ifndef PROTOBUF_INCLUDED_vicon_5fmsg_2eproto
#define PROTOBUF_INCLUDED_vicon_5fmsg_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_vicon_5fmsg_2eproto 

namespace protobuf_vicon_5fmsg_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_vicon_5fmsg_2eproto
namespace messaging {
class VICON;
class VICONDefaultTypeInternal;
extern VICONDefaultTypeInternal _VICON_default_instance_;
}  // namespace messaging
namespace google {
namespace protobuf {
template<> ::messaging::VICON* Arena::CreateMaybeMessage<::messaging::VICON>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace messaging {

// ===================================================================

class VICON : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:messaging.VICON) */ {
 public:
  VICON();
  virtual ~VICON();

  VICON(const VICON& from);

  inline VICON& operator=(const VICON& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VICON(VICON&& from) noexcept
    : VICON() {
    *this = ::std::move(from);
  }

  inline VICON& operator=(VICON&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const VICON& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VICON* internal_default_instance() {
    return reinterpret_cast<const VICON*>(
               &_VICON_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(VICON* other);
  friend void swap(VICON& a, VICON& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VICON* New() const final {
    return CreateMaybeMessage<VICON>(NULL);
  }

  VICON* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VICON>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const VICON& from);
  void MergeFrom(const VICON& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VICON* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // double pos_x = 1;
  void clear_pos_x();
  static const int kPosXFieldNumber = 1;
  double pos_x() const;
  void set_pos_x(double value);

  // double pos_y = 2;
  void clear_pos_y();
  static const int kPosYFieldNumber = 2;
  double pos_y() const;
  void set_pos_y(double value);

  // double pos_z = 3;
  void clear_pos_z();
  static const int kPosZFieldNumber = 3;
  double pos_z() const;
  void set_pos_z(double value);

  // double quat_w = 4;
  void clear_quat_w();
  static const int kQuatWFieldNumber = 4;
  double quat_w() const;
  void set_quat_w(double value);

  // double quat_x = 5;
  void clear_quat_x();
  static const int kQuatXFieldNumber = 5;
  double quat_x() const;
  void set_quat_x(double value);

  // double quat_y = 6;
  void clear_quat_y();
  static const int kQuatYFieldNumber = 6;
  double quat_y() const;
  void set_quat_y(double value);

  // double quat_z = 7;
  void clear_quat_z();
  static const int kQuatZFieldNumber = 7;
  double quat_z() const;
  void set_quat_z(double value);

  // double time = 8;
  void clear_time();
  static const int kTimeFieldNumber = 8;
  double time() const;
  void set_time(double value);

  // @@protoc_insertion_point(class_scope:messaging.VICON)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double pos_x_;
  double pos_y_;
  double pos_z_;
  double quat_w_;
  double quat_x_;
  double quat_y_;
  double quat_z_;
  double time_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_vicon_5fmsg_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VICON

// double pos_x = 1;
inline void VICON::clear_pos_x() {
  pos_x_ = 0;
}
inline double VICON::pos_x() const {
  // @@protoc_insertion_point(field_get:messaging.VICON.pos_x)
  return pos_x_;
}
inline void VICON::set_pos_x(double value) {
  
  pos_x_ = value;
  // @@protoc_insertion_point(field_set:messaging.VICON.pos_x)
}

// double pos_y = 2;
inline void VICON::clear_pos_y() {
  pos_y_ = 0;
}
inline double VICON::pos_y() const {
  // @@protoc_insertion_point(field_get:messaging.VICON.pos_y)
  return pos_y_;
}
inline void VICON::set_pos_y(double value) {
  
  pos_y_ = value;
  // @@protoc_insertion_point(field_set:messaging.VICON.pos_y)
}

// double pos_z = 3;
inline void VICON::clear_pos_z() {
  pos_z_ = 0;
}
inline double VICON::pos_z() const {
  // @@protoc_insertion_point(field_get:messaging.VICON.pos_z)
  return pos_z_;
}
inline void VICON::set_pos_z(double value) {
  
  pos_z_ = value;
  // @@protoc_insertion_point(field_set:messaging.VICON.pos_z)
}

// double quat_w = 4;
inline void VICON::clear_quat_w() {
  quat_w_ = 0;
}
inline double VICON::quat_w() const {
  // @@protoc_insertion_point(field_get:messaging.VICON.quat_w)
  return quat_w_;
}
inline void VICON::set_quat_w(double value) {
  
  quat_w_ = value;
  // @@protoc_insertion_point(field_set:messaging.VICON.quat_w)
}

// double quat_x = 5;
inline void VICON::clear_quat_x() {
  quat_x_ = 0;
}
inline double VICON::quat_x() const {
  // @@protoc_insertion_point(field_get:messaging.VICON.quat_x)
  return quat_x_;
}
inline void VICON::set_quat_x(double value) {
  
  quat_x_ = value;
  // @@protoc_insertion_point(field_set:messaging.VICON.quat_x)
}

// double quat_y = 6;
inline void VICON::clear_quat_y() {
  quat_y_ = 0;
}
inline double VICON::quat_y() const {
  // @@protoc_insertion_point(field_get:messaging.VICON.quat_y)
  return quat_y_;
}
inline void VICON::set_quat_y(double value) {
  
  quat_y_ = value;
  // @@protoc_insertion_point(field_set:messaging.VICON.quat_y)
}

// double quat_z = 7;
inline void VICON::clear_quat_z() {
  quat_z_ = 0;
}
inline double VICON::quat_z() const {
  // @@protoc_insertion_point(field_get:messaging.VICON.quat_z)
  return quat_z_;
}
inline void VICON::set_quat_z(double value) {
  
  quat_z_ = value;
  // @@protoc_insertion_point(field_set:messaging.VICON.quat_z)
}

// double time = 8;
inline void VICON::clear_time() {
  time_ = 0;
}
inline double VICON::time() const {
  // @@protoc_insertion_point(field_get:messaging.VICON.time)
  return time_;
}
inline void VICON::set_time(double value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:messaging.VICON.time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messaging

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_vicon_5fmsg_2eproto