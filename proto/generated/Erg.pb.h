// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Erg.proto

#ifndef PROTOBUF_Erg_2eproto__INCLUDED
#define PROTOBUF_Erg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace EasyErgsocket {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Erg_2eproto();
void protobuf_AssignDesc_Erg_2eproto();
void protobuf_ShutdownFile_Erg_2eproto();

class Erg;

// ===================================================================

class Erg : public ::google::protobuf::Message {
 public:
  Erg();
  virtual ~Erg();

  Erg(const Erg& from);

  inline Erg& operator=(const Erg& from) {
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
  static const Erg& default_instance();

  void Swap(Erg* other);

  // implements Message ----------------------------------------------

  Erg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Erg& from);
  void MergeFrom(const Erg& from);
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

  // accessors -------------------------------------------------------

  // optional uint32 displayedTime = 1;
  inline bool has_displayedtime() const;
  inline void clear_displayedtime();
  static const int kDisplayedTimeFieldNumber = 1;
  inline ::google::protobuf::uint32 displayedtime() const;
  inline void set_displayedtime(::google::protobuf::uint32 value);

  // optional uint32 displayedMeters = 2;
  inline bool has_displayedmeters() const;
  inline void clear_displayedmeters();
  static const int kDisplayedMetersFieldNumber = 2;
  inline ::google::protobuf::uint32 displayedmeters() const;
  inline void set_displayedmeters(::google::protobuf::uint32 value);

  // optional uint32 cadence = 3;
  inline bool has_cadence() const;
  inline void clear_cadence();
  static const int kCadenceFieldNumber = 3;
  inline ::google::protobuf::uint32 cadence() const;
  inline void set_cadence(::google::protobuf::uint32 value);

  // optional uint32 paceInSecs = 4;
  inline bool has_paceinsecs() const;
  inline void clear_paceinsecs();
  static const int kPaceInSecsFieldNumber = 4;
  inline ::google::protobuf::uint32 paceinsecs() const;
  inline void set_paceinsecs(::google::protobuf::uint32 value);

  // optional uint32 calories = 5;
  inline bool has_calories() const;
  inline void clear_calories();
  static const int kCaloriesFieldNumber = 5;
  inline ::google::protobuf::uint32 calories() const;
  inline void set_calories(::google::protobuf::uint32 value);

  // optional uint32 power = 6;
  inline bool has_power() const;
  inline void clear_power();
  static const int kPowerFieldNumber = 6;
  inline ::google::protobuf::uint32 power() const;
  inline void set_power(::google::protobuf::uint32 value);

  // optional uint32 heartrate = 7;
  inline bool has_heartrate() const;
  inline void clear_heartrate();
  static const int kHeartrateFieldNumber = 7;
  inline ::google::protobuf::uint32 heartrate() const;
  inline void set_heartrate(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:EasyErgsocket.Erg)
 private:
  inline void set_has_displayedtime();
  inline void clear_has_displayedtime();
  inline void set_has_displayedmeters();
  inline void clear_has_displayedmeters();
  inline void set_has_cadence();
  inline void clear_has_cadence();
  inline void set_has_paceinsecs();
  inline void clear_has_paceinsecs();
  inline void set_has_calories();
  inline void clear_has_calories();
  inline void set_has_power();
  inline void clear_has_power();
  inline void set_has_heartrate();
  inline void clear_has_heartrate();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 displayedtime_;
  ::google::protobuf::uint32 displayedmeters_;
  ::google::protobuf::uint32 cadence_;
  ::google::protobuf::uint32 paceinsecs_;
  ::google::protobuf::uint32 calories_;
  ::google::protobuf::uint32 power_;
  ::google::protobuf::uint32 heartrate_;
  friend void  protobuf_AddDesc_Erg_2eproto();
  friend void protobuf_AssignDesc_Erg_2eproto();
  friend void protobuf_ShutdownFile_Erg_2eproto();

  void InitAsDefaultInstance();
  static Erg* default_instance_;
};
// ===================================================================


// ===================================================================

// Erg

// optional uint32 displayedTime = 1;
inline bool Erg::has_displayedtime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Erg::set_has_displayedtime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Erg::clear_has_displayedtime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Erg::clear_displayedtime() {
  displayedtime_ = 0u;
  clear_has_displayedtime();
}
inline ::google::protobuf::uint32 Erg::displayedtime() const {
  // @@protoc_insertion_point(field_get:EasyErgsocket.Erg.displayedTime)
  return displayedtime_;
}
inline void Erg::set_displayedtime(::google::protobuf::uint32 value) {
  set_has_displayedtime();
  displayedtime_ = value;
  // @@protoc_insertion_point(field_set:EasyErgsocket.Erg.displayedTime)
}

