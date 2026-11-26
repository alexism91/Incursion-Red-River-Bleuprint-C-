#include "MovieJobVariableAssignmentContainer.h"

UMovieJobVariableAssignmentContainer::UMovieJobVariableAssignmentContainer() {
}

bool UMovieJobVariableAssignmentContainer::SetVariableAssignmentEnableState(const UMovieGraphVariable* InGraphVariable, bool bIsEnabled) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueText(const UMovieGraphVariable* InGraphVariable, const FText& InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueString(const UMovieGraphVariable* InGraphVariable, const FString& InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueSerializedString(const UMovieGraphVariable* InGraphVariable, const FString& NewValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueObject(const UMovieGraphVariable* InGraphVariable, UObject* InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueName(const UMovieGraphVariable* InGraphVariable, const FName InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueInt64(const UMovieGraphVariable* InGraphVariable, const int64 InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueInt32(const UMovieGraphVariable* InGraphVariable, const int32 InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueFloat(const UMovieGraphVariable* InGraphVariable, const float InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueEnum(const UMovieGraphVariable* InGraphVariable, const uint8 InValue, const UEnum* Enum) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueDouble(const UMovieGraphVariable* InGraphVariable, const double InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueClass(const UMovieGraphVariable* InGraphVariable, UClass* InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueByte(const UMovieGraphVariable* InGraphVariable, const uint8 InValue) {
    return false;
}

bool UMovieJobVariableAssignmentContainer::SetValueBool(const UMovieGraphVariable* InGraphVariable, const bool bInValue) {
    return false;
}

void UMovieJobVariableAssignmentContainer::SetGraphConfig(const TSoftObjectPtr<UMovieGraphConfig>& InGraphConfig) {
}

bool UMovieJobVariableAssignmentContainer::GetVariableAssignmentEnableState(const UMovieGraphVariable* InGraphVariable, bool& bOutIsEnabled) {
    return false;
}

UObject* UMovieJobVariableAssignmentContainer::GetValueTypeObject(const UMovieGraphVariable* InGraphVariable) const {
    return NULL;
}

EMovieGraphValueType UMovieJobVariableAssignmentContainer::GetValueType(const UMovieGraphVariable* InGraphVariable) const {
    return EMovieGraphValueType::None;
}

bool UMovieJobVariableAssignmentContainer::GetValueText(const UMovieGraphVariable* InGraphVariable, FText& OutValue) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueString(const UMovieGraphVariable* InGraphVariable, FString& OutValue) const {
    return false;
}

FString UMovieJobVariableAssignmentContainer::GetValueSerializedString(const UMovieGraphVariable* InGraphVariable) {
    return TEXT("");
}

bool UMovieJobVariableAssignmentContainer::GetValueObject(const UMovieGraphVariable* InGraphVariable, UObject* OutValue, const UClass* RequestedClass) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueName(const UMovieGraphVariable* InGraphVariable, FName& OutValue) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueInt64(const UMovieGraphVariable* InGraphVariable, int64& OutValue) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueInt32(const UMovieGraphVariable* InGraphVariable, int32& OutValue) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueFloat(const UMovieGraphVariable* InGraphVariable, float& OutValue) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueEnum(const UMovieGraphVariable* InGraphVariable, uint8& OutValue, const UEnum* RequestedEnum) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueDouble(const UMovieGraphVariable* InGraphVariable, double& OutValue) const {
    return false;
}

EMovieGraphContainerType UMovieJobVariableAssignmentContainer::GetValueContainerType(const UMovieGraphVariable* InGraphVariable) const {
    return EMovieGraphContainerType::None;
}

bool UMovieJobVariableAssignmentContainer::GetValueClass(const UMovieGraphVariable* InGraphVariable, UClass*& OutValue) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueByte(const UMovieGraphVariable* InGraphVariable, uint8& OutValue) const {
    return false;
}

bool UMovieJobVariableAssignmentContainer::GetValueBool(const UMovieGraphVariable* InGraphVariable, bool& bOutValue) const {
    return false;
}

TSoftObjectPtr<UMovieGraphConfig> UMovieJobVariableAssignmentContainer::GetGraphConfig() const {
    return NULL;
}


