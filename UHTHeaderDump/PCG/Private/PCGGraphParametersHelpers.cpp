#include "PCGGraphParametersHelpers.h"

UPCGGraphParametersHelpers::UPCGGraphParametersHelpers() {
}

void UPCGGraphParametersHelpers::SetVectorParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FVector& Value) {
}

void UPCGGraphParametersHelpers::SetVector4Parameter(UPCGGraphInterface* GraphInterface, const FName Name, const FVector4& Value) {
}

void UPCGGraphParametersHelpers::SetVector2DParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FVector2D& Value) {
}

void UPCGGraphParametersHelpers::SetTransformParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FTransform& Value) {
}

void UPCGGraphParametersHelpers::SetStringParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FString& Value) {
}

void UPCGGraphParametersHelpers::SetSoftObjectPathParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FSoftObjectPath& Value) {
}

void UPCGGraphParametersHelpers::SetSoftObjectParameter(UPCGGraphInterface* GraphInterface, const FName Name, const TSoftObjectPtr<UObject>& Value) {
}

void UPCGGraphParametersHelpers::SetSoftClassParameter(UPCGGraphInterface* GraphInterface, const FName Name, const TSoftClassPtr<UObject>& Value) {
}

void UPCGGraphParametersHelpers::SetRotatorParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FRotator& Value) {
}

void UPCGGraphParametersHelpers::SetQuaternionParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FQuat& Value) {
}

void UPCGGraphParametersHelpers::SetObjectParameter(UPCGGraphInterface* GraphInterface, const FName Name, UObject* Value) {
}

void UPCGGraphParametersHelpers::SetNameParameter(UPCGGraphInterface* GraphInterface, const FName Name, const FName Value) {
}

void UPCGGraphParametersHelpers::SetInt64Parameter(UPCGGraphInterface* GraphInterface, const FName Name, const int64 Value) {
}

void UPCGGraphParametersHelpers::SetInt32Parameter(UPCGGraphInterface* GraphInterface, const FName Name, const int32 Value) {
}

void UPCGGraphParametersHelpers::SetFloatParameter(UPCGGraphInterface* GraphInterface, const FName Name, const float Value) {
}

void UPCGGraphParametersHelpers::SetEnumParameter(UPCGGraphInterface* GraphInterface, const FName Name, const uint8 Value, const UEnum* Enum) {
}

void UPCGGraphParametersHelpers::SetDoubleParameter(UPCGGraphInterface* GraphInterface, const FName Name, const double Value) {
}

void UPCGGraphParametersHelpers::SetClassParameter(UPCGGraphInterface* GraphInterface, const FName Name, UClass* Value) {
}

void UPCGGraphParametersHelpers::SetByteParameter(UPCGGraphInterface* GraphInterface, const FName Name, const uint8 Value) {
}

void UPCGGraphParametersHelpers::SetBoolParameter(UPCGGraphInterface* GraphInterface, const FName Name, const bool bValue) {
}

bool UPCGGraphParametersHelpers::IsOverridden(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return false;
}

FVector UPCGGraphParametersHelpers::GetVectorParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return FVector{};
}

FVector4 UPCGGraphParametersHelpers::GetVector4Parameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return FVector4{};
}

FVector2D UPCGGraphParametersHelpers::GetVector2DParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return FVector2D{};
}

FTransform UPCGGraphParametersHelpers::GetTransformParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return FTransform{};
}

FString UPCGGraphParametersHelpers::GetStringParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return TEXT("");
}

FSoftObjectPath UPCGGraphParametersHelpers::GetSoftObjectPathParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return FSoftObjectPath{};
}

TSoftObjectPtr<UObject> UPCGGraphParametersHelpers::GetSoftObjectParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return NULL;
}

TSoftClassPtr<UObject> UPCGGraphParametersHelpers::GetSoftClassParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return NULL;
}

FRotator UPCGGraphParametersHelpers::GetRotatorParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return FRotator{};
}

FQuat UPCGGraphParametersHelpers::GetQuaternionParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return FQuat{};
}

UObject* UPCGGraphParametersHelpers::GetObjectParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return NULL;
}

FName UPCGGraphParametersHelpers::GetNameParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return NAME_None;
}

int64 UPCGGraphParametersHelpers::GetInt64Parameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return 0;
}

int32 UPCGGraphParametersHelpers::GetInt32Parameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return 0;
}

float UPCGGraphParametersHelpers::GetFloatParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return 0.0f;
}

uint8 UPCGGraphParametersHelpers::GetEnumParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return 0;
}

double UPCGGraphParametersHelpers::GetDoubleParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return 0.0;
}

UClass* UPCGGraphParametersHelpers::GetClassParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return NULL;
}

uint8 UPCGGraphParametersHelpers::GetByteParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return 0;
}

bool UPCGGraphParametersHelpers::GetBoolParameter(const UPCGGraphInterface* GraphInterface, const FName Name) {
    return false;
}


