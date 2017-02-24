// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: coprocess_common.proto

#ifndef PROTOBUF_coprocess_5fcommon_2eproto__INCLUDED
#define PROTOBUF_coprocess_5fcommon_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace coprocess {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_coprocess_5fcommon_2eproto();
void protobuf_InitDefaults_coprocess_5fcommon_2eproto();
void protobuf_AssignDesc_coprocess_5fcommon_2eproto();
void protobuf_ShutdownFile_coprocess_5fcommon_2eproto();

class StringSlice;

enum HookType {
  Unknown = 0,
  Pre = 1,
  Post = 2,
  PostKeyAuth = 3,
  CustomKeyCheck = 4,
  HookType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  HookType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool HookType_IsValid(int value);
const HookType HookType_MIN = Unknown;
const HookType HookType_MAX = CustomKeyCheck;
const int HookType_ARRAYSIZE = HookType_MAX + 1;

const ::google::protobuf::EnumDescriptor* HookType_descriptor();
inline const ::std::string& HookType_Name(HookType value) {
  return ::google::protobuf::internal::NameOfEnum(
    HookType_descriptor(), value);
}
inline bool HookType_Parse(
    const ::std::string& name, HookType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<HookType>(
    HookType_descriptor(), name, value);
}
// ===================================================================

class StringSlice : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:coprocess.StringSlice) */ {
 public:
  StringSlice();
  virtual ~StringSlice();

  StringSlice(const StringSlice& from);

  inline StringSlice& operator=(const StringSlice& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const StringSlice& default_instance();

  static const StringSlice* internal_default_instance();

  void Swap(StringSlice* other);

  // implements Message ----------------------------------------------

  inline StringSlice* New() const { return New(NULL); }

  StringSlice* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StringSlice& from);
  void MergeFrom(const StringSlice& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(StringSlice* other);
  void UnsafeMergeFrom(const StringSlice& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string items = 1;
  int items_size() const;
  void clear_items();
  static const int kItemsFieldNumber = 1;
  const ::std::string& items(int index) const;
  ::std::string* mutable_items(int index);
  void set_items(int index, const ::std::string& value);
  void set_items(int index, const char* value);
  void set_items(int index, const char* value, size_t size);
  ::std::string* add_items();
  void add_items(const ::std::string& value);
  void add_items(const char* value);
  void add_items(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& items() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_items();

  // @@protoc_insertion_point(class_scope:coprocess.StringSlice)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> items_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_coprocess_5fcommon_2eproto_impl();
  friend void  protobuf_AddDesc_coprocess_5fcommon_2eproto_impl();
  friend void protobuf_AssignDesc_coprocess_5fcommon_2eproto();
  friend void protobuf_ShutdownFile_coprocess_5fcommon_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<StringSlice> StringSlice_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StringSlice

// repeated string items = 1;
inline int StringSlice::items_size() const {
  return items_.size();
}
inline void StringSlice::clear_items() {
  items_.Clear();
}
inline const ::std::string& StringSlice::items(int index) const {
  // @@protoc_insertion_point(field_get:coprocess.StringSlice.items)
  return items_.Get(index);
}
inline ::std::string* StringSlice::mutable_items(int index) {
  // @@protoc_insertion_point(field_mutable:coprocess.StringSlice.items)
  return items_.Mutable(index);
}
inline void StringSlice::set_items(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:coprocess.StringSlice.items)
  items_.Mutable(index)->assign(value);
}
inline void StringSlice::set_items(int index, const char* value) {
  items_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:coprocess.StringSlice.items)
}
inline void StringSlice::set_items(int index, const char* value, size_t size) {
  items_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:coprocess.StringSlice.items)
}
inline ::std::string* StringSlice::add_items() {
  // @@protoc_insertion_point(field_add_mutable:coprocess.StringSlice.items)
  return items_.Add();
}
inline void StringSlice::add_items(const ::std::string& value) {
  items_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:coprocess.StringSlice.items)
}
inline void StringSlice::add_items(const char* value) {
  items_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:coprocess.StringSlice.items)
}
inline void StringSlice::add_items(const char* value, size_t size) {
  items_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:coprocess.StringSlice.items)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
StringSlice::items() const {
  // @@protoc_insertion_point(field_list:coprocess.StringSlice.items)
  return items_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
StringSlice::mutable_items() {
  // @@protoc_insertion_point(field_mutable_list:coprocess.StringSlice.items)
  return &items_;
}

inline const StringSlice* StringSlice::internal_default_instance() {
  return &StringSlice_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace coprocess

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::coprocess::HookType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::coprocess::HookType>() {
  return ::coprocess::HookType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_coprocess_5fcommon_2eproto__INCLUDED
