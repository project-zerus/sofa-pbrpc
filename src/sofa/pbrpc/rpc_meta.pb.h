// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sofa/pbrpc/rpc_meta.proto

#ifndef PROTOBUF_sofa_2fpbrpc_2frpc_5fmeta_2eproto__INCLUDED
#define PROTOBUF_sofa_2fpbrpc_2frpc_5fmeta_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "sofa/pbrpc/rpc_option.pb.h"
// @@protoc_insertion_point(includes)

namespace sofa {
namespace pbrpc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto();
void protobuf_AssignDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto();
void protobuf_ShutdownFile_sofa_2fpbrpc_2frpc_5fmeta_2eproto();

class RpcMeta;

enum RpcMeta_Type {
  RpcMeta_Type_REQUEST = 0,
  RpcMeta_Type_RESPONSE = 1
};
bool RpcMeta_Type_IsValid(int value);
const RpcMeta_Type RpcMeta_Type_Type_MIN = RpcMeta_Type_REQUEST;
const RpcMeta_Type RpcMeta_Type_Type_MAX = RpcMeta_Type_RESPONSE;
const int RpcMeta_Type_Type_ARRAYSIZE = RpcMeta_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* RpcMeta_Type_descriptor();
inline const ::std::string& RpcMeta_Type_Name(RpcMeta_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    RpcMeta_Type_descriptor(), value);
}
inline bool RpcMeta_Type_Parse(
    const ::std::string& name, RpcMeta_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RpcMeta_Type>(
    RpcMeta_Type_descriptor(), name, value);
}
// ===================================================================

class RpcMeta : public ::google::protobuf::Message {
 public:
  RpcMeta();
  virtual ~RpcMeta();

  RpcMeta(const RpcMeta& from);

  inline RpcMeta& operator=(const RpcMeta& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RpcMeta& default_instance();

  void Swap(RpcMeta* other);

  // implements Message ----------------------------------------------

  RpcMeta* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcMeta& from);
  void MergeFrom(const RpcMeta& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef RpcMeta_Type Type;
  static const Type REQUEST = RpcMeta_Type_REQUEST;
  static const Type RESPONSE = RpcMeta_Type_RESPONSE;
  static inline bool Type_IsValid(int value) {
    return RpcMeta_Type_IsValid(value);
  }
  static const Type Type_MIN =
    RpcMeta_Type_Type_MIN;
  static const Type Type_MAX =
    RpcMeta_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    RpcMeta_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return RpcMeta_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return RpcMeta_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return RpcMeta_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .sofa.pbrpc.RpcMeta.Type type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::sofa::pbrpc::RpcMeta_Type type() const;
  inline void set_type(::sofa::pbrpc::RpcMeta_Type value);

  // required uint64 sequence_id = 2;
  inline bool has_sequence_id() const;
  inline void clear_sequence_id();
  static const int kSequenceIdFieldNumber = 2;
  inline ::google::protobuf::uint64 sequence_id() const;
  inline void set_sequence_id(::google::protobuf::uint64 value);

  // optional string method = 100;
  inline bool has_method() const;
  inline void clear_method();
  static const int kMethodFieldNumber = 100;
  inline const ::std::string& method() const;
  inline void set_method(const ::std::string& value);
  inline void set_method(const char* value);
  inline void set_method(const char* value, size_t size);
  inline ::std::string* mutable_method();
  inline ::std::string* release_method();
  inline void set_allocated_method(::std::string* method);

  // optional bool failed = 200;
  inline bool has_failed() const;
  inline void clear_failed();
  static const int kFailedFieldNumber = 200;
  inline bool failed() const;
  inline void set_failed(bool value);

  // optional int32 error_code = 201;
  inline bool has_error_code() const;
  inline void clear_error_code();
  static const int kErrorCodeFieldNumber = 201;
  inline ::google::protobuf::int32 error_code() const;
  inline void set_error_code(::google::protobuf::int32 value);

  // optional string reason = 202;
  inline bool has_reason() const;
  inline void clear_reason();
  static const int kReasonFieldNumber = 202;
  inline const ::std::string& reason() const;
  inline void set_reason(const ::std::string& value);
  inline void set_reason(const char* value);
  inline void set_reason(const char* value, size_t size);
  inline ::std::string* mutable_reason();
  inline ::std::string* release_reason();
  inline void set_allocated_reason(::std::string* reason);

  // optional .sofa.pbrpc.CompressType compress_type = 300;
  inline bool has_compress_type() const;
  inline void clear_compress_type();
  static const int kCompressTypeFieldNumber = 300;
  inline ::sofa::pbrpc::CompressType compress_type() const;
  inline void set_compress_type(::sofa::pbrpc::CompressType value);

  // optional .sofa.pbrpc.CompressType expected_response_compress_type = 301;
  inline bool has_expected_response_compress_type() const;
  inline void clear_expected_response_compress_type();
  static const int kExpectedResponseCompressTypeFieldNumber = 301;
  inline ::sofa::pbrpc::CompressType expected_response_compress_type() const;
  inline void set_expected_response_compress_type(::sofa::pbrpc::CompressType value);

  // @@protoc_insertion_point(class_scope:sofa.pbrpc.RpcMeta)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_sequence_id();
  inline void clear_has_sequence_id();
  inline void set_has_method();
  inline void clear_has_method();
  inline void set_has_failed();
  inline void clear_has_failed();
  inline void set_has_error_code();
  inline void clear_has_error_code();
  inline void set_has_reason();
  inline void clear_has_reason();
  inline void set_has_compress_type();
  inline void clear_has_compress_type();
  inline void set_has_expected_response_compress_type();
  inline void clear_has_expected_response_compress_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 sequence_id_;
  int type_;
  bool failed_;
  ::std::string* method_;
  ::std::string* reason_;
  ::google::protobuf::int32 error_code_;
  int compress_type_;
  int expected_response_compress_type_;
  friend void  protobuf_AddDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto();
  friend void protobuf_AssignDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto();
  friend void protobuf_ShutdownFile_sofa_2fpbrpc_2frpc_5fmeta_2eproto();

  void InitAsDefaultInstance();
  static RpcMeta* default_instance_;
};
// ===================================================================


// ===================================================================

// RpcMeta

// required .sofa.pbrpc.RpcMeta.Type type = 1;
inline bool RpcMeta::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcMeta::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcMeta::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcMeta::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::sofa::pbrpc::RpcMeta_Type RpcMeta::type() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.RpcMeta.type)
  return static_cast< ::sofa::pbrpc::RpcMeta_Type >(type_);
}
inline void RpcMeta::set_type(::sofa::pbrpc::RpcMeta_Type value) {
  assert(::sofa::pbrpc::RpcMeta_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:sofa.pbrpc.RpcMeta.type)
}

