// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Autogenerated from Pigeon (v9.2.1), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#ifndef PIGEON_CORE_TESTS_GEN_H_
#define PIGEON_CORE_TESTS_GEN_H_
#include <flutter/basic_message_channel.h>
#include <flutter/binary_messenger.h>
#include <flutter/encodable_value.h>
#include <flutter/standard_message_codec.h>

#include <map>
#include <optional>
#include <string>

namespace core_tests_pigeontest {

class CoreTestsTest;

// Generated class from Pigeon.

class FlutterError {
 public:
  explicit FlutterError(const std::string& code) : code_(code) {}
  explicit FlutterError(const std::string& code, const std::string& message)
      : code_(code), message_(message) {}
  explicit FlutterError(const std::string& code, const std::string& message,
                        const flutter::EncodableValue& details)
      : code_(code), message_(message), details_(details) {}

  const std::string& code() const { return code_; }
  const std::string& message() const { return message_; }
  const flutter::EncodableValue& details() const { return details_; }

 private:
  std::string code_;
  std::string message_;
  flutter::EncodableValue details_;
};

template <class T>
class ErrorOr {
 public:
  ErrorOr(const T& rhs) : v_(rhs) {}
  ErrorOr(const T&& rhs) : v_(std::move(rhs)) {}
  ErrorOr(const FlutterError& rhs) : v_(rhs) {}
  ErrorOr(const FlutterError&& rhs) : v_(std::move(rhs)) {}

  bool has_error() const { return std::holds_alternative<FlutterError>(v_); }
  const T& value() const { return std::get<T>(v_); };
  const FlutterError& error() const { return std::get<FlutterError>(v_); };

 private:
  friend class HostIntegrationCoreApi;
  friend class FlutterIntegrationCoreApi;
  friend class HostTrivialApi;
  friend class HostSmallApi;
  friend class FlutterSmallApi;
  ErrorOr() = default;
  T TakeValue() && { return std::get<T>(std::move(v_)); }

  std::variant<T, FlutterError> v_;
};

enum class AnEnum { one = 0, two = 1, three = 2 };

// Generated class from Pigeon that represents data sent in messages.
class AllTypes {
 public:
  // Constructs an object setting all fields.
  explicit AllTypes(bool a_bool, int64_t an_int, int64_t an_int64,
                    double a_double, const std::vector<uint8_t>& a_byte_array,
                    const std::vector<int32_t>& a4_byte_array,
                    const std::vector<int64_t>& a8_byte_array,
                    const std::vector<double>& a_float_array,
                    const flutter::EncodableList& a_list,
                    const flutter::EncodableMap& a_map, const AnEnum& an_enum,
                    const std::string& a_string);

  bool a_bool() const;
  void set_a_bool(bool value_arg);

  int64_t an_int() const;
  void set_an_int(int64_t value_arg);

  int64_t an_int64() const;
  void set_an_int64(int64_t value_arg);

  double a_double() const;
  void set_a_double(double value_arg);

  const std::vector<uint8_t>& a_byte_array() const;
  void set_a_byte_array(const std::vector<uint8_t>& value_arg);

  const std::vector<int32_t>& a4_byte_array() const;
  void set_a4_byte_array(const std::vector<int32_t>& value_arg);

  const std::vector<int64_t>& a8_byte_array() const;
  void set_a8_byte_array(const std::vector<int64_t>& value_arg);

  const std::vector<double>& a_float_array() const;
  void set_a_float_array(const std::vector<double>& value_arg);

  const flutter::EncodableList& a_list() const;
  void set_a_list(const flutter::EncodableList& value_arg);

  const flutter::EncodableMap& a_map() const;
  void set_a_map(const flutter::EncodableMap& value_arg);

  const AnEnum& an_enum() const;
  void set_an_enum(const AnEnum& value_arg);

  const std::string& a_string() const;
  void set_a_string(std::string_view value_arg);

