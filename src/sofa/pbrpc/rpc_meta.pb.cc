// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sofa/pbrpc/rpc_meta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sofa/pbrpc/rpc_meta.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sofa {
namespace pbrpc {

namespace {

const ::google::protobuf::Descriptor* RpcMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcMeta_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* RpcMeta_Type_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto() {
  protobuf_AddDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sofa/pbrpc/rpc_meta.proto");
  GOOGLE_CHECK(file != NULL);
  RpcMeta_descriptor_ = file->message_type(0);
  static const int RpcMeta_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, sequence_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, method_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, failed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, reason_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, compress_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, expected_response_compress_type_),
  };
  RpcMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RpcMeta_descriptor_,
      RpcMeta::default_instance_,
      RpcMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RpcMeta));
  RpcMeta_Type_descriptor_ = RpcMeta_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RpcMeta_descriptor_, &RpcMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_sofa_2fpbrpc_2frpc_5fmeta_2eproto() {
  delete RpcMeta::default_instance_;
  delete RpcMeta_reflection_;
}

void protobuf_AddDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::sofa::pbrpc::protobuf_AddDesc_sofa_2fpbrpc_2frpc_5foption_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031sofa/pbrpc/rpc_meta.proto\022\nsofa.pbrpc\032"
    "\033sofa/pbrpc/rpc_option.proto\"\246\002\n\007RpcMeta"
    "\022&\n\004type\030\001 \002(\0162\030.sofa.pbrpc.RpcMeta.Type"
    "\022\023\n\013sequence_id\030\002 \002(\004\022\016\n\006method\030d \001(\t\022\017\n"
    "\006failed\030\310\001 \001(\010\022\023\n\nerror_code\030\311\001 \001(\005\022\017\n\006r"
    "eason\030\312\001 \001(\t\0220\n\rcompress_type\030\254\002 \001(\0162\030.s"
    "ofa.pbrpc.CompressType\022B\n\037expected_respo"
    "nse_compress_type\030\255\002 \001(\0162\030.sofa.pbrpc.Co"
    "mpressType\"!\n\004Type\022\013\n\007REQUEST\020\000\022\014\n\010RESPO"
    "NSE\020\001", 365);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sofa/pbrpc/rpc_meta.proto", &protobuf_RegisterTypes);
  RpcMeta::default_instance_ = new RpcMeta();
  RpcMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sofa_2fpbrpc_2frpc_5fmeta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sofa_2fpbrpc_2frpc_5fmeta_2eproto {
  StaticDescriptorInitializer_sofa_2fpbrpc_2frpc_5fmeta_2eproto() {
    protobuf_AddDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto();
  }
} static_descriptor_initializer_sofa_2fpbrpc_2frpc_5fmeta_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* RpcMeta_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcMeta_Type_descriptor_;
}
bool RpcMeta_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const RpcMeta_Type RpcMeta::REQUEST;
const RpcMeta_Type RpcMeta::RESPONSE;
const RpcMeta_Type RpcMeta::Type_MIN;
const RpcMeta_Type RpcMeta::Type_MAX;
const int RpcMeta::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int RpcMeta::kTypeFieldNumber;
const int RpcMeta::kSequenceIdFieldNumber;
const int RpcMeta::kMethodFieldNumber;
const int RpcMeta::kFailedFieldNumber;
const int RpcMeta::kErrorCodeFieldNumber;
const int RpcMeta::kReasonFieldNumber;
const int RpcMeta::kCompressTypeFieldNumber;
const int RpcMeta::kExpectedResponseCompressTypeFieldNumber;
#endif  // !_MSC_VER

RpcMeta::RpcMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sofa.pbrpc.RpcMeta)
}

void RpcMeta::InitAsDefaultInstance() {
}

RpcMeta::RpcMeta(const RpcMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sofa.pbrpc.RpcMeta)
}

void RpcMeta::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 0;
  sequence_id_ = GOOGLE_ULONGLONG(0);
  method_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  failed_ = false;
  error_code_ = 0;
  reason_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compress_type_ = 0;
  expected_response_compress_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RpcMeta::~RpcMeta() {
  // @@protoc_insertion_point(destructor:sofa.pbrpc.RpcMeta)
  SharedDtor();
}

void RpcMeta::SharedDtor() {
  if (method_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete method_;
  }
  if (reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete reason_;
  }
  if (this != default_instance_) {
  }
}

void RpcMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcMeta_descriptor_;
}

const RpcMeta& RpcMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sofa_2fpbrpc_2frpc_5fmeta_2eproto();
  return *default_instance_;
}

RpcMeta* RpcMeta::default_instance_ = NULL;

RpcMeta* RpcMeta::New() const {
  return new RpcMeta;
}

