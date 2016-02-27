// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: validate.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "validate.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace IM {

namespace {

const ::google::protobuf::Descriptor* ValidateResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ValidateResult_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_validate_2eproto() {
  protobuf_AddDesc_validate_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "validate.proto");
  GOOGLE_CHECK(file != NULL);
  ValidateResult_descriptor_ = file->message_type(0);
  static const int ValidateResult_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValidateResult, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValidateResult, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValidateResult, port_),
  };
  ValidateResult_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ValidateResult_descriptor_,
      ValidateResult::default_instance_,
      ValidateResult_offsets_,
      -1,
      -1,
      -1,
      sizeof(ValidateResult),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValidateResult, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ValidateResult, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_validate_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ValidateResult_descriptor_, &ValidateResult::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_validate_2eproto() {
  delete ValidateResult::default_instance_;
  delete ValidateResult_reflection_;
}

void protobuf_AddDesc_validate_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016validate.proto\022\002IM\":\n\016ValidateResult\022\016"
    "\n\006result\030\001 \001(\005\022\n\n\002ip\030\002 \001(\t\022\014\n\004port\030\003 \001(\t"
    "b\006proto3", 88);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "validate.proto", &protobuf_RegisterTypes);
  ValidateResult::default_instance_ = new ValidateResult();
  ValidateResult::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_validate_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_validate_2eproto {
  StaticDescriptorInitializer_validate_2eproto() {
    protobuf_AddDesc_validate_2eproto();
  }
} static_descriptor_initializer_validate_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ValidateResult::kResultFieldNumber;
const int ValidateResult::kIpFieldNumber;
const int ValidateResult::kPortFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ValidateResult::ValidateResult()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:IM.ValidateResult)
}

void ValidateResult::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ValidateResult::ValidateResult(const ValidateResult& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:IM.ValidateResult)
}

void ValidateResult::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  result_ = 0;
  ip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  port_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ValidateResult::~ValidateResult() {
  // @@protoc_insertion_point(destructor:IM.ValidateResult)
  SharedDtor();
}

void ValidateResult::SharedDtor() {
  ip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  port_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void ValidateResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ValidateResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ValidateResult_descriptor_;
}

const ValidateResult& ValidateResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_validate_2eproto();
  return *default_instance_;
}

ValidateResult* ValidateResult::default_instance_ = NULL;

ValidateResult* ValidateResult::New(::google::protobuf::Arena* arena) const {
  ValidateResult* n = new ValidateResult;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ValidateResult::Clear() {
  result_ = 0;
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  port_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ValidateResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:IM.ValidateResult)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 result = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ip;
        break;
      }

      // optional string ip = 2;
      case 2: {
        if (tag == 18) {
         parse_ip:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->ip().data(), this->ip().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "IM.ValidateResult.ip"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_port;
        break;
      }

      // optional string port = 3;
      case 3: {
        if (tag == 26) {
         parse_port:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_port()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->port().data(), this->port().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "IM.ValidateResult.port"));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IM.ValidateResult)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IM.ValidateResult)
  return false;
#undef DO_
}

void ValidateResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IM.ValidateResult)
  // optional int32 result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  // optional string ip = 2;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "IM.ValidateResult.ip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->ip(), output);
  }

  // optional string port = 3;
  if (this->port().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->port().data(), this->port().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "IM.ValidateResult.port");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->port(), output);
  }

  // @@protoc_insertion_point(serialize_end:IM.ValidateResult)
}

::google::protobuf::uint8* ValidateResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:IM.ValidateResult)
  // optional int32 result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
  }

  // optional string ip = 2;
  if (this->ip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->ip().data(), this->ip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "IM.ValidateResult.ip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->ip(), target);
  }

  // optional string port = 3;
  if (this->port().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->port().data(), this->port().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "IM.ValidateResult.port");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->port(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:IM.ValidateResult)
  return target;
}

int ValidateResult::ByteSize() const {
  int total_size = 0;

  // optional int32 result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result());
  }

  // optional string ip = 2;
  if (this->ip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->ip());
  }

  // optional string port = 3;
  if (this->port().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->port());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ValidateResult::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ValidateResult* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ValidateResult>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ValidateResult::MergeFrom(const ValidateResult& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.ip().size() > 0) {

    ip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.ip_);
  }
  if (from.port().size() > 0) {

    port_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.port_);
  }
}

void ValidateResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ValidateResult::CopyFrom(const ValidateResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ValidateResult::IsInitialized() const {

  return true;
}

void ValidateResult::Swap(ValidateResult* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ValidateResult::InternalSwap(ValidateResult* other) {
  std::swap(result_, other->result_);
  ip_.Swap(&other->ip_);
  port_.Swap(&other->port_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ValidateResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ValidateResult_descriptor_;
  metadata.reflection = ValidateResult_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ValidateResult

// optional int32 result = 1;
void ValidateResult::clear_result() {
  result_ = 0;
}
 ::google::protobuf::int32 ValidateResult::result() const {
  // @@protoc_insertion_point(field_get:IM.ValidateResult.result)
  return result_;
}
 void ValidateResult::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:IM.ValidateResult.result)
}

// optional string ip = 2;
void ValidateResult::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ValidateResult::ip() const {
  // @@protoc_insertion_point(field_get:IM.ValidateResult.ip)
  return ip_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ValidateResult::set_ip(const ::std::string& value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:IM.ValidateResult.ip)
}
 void ValidateResult::set_ip(const char* value) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:IM.ValidateResult.ip)
}
 void ValidateResult::set_ip(const char* value, size_t size) {
  
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:IM.ValidateResult.ip)
}
 ::std::string* ValidateResult::mutable_ip() {
  
  // @@protoc_insertion_point(field_mutable:IM.ValidateResult.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ValidateResult::release_ip() {
  
  return ip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ValidateResult::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    
  } else {
    
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:IM.ValidateResult.ip)
}

// optional string port = 3;
void ValidateResult::clear_port() {
  port_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ValidateResult::port() const {
  // @@protoc_insertion_point(field_get:IM.ValidateResult.port)
  return port_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ValidateResult::set_port(const ::std::string& value) {
  
  port_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:IM.ValidateResult.port)
}
 void ValidateResult::set_port(const char* value) {
  
  port_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:IM.ValidateResult.port)
}
 void ValidateResult::set_port(const char* value, size_t size) {
  
  port_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:IM.ValidateResult.port)
}
 ::std::string* ValidateResult::mutable_port() {
  
  // @@protoc_insertion_point(field_mutable:IM.ValidateResult.port)
  return port_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ValidateResult::release_port() {
  
  return port_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ValidateResult::set_allocated_port(::std::string* port) {
  if (port != NULL) {
    
  } else {
    
  }
  port_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), port);
  // @@protoc_insertion_point(field_set_allocated:IM.ValidateResult.port)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace IM

// @@protoc_insertion_point(global_scope)