 private:
  static AllTypes FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class HostIntegrationCoreApi;
  friend class HostIntegrationCoreApiCodecSerializer;
  friend class FlutterIntegrationCoreApi;
  friend class FlutterIntegrationCoreApiCodecSerializer;
  friend class HostTrivialApi;
  friend class HostTrivialApiCodecSerializer;
  friend class HostSmallApi;
  friend class HostSmallApiCodecSerializer;
  friend class FlutterSmallApi;
  friend class FlutterSmallApiCodecSerializer;
  friend class CoreTestsTest;
  bool a_bool_;
  int64_t an_int_;
  int64_t an_int64_;
  double a_double_;
  std::vector<uint8_t> a_byte_array_;
  std::vector<int32_t> a4_byte_array_;
  std::vector<int64_t> a8_byte_array_;
  std::vector<double> a_float_array_;
  flutter::EncodableList a_list_;
  flutter::EncodableMap a_map_;
  AnEnum an_enum_;
  std::string a_string_;
};

// Generated class from Pigeon that represents data sent in messages.
class AllNullableTypes {
 public:
  // Constructs an object setting all non-nullable fields.
  AllNullableTypes();

  // Constructs an object setting all fields.
  explicit AllNullableTypes(
      const bool* a_nullable_bool, const int64_t* a_nullable_int,
      const int64_t* a_nullable_int64, const double* a_nullable_double,
      const std::vector<uint8_t>* a_nullable_byte_array,
      const std::vector<int32_t>* a_nullable4_byte_array,
      const std::vector<int64_t>* a_nullable8_byte_array,
      const std::vector<double>* a_nullable_float_array,
      const flutter::EncodableList* a_nullable_list,
      const flutter::EncodableMap* a_nullable_map,
      const flutter::EncodableList* nullable_nested_list,
      const flutter::EncodableMap* nullable_map_with_annotations,
      const flutter::EncodableMap* nullable_map_with_object,
      const AnEnum* a_nullable_enum, const std::string* a_nullable_string);

  const bool* a_nullable_bool() const;
  void set_a_nullable_bool(const bool* value_arg);
  void set_a_nullable_bool(bool value_arg);

  const int64_t* a_nullable_int() const;
  void set_a_nullable_int(const int64_t* value_arg);
  void set_a_nullable_int(int64_t value_arg);

  const int64_t* a_nullable_int64() const;
  void set_a_nullable_int64(const int64_t* value_arg);
  void set_a_nullable_int64(int64_t value_arg);

  const double* a_nullable_double() const;
  void set_a_nullable_double(const double* value_arg);
  void set_a_nullable_double(double value_arg);

  const std::vector<uint8_t>* a_nullable_byte_array() const;
  void set_a_nullable_byte_array(const std::vector<uint8_t>* value_arg);
  void set_a_nullable_byte_array(const std::vector<uint8_t>& value_arg);

  const std::vector<int32_t>* a_nullable4_byte_array() const;
  void set_a_nullable4_byte_array(const std::vector<int32_t>* value_arg);
  void set_a_nullable4_byte_array(const std::vector<int32_t>& value_arg);

  const std::vector<int64_t>* a_nullable8_byte_array() const;
  void set_a_nullable8_byte_array(const std::vector<int64_t>* value_arg);
  void set_a_nullable8_byte_array(const std::vector<int64_t>& value_arg);

  const std::vector<double>* a_nullable_float_array() const;
  void set_a_nullable_float_array(const std::vector<double>* value_arg);
  void set_a_nullable_float_array(const std::vector<double>& value_arg);

  const flutter::EncodableList* a_nullable_list() const;
  void set_a_nullable_list(const flutter::EncodableList* value_arg);
  void set_a_nullable_list(const flutter::EncodableList& value_arg);

  const flutter::EncodableMap* a_nullable_map() const;
  void set_a_nullable_map(const flutter::EncodableMap* value_arg);
  void set_a_nullable_map(const flutter::EncodableMap& value_arg);

  const flutter::EncodableList* nullable_nested_list() const;
  void set_nullable_nested_list(const flutter::EncodableList* value_arg);
  void set_nullable_nested_list(const flutter::EncodableList& value_arg);

  const flutter::EncodableMap* nullable_map_with_annotations() const;
  void set_nullable_map_with_annotations(
      const flutter::EncodableMap* value_arg);
  void set_nullable_map_with_annotations(
      const flutter::EncodableMap& value_arg);

  const flutter::EncodableMap* nullable_map_with_object() const;
  void set_nullable_map_with_object(const flutter::EncodableMap* value_arg);
  void set_nullable_map_with_object(const flutter::EncodableMap& value_arg);

  const AnEnum* a_nullable_enum() const;
  void set_a_nullable_enum(const AnEnum* value_arg);
  void set_a_nullable_enum(const AnEnum& value_arg);