void RpcMeta::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<RpcMeta*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(sequence_id_, failed_);
    ZR_(error_code_, expected_response_compress_type_);
    if (has_method()) {
      if (method_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        method_->clear();
      }
    }
    if (has_reason()) {
      if (reason_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        reason_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RpcMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sofa.pbrpc.RpcMeta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .sofa.pbrpc.RpcMeta.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sofa::pbrpc::RpcMeta_Type_IsValid(value)) {
            set_type(static_cast< ::sofa::pbrpc::RpcMeta_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence_id;
        break;
      }

      // required uint64 sequence_id = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &sequence_id_)));
          set_has_sequence_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(802)) goto parse_method;
        break;
      }

      // optional string method = 100;
      case 100: {
        if (tag == 802) {
         parse_method:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->method().data(), this->method().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "method");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1600)) goto parse_failed;
        break;
      }

      // optional bool failed = 200;
      case 200: {
        if (tag == 1600) {
         parse_failed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &failed_)));
          set_has_failed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1608)) goto parse_error_code;
        break;
      }

      // optional int32 error_code = 201;
      case 201: {
        if (tag == 1608) {
         parse_error_code:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));
          set_has_error_code();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1618)) goto parse_reason;
        break;
      }

      // optional string reason = 202;
      case 202: {
        if (tag == 1618) {
         parse_reason:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reason()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->reason().data(), this->reason().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "reason");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(2400)) goto parse_compress_type;
        break;
      }

      // optional .sofa.pbrpc.CompressType compress_type = 300;
      case 300: {
        if (tag == 2400) {
         parse_compress_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sofa::pbrpc::CompressType_IsValid(value)) {
            set_compress_type(static_cast< ::sofa::pbrpc::CompressType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(300, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(2408)) goto parse_expected_response_compress_type;
        break;
      }

      // optional .sofa.pbrpc.CompressType expected_response_compress_type = 301;
      case 301: {
        if (tag == 2408) {
         parse_expected_response_compress_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::sofa::pbrpc::CompressType_IsValid(value)) {
            set_expected_response_compress_type(static_cast< ::sofa::pbrpc::CompressType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(301, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sofa.pbrpc.RpcMeta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sofa.pbrpc.RpcMeta)
  return false;
#undef DO_
}

void RpcMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sofa.pbrpc.RpcMeta)
  // required .sofa.pbrpc.RpcMeta.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required uint64 sequence_id = 2;
  if (has_sequence_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->sequence_id(), output);
  }

  // optional string method = 100;
  if (has_method()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method().data(), this->method().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "method");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      100, this->method(), output);
  }

  // optional bool failed = 200;
  if (has_failed()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(200, this->failed(), output);
  }

  // optional int32 error_code = 201;
  if (has_error_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(201, this->error_code(), output);
  }

  // optional string reason = 202;
  if (has_reason()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->reason().data(), this->reason().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "reason");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      202, this->reason(), output);
  }

  // optional .sofa.pbrpc.CompressType compress_type = 300;
  if (has_compress_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      300, this->compress_type(), output);
  }

  // optional .sofa.pbrpc.CompressType expected_response_compress_type = 301;
  if (has_expected_response_compress_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      301, this->expected_response_compress_type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sofa.pbrpc.RpcMeta)
}

::google::protobuf::uint8* RpcMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sofa.pbrpc.RpcMeta)
  // required .sofa.pbrpc.RpcMeta.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required uint64 sequence_id = 2;
  if (has_sequence_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->sequence_id(), target);
  }

  // optional string method = 100;
  if (has_method()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method().data(), this->method().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "method");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        100, this->method(), target);
  }

  // optional bool failed = 200;
  if (has_failed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(200, this->failed(), target);
  }

  // optional int32 error_code = 201;
  if (has_error_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(201, this->error_code(), target);
  }

  // optional string reason = 202;
  if (has_reason()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->reason().data(), this->reason().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "reason");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        202, this->reason(), target);
  }

  // optional .sofa.pbrpc.CompressType compress_type = 300;
  if (has_compress_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      300, this->compress_type(), target);
  }

  // optional .sofa.pbrpc.CompressType expected_response_compress_type = 301;
  if (has_expected_response_compress_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      301, this->expected_response_compress_type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sofa.pbrpc.RpcMeta)
  return target;
}

int RpcMeta::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .sofa.pbrpc.RpcMeta.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // required uint64 sequence_id = 2;
    if (has_sequence_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->sequence_id());
    }

    // optional string method = 100;
    if (has_method()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->method());
    }

    // optional bool failed = 200;
    if (has_failed()) {
      total_size += 2 + 1;
    }

    // optional int32 error_code = 201;
    if (has_error_code()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->error_code());
    }

    // optional string reason = 202;
    if (has_reason()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->reason());
    }

    // optional .sofa.pbrpc.CompressType compress_type = 300;
    if (has_compress_type()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->compress_type());
    }

    // optional .sofa.pbrpc.CompressType expected_response_compress_type = 301;
    if (has_expected_response_compress_type()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->expected_response_compress_type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RpcMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RpcMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RpcMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RpcMeta::MergeFrom(const RpcMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_sequence_id()) {
      set_sequence_id(from.sequence_id());
    }
    if (from.has_method()) {
      set_method(from.method());
    }
    if (from.has_failed()) {
      set_failed(from.failed());
    }
    if (from.has_error_code()) {
      set_error_code(from.error_code());
    }
    if (from.has_reason()) {
      set_reason(from.reason());
    }
    if (from.has_compress_type()) {
      set_compress_type(from.compress_type());
    }
    if (from.has_expected_response_compress_type()) {
      set_expected_response_compress_type(from.expected_response_compress_type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RpcMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcMeta::CopyFrom(const RpcMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcMeta::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void RpcMeta::Swap(RpcMeta* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(sequence_id_, other->sequence_id_);
    std::swap(method_, other->method_);
    std::swap(failed_, other->failed_);
    std::swap(error_code_, other->error_code_);
    std::swap(reason_, other->reason_);
    std::swap(compress_type_, other->compress_type_);
    std::swap(expected_response_compress_type_, other->expected_response_compress_type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RpcMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcMeta_descriptor_;
  metadata.reflection = RpcMeta_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pbrpc
}  // namespace sofa

// @@protoc_insertion_point(global_scope)
