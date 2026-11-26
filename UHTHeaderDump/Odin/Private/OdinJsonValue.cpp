#include "OdinJsonValue.h"

UOdinJsonValue::UOdinJsonValue() {
}

bool UOdinJsonValue::IsNull() const {
    return false;
}

FString UOdinJsonValue::GetTypeString() const {
    return TEXT("");
}

TEnumAsByte<EOJson::Type> UOdinJsonValue::GetType() const {
    return EOJson::None;
}

UOdinJsonValue* UOdinJsonValue::ConstructJsonValueString(UObject* WorldContextObject, const FString& StringValue) {
    return NULL;
}

UOdinJsonValue* UOdinJsonValue::ConstructJsonValueObject(UObject* WorldContextObject, UOdinJsonObject* JsonObject) {
    return NULL;
}

UOdinJsonValue* UOdinJsonValue::ConstructJsonValueNumber(UObject* WorldContextObject, float Number) {
    return NULL;
}

UOdinJsonValue* UOdinJsonValue::ConstructJsonValueBool(UObject* WorldContextObject, bool InValue) {
    return NULL;
}

UOdinJsonValue* UOdinJsonValue::ConstructJsonValueArray(UObject* WorldContextObject, const TArray<UOdinJsonValue*>& inArray) {
    return NULL;
}

FString UOdinJsonValue::AsString() const {
    return TEXT("");
}

UOdinJsonObject* UOdinJsonValue::AsObject() const {
    return NULL;
}

float UOdinJsonValue::AsNumber() const {
    return 0.0f;
}

bool UOdinJsonValue::AsBool() const {
    return false;
}

TArray<UOdinJsonValue*> UOdinJsonValue::AsArray() const {
    return TArray<UOdinJsonValue*>();
}