  const std::string* a_nullable_string() const;
  void set_a_nullable_string(const std::string_view* value_arg);
  void set_a_nullable_string(std::string_view value_arg);

 private:
  static AllNullableTypes FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class AllNullableTypesWrapper;
  friend class HostIntegrationCoreApi;
  friend class HostIntegrationCoreApiCodecSerializer;
  friend class FlutterIntegrationCoreApi;
  friend class FlutterIntegrationCoreApiCodecSerializer;
  friend class HostTrivialApi;
  friend class HostTrivialApiCodecSerializer;
  friend class HostSmallApi;
  friend class HostSmallApiCodecSerializer;
  friend class FlutterSmallApi;
  friend class FlutterSmallApiCodecSerializer;
  friend class CoreTestsTest;
  std::optional<bool> a_nullable_bool_;
  std::optional<int64_t> a_nullable_int_;
  std::optional<int64_t> a_nullable_int64_;
  std::optional<double> a_nullable_double_;
  std::optional<std::vector<uint8_t>> a_nullable_byte_array_;
  std::optional<std::vector<int32_t>> a_nullable4_byte_array_;
  std::optional<std::vector<int64_t>> a_nullable8_byte_array_;
  std::optional<std::vector<double>> a_nullable_float_array_;
  std::optional<flutter::EncodableList> a_nullable_list_;
  std::optional<flutter::EncodableMap> a_nullable_map_;
  std::optional<flutter::EncodableList> nullable_nested_list_;
  std::optional<flutter::EncodableMap> nullable_map_with_annotations_;
  std::optional<flutter::EncodableMap> nullable_map_with_object_;
  std::optional<AnEnum> a_nullable_enum_;
  std::optional<std::string> a_nullable_string_;
};

// Generated class from Pigeon that represents data sent in messages.
class AllNullableTypesWrapper {
 public:
  // Constructs an object setting all fields.
  explicit AllNullableTypesWrapper(const AllNullableTypes& values);

  const AllNullableTypes& values() const;
  void set_values(const AllNullableTypes& value_arg);

 private:
  static AllNullableTypesWrapper FromEncodableList(
      const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class HostIntegrationCoreApi;
  friend class HostIntegrationCoreApiCodecSerializer;
  friend class FlutterIntegrationCoreApi;
  friend class FlutterIntegrationCoreApiCodecSerializer;
  friend class HostTrivialApi;
  friend class HostTrivialApiCodecSerializer;
  friend class HostSmallApi;
  friend class HostSmallApiCodecSerializer;
  friend class FlutterSmallApi;
  friend class FlutterSmallApiCodecSerializer;
  friend class CoreTestsTest;
  AllNullableTypes values_;
};

// A data class containing a List, used in unit tests.
//
// Generated class from Pigeon that represents data sent in messages.
class TestMessage {
 public:
  // Constructs an object setting all non-nullable fields.
  TestMessage();

  // Constructs an object setting all fields.
  explicit TestMessage(const flutter::EncodableList* test_list);

  const flutter::EncodableList* test_list() const;
  void set_test_list(const flutter::EncodableList* value_arg);
  void set_test_list(const flutter::EncodableList& value_arg);