// optional uint32 displayedMeters = 2;
inline bool Erg::has_displayedmeters() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Erg::set_has_displayedmeters() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Erg::clear_has_displayedmeters() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Erg::clear_displayedmeters() {
  displayedmeters_ = 0u;
  clear_has_displayedmeters();
}
inline ::google::protobuf::uint32 Erg::displayedmeters() const {
  // @@protoc_insertion_point(field_get:EasyErgsocket.Erg.displayedMeters)
  return displayedmeters_;
}
inline void Erg::set_displayedmeters(::google::protobuf::uint32 value) {
  set_has_displayedmeters();
  displayedmeters_ = value;
  // @@protoc_insertion_point(field_set:EasyErgsocket.Erg.displayedMeters)
}

// optional uint32 cadence = 3;
inline bool Erg::has_cadence() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Erg::set_has_cadence() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Erg::clear_has_cadence() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Erg::clear_cadence() {
  cadence_ = 0u;
  clear_has_cadence();
}
inline ::google::protobuf::uint32 Erg::cadence() const {
  // @@protoc_insertion_point(field_get:EasyErgsocket.Erg.cadence)
  return cadence_;
}
inline void Erg::set_cadence(::google::protobuf::uint32 value) {
  set_has_cadence();
  cadence_ = value;
  // @@protoc_insertion_point(field_set:EasyErgsocket.Erg.cadence)
}

// optional uint32 paceInSecs = 4;
inline bool Erg::has_paceinsecs() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Erg::set_has_paceinsecs() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Erg::clear_has_paceinsecs() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Erg::clear_paceinsecs() {
  paceinsecs_ = 0u;
  clear_has_paceinsecs();
}
inline ::google::protobuf::uint32 Erg::paceinsecs() const {
  // @@protoc_insertion_point(field_get:EasyErgsocket.Erg.paceInSecs)
  return paceinsecs_;
}
inline void Erg::set_paceinsecs(::google::protobuf::uint32 value) {
  set_has_paceinsecs();
  paceinsecs_ = value;
  // @@protoc_insertion_point(field_set:EasyErgsocket.Erg.paceInSecs)
}

// optional uint32 calories = 5;
inline bool Erg::has_calories() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Erg::set_has_calories() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Erg::clear_has_calories() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Erg::clear_calories() {
  calories_ = 0u;
  clear_has_calories();
}
inline ::google::protobuf::uint32 Erg::calories() const {
  // @@protoc_insertion_point(field_get:EasyErgsocket.Erg.calories)
  return calories_;
}
inline void Erg::set_calories(::google::protobuf::uint32 value) {
  set_has_calories();
  calories_ = value;
  // @@protoc_insertion_point(field_set:EasyErgsocket.Erg.calories)
}

// optional uint32 power = 6;
inline bool Erg::has_power() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Erg::set_has_power() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Erg::clear_has_power() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Erg::clear_power() {
  power_ = 0u;
  clear_has_power();
}
inline ::google::protobuf::uint32 Erg::power() const {
  // @@protoc_insertion_point(field_get:EasyErgsocket.Erg.power)
  return power_;
}
inline void Erg::set_power(::google::protobuf::uint32 value) {
  set_has_power();
  power_ = value;
  // @@protoc_insertion_point(field_set:EasyErgsocket.Erg.power)
}

// optional uint32 heartrate = 7;
inline bool Erg::has_heartrate() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Erg::set_has_heartrate() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Erg::clear_has_heartrate() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Erg::clear_heartrate() {
  heartrate_ = 0u;
  clear_has_heartrate();
}
inline ::google::protobuf::uint32 Erg::heartrate() const {
  // @@protoc_insertion_point(field_get:EasyErgsocket.Erg.heartrate)
  return heartrate_;
}
inline void Erg::set_heartrate(::google::protobuf::uint32 value) {
  set_has_heartrate();
  heartrate_ = value;
  // @@protoc_insertion_point(field_set:EasyErgsocket.Erg.heartrate)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace EasyErgsocket

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Erg_2eproto__INCLUDED