// required uint64 sequence_id = 2;
inline bool RpcMeta::has_sequence_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcMeta::set_has_sequence_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcMeta::clear_has_sequence_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcMeta::clear_sequence_id() {
  sequence_id_ = GOOGLE_ULONGLONG(0);
  clear_has_sequence_id();
}
inline ::google::protobuf::uint64 RpcMeta::sequence_id() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.RpcMeta.sequence_id)
  return sequence_id_;
}
inline void RpcMeta::set_sequence_id(::google::protobuf::uint64 value) {
  set_has_sequence_id();
  sequence_id_ = value;
  // @@protoc_insertion_point(field_set:sofa.pbrpc.RpcMeta.sequence_id)
}

// optional string method = 100;
inline bool RpcMeta::has_method() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RpcMeta::set_has_method() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RpcMeta::clear_has_method() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RpcMeta::clear_method() {
  if (method_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_->clear();
  }
  clear_has_method();
}
inline const ::std::string& RpcMeta::method() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.RpcMeta.method)
  return *method_;
}
inline void RpcMeta::set_method(const ::std::string& value) {
  set_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_ = new ::std::string;
  }
  method_->assign(value);
  // @@protoc_insertion_point(field_set:sofa.pbrpc.RpcMeta.method)
}
inline void RpcMeta::set_method(const char* value) {
  set_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_ = new ::std::string;
  }
  method_->assign(value);
  // @@protoc_insertion_point(field_set_char:sofa.pbrpc.RpcMeta.method)
}
inline void RpcMeta::set_method(const char* value, size_t size) {
  set_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_ = new ::std::string;
  }
  method_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:sofa.pbrpc.RpcMeta.method)
}
inline ::std::string* RpcMeta::mutable_method() {
  set_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:sofa.pbrpc.RpcMeta.method)
  return method_;
}
inline ::std::string* RpcMeta::release_method() {
  clear_has_method();
  if (method_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = method_;
    method_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcMeta::set_allocated_method(::std::string* method) {
  if (method_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete method_;
  }
  if (method) {
    set_has_method();
    method_ = method;
  } else {
    clear_has_method();
    method_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:sofa.pbrpc.RpcMeta.method)
}

// optional bool failed = 200;
inline bool RpcMeta::has_failed() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RpcMeta::set_has_failed() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RpcMeta::clear_has_failed() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RpcMeta::clear_failed() {
  failed_ = false;
  clear_has_failed();
}
inline bool RpcMeta::failed() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.RpcMeta.failed)
  return failed_;
}
inline void RpcMeta::set_failed(bool value) {
  set_has_failed();
  failed_ = value;
  // @@protoc_insertion_point(field_set:sofa.pbrpc.RpcMeta.failed)
}