 private:
  static TestMessage FromEncodableList(const flutter::EncodableList& list);
  flutter::EncodableList ToEncodableList() const;
  friend class HostIntegrationCoreApi;
  friend class HostIntegrationCoreApiCodecSerializer;
  friend class FlutterIntegrationCoreApi;
  friend class FlutterIntegrationCoreApiCodecSerializer;
  friend class HostTrivialApi;
  friend class HostTrivialApiCodecSerializer;
  friend class HostSmallApi;
  friend class HostSmallApiCodecSerializer;
  friend class FlutterSmallApi;
  friend class FlutterSmallApiCodecSerializer;
  friend class CoreTestsTest;
  std::optional<flutter::EncodableList> test_list_;
};

class HostIntegrationCoreApiCodecSerializer
    : public flutter::StandardCodecSerializer {
 public:
  inline static HostIntegrationCoreApiCodecSerializer& GetInstance() {
    static HostIntegrationCoreApiCodecSerializer sInstance;
    return sInstance;
  }

  HostIntegrationCoreApiCodecSerializer();

 public:
  void WriteValue(const flutter::EncodableValue& value,
                  flutter::ByteStreamWriter* stream) const override;

 protected:
  flutter::EncodableValue ReadValueOfType(
      uint8_t type, flutter::ByteStreamReader* stream) const override;
};

// The core interface that each host language plugin must implement in
// platform_test integration tests.
//
// Generated interface from Pigeon that represents a handler of messages from
// Flutter.
class HostIntegrationCoreApi {
 public:
  HostIntegrationCoreApi(const HostIntegrationCoreApi&) = delete;
  HostIntegrationCoreApi& operator=(const HostIntegrationCoreApi&) = delete;
  virtual ~HostIntegrationCoreApi() {}
  // A no-op function taking no arguments and returning no value, to sanity
  // test basic calling.
  virtual std::optional<FlutterError> Noop() = 0;
  // Returns the passed object, to test serialization and deserialization.
  virtual ErrorOr<AllTypes> EchoAllTypes(const AllTypes& everything) = 0;
  // Returns an error, to test error handling.
  virtual ErrorOr<std::optional<flutter::EncodableValue>> ThrowError() = 0;
  // Returns an error from a void function, to test error handling.
  virtual std::optional<FlutterError> ThrowErrorFromVoid() = 0;
  // Returns a Flutter error, to test error handling.
  virtual ErrorOr<std::optional<flutter::EncodableValue>>
  ThrowFlutterError() = 0;
  // Returns passed in int.
  virtual ErrorOr<int64_t> EchoInt(int64_t an_int) = 0;
  // Returns passed in double.
  virtual ErrorOr<double> EchoDouble(double a_double) = 0;
  // Returns the passed in boolean.
  virtual ErrorOr<bool> EchoBool(bool a_bool) = 0;
  // Returns the passed in string.
  virtual ErrorOr<std::string> EchoString(const std::string& a_string) = 0;
  // Returns the passed in Uint8List.
  virtual ErrorOr<std::vector<uint8_t>> EchoUint8List(
      const std::vector<uint8_t>& a_uint8_list) = 0;
  // Returns the passed in generic Object.
  virtual ErrorOr<flutter::EncodableValue> EchoObject(
      const flutter::EncodableValue& an_object) = 0;
  // Returns the passed list, to test serialization and deserialization.
  virtual ErrorOr<flutter::EncodableList> EchoList(
      const flutter::EncodableList& a_list) = 0;
  // Returns the passed map, to test serialization and deserialization.
  virtual ErrorOr<flutter::EncodableMap> EchoMap(
      const flutter::EncodableMap& a_map) = 0;
  // Returns the passed object, to test serialization and deserialization.
  virtual ErrorOr<std::optional<AllNullableTypes>> EchoAllNullableTypes(
      const AllNullableTypes* everything) = 0;
  // Returns the inner `aString` value from the wrapped object, to test
  // sending of nested objects.
  virtual ErrorOr<std::optional<std::string>> ExtractNestedNullableString(
      const AllNullableTypesWrapper& wrapper) = 0;
  // Returns the inner `aString` value from the wrapped object, to test
  // sending of nested objects.
  virtual ErrorOr<AllNullableTypesWrapper> CreateNestedNullableString(
      const std::string* nullable_string) = 0;
  // Returns passed in arguments of multiple types.
  virtual ErrorOr<AllNullableTypes> SendMultipleNullableTypes(
      const bool* a_nullable_bool, const int64_t* a_nullable_int,
      const std::string* a_nullable_string) = 0;
  // Returns passed in int.
  virtual ErrorOr<std::optional<int64_t>> EchoNullableInt(
      const int64_t* a_nullable_int) = 0;
  // Returns passed in double.
  virtual ErrorOr<std::optional<double>> EchoNullableDouble(
      const double* a_nullable_double) = 0;
  // Returns the passed in boolean.
  virtual ErrorOr<std::optional<bool>> EchoNullableBool(
      const bool* a_nullable_bool) = 0;
  // Returns the passed in string.
  virtual ErrorOr<std::optional<std::string>> EchoNullableString(
      const std::string* a_nullable_string) = 0;
  // Returns the passed in Uint8List.
  virtual ErrorOr<std::optional<std::vector<uint8_t>>> EchoNullableUint8List(
      const std::vector<uint8_t>* a_nullable_uint8_list) = 0;
  // Returns the passed in generic Object.
  virtual ErrorOr<std::optional<flutter::EncodableValue>> EchoNullableObject(
      const flutter::EncodableValue* a_nullable_object) = 0;
  // Returns the passed list, to test serialization and deserialization.
  virtual ErrorOr<std::optional<flutter::EncodableList>> EchoNullableList(
      const flutter::EncodableList* a_nullable_list) = 0;
  // Returns the passed map, to test serialization and deserialization.
  virtual ErrorOr<std::optional<flutter::EncodableMap>> EchoNullableMap(
      const flutter::EncodableMap* a_nullable_map) = 0;
  // A no-op function taking no arguments and returning no value, to sanity
  // test basic asynchronous calling.
  virtual void NoopAsync(
      std::function<void(std::optional<FlutterError> reply)> result) = 0;
  // Returns passed in int asynchronously.
  virtual void EchoAsyncInt(
      int64_t an_int, std::function<void(ErrorOr<int64_t> reply)> result) = 0;
  // Returns passed in double asynchronously.
  virtual void EchoAsyncDouble(
      double a_double, std::function<void(ErrorOr<double> reply)> result) = 0;
  // Returns the passed in boolean asynchronously.
  virtual void EchoAsyncBool(
      bool a_bool, std::function<void(ErrorOr<bool> reply)> result) = 0;
  // Returns the passed string asynchronously.
  virtual void EchoAsyncString(
      const std::string& a_string,
      std::function<void(ErrorOr<std::string> reply)> result) = 0;
  // Returns the passed in Uint8List asynchronously.
  virtual void EchoAsyncUint8List(
      const std::vector<uint8_t>& a_uint8_list,
      std::function<void(ErrorOr<std::vector<uint8_t>> reply)> result) = 0;
  // Returns the passed in generic Object asynchronously.
  virtual void EchoAsyncObject(
      const flutter::EncodableValue& an_object,
      std::function<void(ErrorOr<flutter::EncodableValue> reply)> result) = 0;
  // Returns the passed list, to test serialization and deserialization
  // asynchronously.
  virtual void EchoAsyncList(
      const flutter::EncodableList& a_list,
      std::function<void(ErrorOr<flutter::EncodableList> reply)> result) = 0;
  // Returns the passed map, to test serialization and deserialization
  // asynchronously.
  virtual void EchoAsyncMap(
      const flutter::EncodableMap& a_map,
      std::function<void(ErrorOr<flutter::EncodableMap> reply)> result) = 0;
  // Responds with an error from an async function returning a value.
  virtual void ThrowAsyncError(
      std::function<void(ErrorOr<std::optional<flutter::EncodableValue>> reply)>
          result) = 0;
  // Responds with an error from an async void function.
  virtual void ThrowAsyncErrorFromVoid(
      std::function<void(std::optional<FlutterError> reply)> result) = 0;
  // Responds with a Flutter error from an async function returning a value.
  virtual void ThrowAsyncFlutterError(
      std::function<void(ErrorOr<std::optional<flutter::EncodableValue>> reply)>
          result) = 0;
  // Returns the passed object, to test async serialization and deserialization.
  virtual void EchoAsyncAllTypes(
      const AllTypes& everything,
      std::function<void(ErrorOr<AllTypes> reply)> result) = 0;
  // Returns the passed object, to test serialization and deserialization.
  virtual void EchoAsyncNullableAllNullableTypes(
      const AllNullableTypes* everything,
      std::function<void(ErrorOr<std::optional<AllNullableTypes>> reply)>
          result) = 0;
  // Returns passed in int asynchronously.
  virtual void EchoAsyncNullableInt(
      const int64_t* an_int,
      std::function<void(ErrorOr<std::optional<int64_t>> reply)> result) = 0;
  // Returns passed in double asynchronously.
  virtual void EchoAsyncNullableDouble(
      const double* a_double,
      std::function<void(ErrorOr<std::optional<double>> reply)> result) = 0;
  // Returns the passed in boolean asynchronously.
  virtual void EchoAsyncNullableBool(
      const bool* a_bool,
      std::function<void(ErrorOr<std::optional<bool>> reply)> result) = 0;
  // Returns the passed string asynchronously.
  virtual void EchoAsyncNullableString(
      const std::string* a_string,
      std::function<void(ErrorOr<std::optional<std::string>> reply)>
          result) = 0;
  // Returns the passed in Uint8List asynchronously.
  virtual void EchoAsyncNullableUint8List(
      const std::vector<uint8_t>* a_uint8_list,
      std::function<void(ErrorOr<std::optional<std::vector<uint8_t>>> reply)>
          result) = 0;
  // Returns the passed in generic Object asynchronously.
  virtual void EchoAsyncNullableObject(
      const flutter::EncodableValue* an_object,
      std::function<void(ErrorOr<std::optional<flutter::EncodableValue>> reply)>
          result) = 0;
  // Returns the passed list, to test serialization and deserialization
  // asynchronously.
  virtual void EchoAsyncNullableList(
      const flutter::EncodableList* a_list,
      std::function<void(ErrorOr<std::optional<flutter::EncodableList>> reply)>
          result) = 0;
  // Returns the passed map, to test serialization and deserialization
  // asynchronously.
  virtual void EchoAsyncNullableMap(
      const flutter::EncodableMap* a_map,
      std::function<void(ErrorOr<std::optional<flutter::EncodableMap>> reply)>
          result) = 0;
  virtual void CallFlutterNoop(
      std::function<void(std::optional<FlutterError> reply)> result) = 0;
  virtual void CallFlutterThrowError(
      std::function<void(ErrorOr<std::optional<flutter::EncodableValue>> reply)>
          result) = 0;
  virtual void CallFlutterThrowErrorFromVoid(
      std::function<void(std::optional<FlutterError> reply)> result) = 0;
  virtual void CallFlutterEchoAllTypes(
      const AllTypes& everything,
      std::function<void(ErrorOr<AllTypes> reply)> result) = 0;
  virtual void CallFlutterSendMultipleNullableTypes(
      const bool* a_nullable_bool, const int64_t* a_nullable_int,
      const std::string* a_nullable_string,
      std::function<void(ErrorOr<AllNullableTypes> reply)> result) = 0;
  virtual void CallFlutterEchoBool(
      bool a_bool, std::function<void(ErrorOr<bool> reply)> result) = 0;
  virtual void CallFlutterEchoInt(
      int64_t an_int, std::function<void(ErrorOr<int64_t> reply)> result) = 0;
  virtual void CallFlutterEchoDouble(
      double a_double, std::function<void(ErrorOr<double> reply)> result) = 0;
  virtual void CallFlutterEchoString(
      const std::string& a_string,
      std::function<void(ErrorOr<std::string> reply)> result) = 0;
  virtual void CallFlutterEchoUint8List(
      const std::vector<uint8_t>& a_list,
      std::function<void(ErrorOr<std::vector<uint8_t>> reply)> result) = 0;
  virtual void CallFlutterEchoList(
      const flutter::EncodableList& a_list,
      std::function<void(ErrorOr<flutter::EncodableList> reply)> result) = 0;
  virtual void CallFlutterEchoMap(
      const flutter::EncodableMap& a_map,
      std::function<void(ErrorOr<flutter::EncodableMap> reply)> result) = 0;
  virtual void CallFlutterEchoNullableBool(
      const bool* a_bool,
      std::function<void(ErrorOr<std::optional<bool>> reply)> result) = 0;
  virtual void CallFlutterEchoNullableInt(
      const int64_t* an_int,
      std::function<void(ErrorOr<std::optional<int64_t>> reply)> result) = 0;
  virtual void CallFlutterEchoNullableDouble(
      const double* a_double,
      std::function<void(ErrorOr<std::optional<double>> reply)> result) = 0;
  virtual void CallFlutterEchoNullableString(
      const std::string* a_string,
      std::function<void(ErrorOr<std::optional<std::string>> reply)>
          result) = 0;
  virtual void CallFlutterEchoNullableUint8List(
      const std::vector<uint8_t>* a_list,
      std::function<void(ErrorOr<std::optional<std::vector<uint8_t>>> reply)>
          result) = 0;
  virtual void CallFlutterEchoNullableList(
      const flutter::EncodableList* a_list,
      std::function<void(ErrorOr<std::optional<flutter::EncodableList>> reply)>
          result) = 0;
  virtual void CallFlutterEchoNullableMap(
      const flutter::EncodableMap* a_map,
      std::function<void(ErrorOr<std::optional<flutter::EncodableMap>> reply)>
          result) = 0;

