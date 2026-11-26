#include "OdinJsonObject.h"

UOdinJsonObject::UOdinJsonObject() {
}

void UOdinJsonObject::SetStringField(const FString& FieldName, const FString& StringValue) {
}

void UOdinJsonObject::SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray) {
}

void UOdinJsonObject::SetObjectField(const FString& FieldName, UOdinJsonObject* JsonObject) {
}

void UOdinJsonObject::SetObjectArrayField(const FString& FieldName, const TArray<UOdinJsonObject*>& ObjectArray) {
}

void UOdinJsonObject::SetNumberField(const FString& FieldName, float Number) {
}

void UOdinJsonObject::SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray) {
}

void UOdinJsonObject::SetFieldNull(const FString& FieldName) {
}

void UOdinJsonObject::SetField(const FString& FieldName, UOdinJsonValue* JsonValue) {
}

void UOdinJsonObject::SetBoolField(const FString& FieldName, bool InValue) {
}

void UOdinJsonObject::SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray) {
}

void UOdinJsonObject::SetArrayField(const FString& FieldName, const TArray<UOdinJsonValue*>& inArray) {
}

void UOdinJsonObject::Reset() {
}

void UOdinJsonObject::RemoveField(const FString& FieldName) {
}

void UOdinJsonObject::MergeJsonObject(UOdinJsonObject* InJsonObject, bool Overwrite) {
}

bool UOdinJsonObject::HasField(const FString& FieldName) const {
    return false;
}

FString UOdinJsonObject::GetStringField(const FString& FieldName) const {
    return TEXT("");
}

TArray<FString> UOdinJsonObject::GetStringArrayField(const FString& FieldName) {
    return TArray<FString>();
}

UOdinJsonObject* UOdinJsonObject::GetObjectField(const FString& FieldName) const {
    return NULL;
}

TArray<UOdinJsonObject*> UOdinJsonObject::GetObjectArrayField(const FString& FieldName) const {
    return TArray<UOdinJsonObject*>();
}

float UOdinJsonObject::GetNumberField(const FString& FieldName) const {
    return 0.0f;
}

TArray<float> UOdinJsonObject::GetNumberArrayField(const FString& FieldName) {
    return TArray<float>();
}

TArray<FString> UOdinJsonObject::GetFieldNames() const {
    return TArray<FString>();
}

UOdinJsonValue* UOdinJsonObject::GetField(const FString& FieldName) const {
    return NULL;
}

bool UOdinJsonObject::GetBoolField(const FString& FieldName) const {
    return false;
}

TArray<bool> UOdinJsonObject::GetBoolArrayField(const FString& FieldName) {
    return TArray<bool>();
}

TArray<UOdinJsonValue*> UOdinJsonObject::GetArrayField(const FString& FieldName) const {
    return TArray<UOdinJsonValue*>();
}

TArray<uint8> UOdinJsonObject::EncodeJsonBytes() const {
    return TArray<uint8>();
}

FString UOdinJsonObject::EncodeJson() const {
    return TEXT("");
}

bool UOdinJsonObject::DecodeJson(const FString& JsonString) {
    return false;
}

UOdinJsonObject* UOdinJsonObject::ConstructJsonObjectFromString(UObject* WorldContextObject, const FString& Data) {
    return NULL;
}

UOdinJsonObject* UOdinJsonObject::ConstructJsonObjectFromBytes(UObject* WorldContextObject, const TArray<uint8>& Data) {
    return NULL;
}

UOdinJsonObject* UOdinJsonObject::ConstructJsonObject(UObject* WorldContextObject) {
    return NULL;
}


