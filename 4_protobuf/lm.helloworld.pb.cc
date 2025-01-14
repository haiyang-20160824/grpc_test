// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lm.helloworld.proto

#include "lm.helloworld.pb.h"

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

namespace lm {
class helloworldDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<helloworld>
      _instance;
} _helloworld_default_instance_;
}  // namespace lm
namespace protobuf_lm_2ehelloworld_2eproto {
static void InitDefaultshelloworld() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::lm::_helloworld_default_instance_;
    new (ptr) ::lm::helloworld();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::lm::helloworld::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_helloworld =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultshelloworld}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_helloworld.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lm::helloworld, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lm::helloworld, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lm::helloworld, str_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::lm::helloworld, opt_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::lm::helloworld)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::lm::_helloworld_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "lm.helloworld.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\023lm.helloworld.proto\022\002lm\"2\n\nhelloworld\022"
      "\n\n\002id\030\001 \001(\005\022\013\n\003str\030\002 \001(\t\022\013\n\003opt\030\003 \001(\005b\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 85);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "lm.helloworld.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_lm_2ehelloworld_2eproto
namespace lm {

// ===================================================================

void helloworld::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int helloworld::kIdFieldNumber;
const int helloworld::kStrFieldNumber;
const int helloworld::kOptFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

helloworld::helloworld()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_lm_2ehelloworld_2eproto::scc_info_helloworld.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:lm.helloworld)
}
helloworld::helloworld(const helloworld& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.str().size() > 0) {
    str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&opt_) -
    reinterpret_cast<char*>(&id_)) + sizeof(opt_));
  // @@protoc_insertion_point(copy_constructor:lm.helloworld)
}

void helloworld::SharedCtor() {
  str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&opt_) -
      reinterpret_cast<char*>(&id_)) + sizeof(opt_));
}

helloworld::~helloworld() {
  // @@protoc_insertion_point(destructor:lm.helloworld)
  SharedDtor();
}

void helloworld::SharedDtor() {
  str_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void helloworld::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* helloworld::descriptor() {
  ::protobuf_lm_2ehelloworld_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_lm_2ehelloworld_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const helloworld& helloworld::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_lm_2ehelloworld_2eproto::scc_info_helloworld.base);
  return *internal_default_instance();
}


void helloworld::Clear() {
// @@protoc_insertion_point(message_clear_start:lm.helloworld)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&opt_) -
      reinterpret_cast<char*>(&id_)) + sizeof(opt_));
  _internal_metadata_.Clear();
}

bool helloworld::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:lm.helloworld)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string str = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_str()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->str().data(), static_cast<int>(this->str().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "lm.helloworld.str"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 opt = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &opt_)));
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
  // @@protoc_insertion_point(parse_success:lm.helloworld)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:lm.helloworld)
  return false;
#undef DO_
}

void helloworld::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:lm.helloworld)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // string str = 2;
  if (this->str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->str().data(), static_cast<int>(this->str().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "lm.helloworld.str");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->str(), output);
  }

  // int32 opt = 3;
  if (this->opt() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->opt(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:lm.helloworld)
}

::google::protobuf::uint8* helloworld::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:lm.helloworld)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // string str = 2;
  if (this->str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->str().data(), static_cast<int>(this->str().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "lm.helloworld.str");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->str(), target);
  }

  // int32 opt = 3;
  if (this->opt() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->opt(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:lm.helloworld)
  return target;
}

size_t helloworld::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:lm.helloworld)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string str = 2;
  if (this->str().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->str());
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // int32 opt = 3;
  if (this->opt() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->opt());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void helloworld::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:lm.helloworld)
  GOOGLE_DCHECK_NE(&from, this);
  const helloworld* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const helloworld>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:lm.helloworld)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:lm.helloworld)
    MergeFrom(*source);
  }
}

void helloworld::MergeFrom(const helloworld& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:lm.helloworld)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.str().size() > 0) {

    str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.opt() != 0) {
    set_opt(from.opt());
  }
}

void helloworld::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:lm.helloworld)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void helloworld::CopyFrom(const helloworld& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:lm.helloworld)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool helloworld::IsInitialized() const {
  return true;
}

void helloworld::Swap(helloworld* other) {
  if (other == this) return;
  InternalSwap(other);
}
void helloworld::InternalSwap(helloworld* other) {
  using std::swap;
  str_.Swap(&other->str_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(opt_, other->opt_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata helloworld::GetMetadata() const {
  protobuf_lm_2ehelloworld_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_lm_2ehelloworld_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace lm
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::lm::helloworld* Arena::CreateMaybeMessage< ::lm::helloworld >(Arena* arena) {
  return Arena::CreateInternal< ::lm::helloworld >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