  // The codec used by HostIntegrationCoreApi.
  static const flutter::StandardMessageCodec& GetCodec();
  // Sets up an instance of `HostIntegrationCoreApi` to handle messages through
  // the `binary_messenger`.
  static void SetUp(flutter::BinaryMessenger* binary_messenger,
                    HostIntegrationCoreApi* api);
  static flutter::EncodableValue WrapError(std::string_view error_message);
  static flutter::EncodableValue WrapError(const FlutterError& error);

 protected:
  HostIntegrationCoreApi() = default;
};
class FlutterIntegrationCoreApiCodecSerializer
    : public flutter::StandardCodecSerializer {
 public:
  inline static FlutterIntegrationCoreApiCodecSerializer& GetInstance() {
    static FlutterIntegrationCoreApiCodecSerializer sInstance;
    return sInstance;
  }

  FlutterIntegrationCoreApiCodecSerializer();

 public:
  void WriteValue(const flutter::EncodableValue& value,
                  flutter::ByteStreamWriter* stream) const override;

 protected:
  flutter::EncodableValue ReadValueOfType(
      uint8_t type, flutter::ByteStreamReader* stream) const override;
};

// The core interface that the Dart platform_test code implements for host
// integration tests to call into.
//
// Generated class from Pigeon that represents Flutter messages that can be
// called from C++.
class FlutterIntegrationCoreApi {
 private:
  flutter::BinaryMessenger* binary_messenger_;

