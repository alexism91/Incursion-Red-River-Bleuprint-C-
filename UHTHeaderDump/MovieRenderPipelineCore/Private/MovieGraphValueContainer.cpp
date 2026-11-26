#include "MovieGraphValueContainer.h"

UMovieGraphValueContainer::UMovieGraphValueContainer() {
    this->PropertyName = TEXT("Value");
}

void UMovieGraphValueContainer::SetValueTypeObject(const UObject* ValueTypeObject) {
}

void UMovieGraphValueContainer::SetValueType(EMovieGraphValueType ValueType, UObject* InValueTypeObject) {
}

bool UMovieGraphValueContainer::SetValueText(const FText& InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueString(const FString& InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueSerializedString(const FString& NewValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueObject(UObject* InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueName(const FName InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueInt64(const int64 InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueInt32(const int32 InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueFloat(const float InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueEnum(const uint8 InValue, const UEnum* Enum) {
    return false;
}

bool UMovieGraphValueContainer::SetValueDouble(const double InValue) {
    return false;
}

void UMovieGraphValueContainer::SetValueContainerType(EMovieGraphContainerType ContainerType) {
}

bool UMovieGraphValueContainer::SetValueClass(UClass* InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueByte(const uint8 InValue) {
    return false;
}

bool UMovieGraphValueContainer::SetValueBool(const bool bInValue) {
    return false;
}

UObject* UMovieGraphValueContainer::GetValueTypeObject() const {
    return NULL;
}

EMovieGraphValueType UMovieGraphValueContainer::GetValueType() const {
    return EMovieGraphValueType::None;
}

bool UMovieGraphValueContainer::GetValueText(FText& OutValue) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueString(FString& OutValue) const {
    return false;
}

FString UMovieGraphValueContainer::GetValueSerializedString() {
    return TEXT("");
}

bool UMovieGraphValueContainer::GetValueObject(UObject* OutValue, const UClass* RequestedClass) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueName(FName& OutValue) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueInt64(int64& OutValue) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueInt32(int32& OutValue) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueFloat(float& OutValue) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueEnum(uint8& OutValue, const UEnum* RequestedEnum) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueDouble(double& OutValue) const {
    return false;
}

EMovieGraphContainerType UMovieGraphValueContainer::GetValueContainerType() const {
    return EMovieGraphContainerType::None;
}

bool UMovieGraphValueContainer::GetValueClass(UClass*& OutValue) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueByte(uint8& OutValue) const {
    return false;
}

bool UMovieGraphValueContainer::GetValueBool(bool& bOutValue) const {
    return false;
}