// optional int32 error_code = 201;
inline bool RpcMeta::has_error_code() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RpcMeta::set_has_error_code() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RpcMeta::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RpcMeta::clear_error_code() {
  error_code_ = 0;
  clear_has_error_code();
}
inline ::google::protobuf::int32 RpcMeta::error_code() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.RpcMeta.error_code)
  return error_code_;
}
inline void RpcMeta::set_error_code(::google::protobuf::int32 value) {
  set_has_error_code();
  error_code_ = value;
  // @@protoc_insertion_point(field_set:sofa.pbrpc.RpcMeta.error_code)
}

// optional string reason = 202;
inline bool RpcMeta::has_reason() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RpcMeta::set_has_reason() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RpcMeta::clear_has_reason() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RpcMeta::clear_reason() {
  if (reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_->clear();
  }
  clear_has_reason();
}
inline const ::std::string& RpcMeta::reason() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.RpcMeta.reason)
  return *reason_;
}
inline void RpcMeta::set_reason(const ::std::string& value) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(value);
  // @@protoc_insertion_point(field_set:sofa.pbrpc.RpcMeta.reason)
}
inline void RpcMeta::set_reason(const char* value) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(value);
  // @@protoc_insertion_point(field_set_char:sofa.pbrpc.RpcMeta.reason)
}
inline void RpcMeta::set_reason(const char* value, size_t size) {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  reason_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:sofa.pbrpc.RpcMeta.reason)
}
inline ::std::string* RpcMeta::mutable_reason() {
  set_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    reason_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:sofa.pbrpc.RpcMeta.reason)
  return reason_;
}
inline ::std::string* RpcMeta::release_reason() {
  clear_has_reason();
  if (reason_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = reason_;
    reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcMeta::set_allocated_reason(::std::string* reason) {
  if (reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete reason_;
  }
  if (reason) {
    set_has_reason();
    reason_ = reason;
  } else {
    clear_has_reason();
    reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:sofa.pbrpc.RpcMeta.reason)
}

// optional .sofa.pbrpc.CompressType compress_type = 300;
inline bool RpcMeta::has_compress_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RpcMeta::set_has_compress_type() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RpcMeta::clear_has_compress_type() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RpcMeta::clear_compress_type() {
  compress_type_ = 0;
  clear_has_compress_type();
}
inline ::sofa::pbrpc::CompressType RpcMeta::compress_type() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.RpcMeta.compress_type)
  return static_cast< ::sofa::pbrpc::CompressType >(compress_type_);
}
inline void RpcMeta::set_compress_type(::sofa::pbrpc::CompressType value) {
  assert(::sofa::pbrpc::CompressType_IsValid(value));
  set_has_compress_type();
  compress_type_ = value;
  // @@protoc_insertion_point(field_set:sofa.pbrpc.RpcMeta.compress_type)
}

// optional .sofa.pbrpc.CompressType expected_response_compress_type = 301;
inline bool RpcMeta::has_expected_response_compress_type() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void RpcMeta::set_has_expected_response_compress_type() {
  _has_bits_[0] |= 0x00000080u;
}
inline void RpcMeta::clear_has_expected_response_compress_type() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void RpcMeta::clear_expected_response_compress_type() {
  expected_response_compress_type_ = 0;
  clear_has_expected_response_compress_type();
}
inline ::sofa::pbrpc::CompressType RpcMeta::expected_response_compress_type() const {
  // @@protoc_insertion_point(field_get:sofa.pbrpc.RpcMeta.expected_response_compress_type)
  return static_cast< ::sofa::pbrpc::CompressType >(expected_response_compress_type_);
}
inline void RpcMeta::set_expected_response_compress_type(::sofa::pbrpc::CompressType value) {
  assert(::sofa::pbrpc::CompressType_IsValid(value));
  set_has_expected_response_compress_type();
  expected_response_compress_type_ = value;
  // @@protoc_insertion_point(field_set:sofa.pbrpc.RpcMeta.expected_response_compress_type)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pbrpc
}  // namespace sofa

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::sofa::pbrpc::RpcMeta_Type> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::sofa::pbrpc::RpcMeta_Type>() {
  return ::sofa::pbrpc::RpcMeta_Type_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sofa_2fpbrpc_2frpc_5fmeta_2eproto__INCLUDED