 public:
  FlutterIntegrationCoreApi(flutter::BinaryMessenger* binary_messenger);
  static const flutter::StandardMessageCodec& GetCodec();
  // A no-op function taking no arguments and returning no value, to sanity
  // test basic calling.
  void Noop(std::function<void(void)>&& on_success,
            std::function<void(const FlutterError&)>&& on_error);
  // Responds with an error from an async function returning a value.
  void ThrowError(
      std::function<void(const flutter::EncodableValue*)>&& on_success,
      std::function<void(const FlutterError&)>&& on_error);
  // Responds with an error from an async void function.
  void ThrowErrorFromVoid(std::function<void(void)>&& on_success,
                          std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed object, to test serialization and deserialization.
  void EchoAllTypes(const AllTypes& everything,
                    std::function<void(const AllTypes&)>&& on_success,
                    std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed object, to test serialization and deserialization.
  void EchoAllNullableTypes(
      const AllNullableTypes& everything,
      std::function<void(const AllNullableTypes&)>&& on_success,
      std::function<void(const FlutterError&)>&& on_error);
  // Returns passed in arguments of multiple types.
  //
  // Tests multiple-arity FlutterApi handling.
  void SendMultipleNullableTypes(
      const bool* a_nullable_bool, const int64_t* a_nullable_int,
      const std::string* a_nullable_string,
      std::function<void(const AllNullableTypes&)>&& on_success,
      std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed boolean, to test serialization and deserialization.
  void EchoBool(bool a_bool, std::function<void(bool)>&& on_success,
                std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed int, to test serialization and deserialization.
  void EchoInt(int64_t an_int, std::function<void(int64_t)>&& on_success,
               std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed double, to test serialization and deserialization.
  void EchoDouble(double a_double, std::function<void(double)>&& on_success,
                  std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed string, to test serialization and deserialization.
  void EchoString(const std::string& a_string,
                  std::function<void(const std::string&)>&& on_success,
                  std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed byte list, to test serialization and deserialization.
  void EchoUint8List(
      const std::vector<uint8_t>& a_list,
      std::function<void(const std::vector<uint8_t>&)>&& on_success,
      std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed list, to test serialization and deserialization.
  void EchoList(const flutter::EncodableList& a_list,
                std::function<void(const flutter::EncodableList&)>&& on_success,
                std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed map, to test serialization and deserialization.
  void EchoMap(const flutter::EncodableMap& a_map,
               std::function<void(const flutter::EncodableMap&)>&& on_success,
               std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed boolean, to test serialization and deserialization.
  void EchoNullableBool(const bool* a_bool,
                        std::function<void(const bool*)>&& on_success,
                        std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed int, to test serialization and deserialization.
  void EchoNullableInt(const int64_t* an_int,
                       std::function<void(const int64_t*)>&& on_success,
                       std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed double, to test serialization and deserialization.
  void EchoNullableDouble(const double* a_double,
                          std::function<void(const double*)>&& on_success,
                          std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed string, to test serialization and deserialization.
  void EchoNullableString(const std::string* a_string,
                          std::function<void(const std::string*)>&& on_success,
                          std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed byte list, to test serialization and deserialization.
  void EchoNullableUint8List(
      const std::vector<uint8_t>* a_list,
      std::function<void(const std::vector<uint8_t>*)>&& on_success,
      std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed list, to test serialization and deserialization.
  void EchoNullableList(
      const flutter::EncodableList* a_list,
      std::function<void(const flutter::EncodableList*)>&& on_success,
      std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed map, to test serialization and deserialization.
  void EchoNullableMap(
      const flutter::EncodableMap* a_map,
      std::function<void(const flutter::EncodableMap*)>&& on_success,
      std::function<void(const FlutterError&)>&& on_error);
  // A no-op function taking no arguments and returning no value, to sanity
  // test basic asynchronous calling.
  void NoopAsync(std::function<void(void)>&& on_success,
                 std::function<void(const FlutterError&)>&& on_error);
  // Returns the passed in generic Object asynchronously.
  void EchoAsyncString(const std::string& a_string,
                       std::function<void(const std::string&)>&& on_success,
                       std::function<void(const FlutterError&)>&& on_error);
};

// An API that can be implemented for minimal, compile-only tests.
//
// Generated interface from Pigeon that represents a handler of messages from
// Flutter.
class HostTrivialApi {
 public:
  HostTrivialApi(const HostTrivialApi&) = delete;
  HostTrivialApi& operator=(const HostTrivialApi&) = delete;
  virtual ~HostTrivialApi() {}
  virtual std::optional<FlutterError> Noop() = 0;

  // The codec used by HostTrivialApi.
  static const flutter::StandardMessageCodec& GetCodec();
  // Sets up an instance of `HostTrivialApi` to handle messages through the
  // `binary_messenger`.
  static void SetUp(flutter::BinaryMessenger* binary_messenger,
                    HostTrivialApi* api);
  static flutter::EncodableValue WrapError(std::string_view error_message);
  static flutter::EncodableValue WrapError(const FlutterError& error);

 protected:
  HostTrivialApi() = default;
};
// A simple API implemented in some unit tests.
//
// Generated interface from Pigeon that represents a handler of messages from
// Flutter.
class HostSmallApi {
 public:
  HostSmallApi(const HostSmallApi&) = delete;
  HostSmallApi& operator=(const HostSmallApi&) = delete;
  virtual ~HostSmallApi() {}
  virtual void Echo(const std::string& a_string,
                    std::function<void(ErrorOr<std::string> reply)> result) = 0;
  virtual void VoidVoid(
      std::function<void(std::optional<FlutterError> reply)> result) = 0;

  // The codec used by HostSmallApi.
  static const flutter::StandardMessageCodec& GetCodec();
  // Sets up an instance of `HostSmallApi` to handle messages through the
  // `binary_messenger`.
  static void SetUp(flutter::BinaryMessenger* binary_messenger,
                    HostSmallApi* api);
  static flutter::EncodableValue WrapError(std::string_view error_message);
  static flutter::EncodableValue WrapError(const FlutterError& error);

 protected:
  HostSmallApi() = default;
};
class FlutterSmallApiCodecSerializer : public flutter::StandardCodecSerializer {
 public:
  inline static FlutterSmallApiCodecSerializer& GetInstance() {
    static FlutterSmallApiCodecSerializer sInstance;
    return sInstance;
  }

  FlutterSmallApiCodecSerializer();

 public:
  void WriteValue(const flutter::EncodableValue& value,
                  flutter::ByteStreamWriter* stream) const override;

 protected:
  flutter::EncodableValue ReadValueOfType(
      uint8_t type, flutter::ByteStreamReader* stream) const override;
};

// A simple API called in some unit tests.
//
// Generated class from Pigeon that represents Flutter messages that can be
// called from C++.
class FlutterSmallApi {
 private:
  flutter::BinaryMessenger* binary_messenger_;

 public:
  FlutterSmallApi(flutter::BinaryMessenger* binary_messenger);
  static const flutter::StandardMessageCodec& GetCodec();
  void EchoWrappedList(const TestMessage& msg,
                       std::function<void(const TestMessage&)>&& on_success,
                       std::function<void(const FlutterError&)>&& on_error);
};

}  // namespace core_tests_pigeontest
#endif  // PIGEON_CORE_TESTS_GEN_H_
