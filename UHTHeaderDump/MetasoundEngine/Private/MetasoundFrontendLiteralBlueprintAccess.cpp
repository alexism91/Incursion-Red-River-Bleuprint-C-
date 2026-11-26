#include "MetasoundFrontendLiteralBlueprintAccess.h"

UMetasoundFrontendLiteralBlueprintAccess::UMetasoundFrontendLiteralBlueprintAccess() {
}

EMetasoundFrontendLiteralType UMetasoundFrontendLiteralBlueprintAccess::GetType(const FMetasoundFrontendLiteral& Literal) {
    return EMetasoundFrontendLiteralType::None;
}

FString UMetasoundFrontendLiteralBlueprintAccess::GetStringValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return TEXT("");
}

TArray<FString> UMetasoundFrontendLiteralBlueprintAccess::GetStringArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return TArray<FString>();
}

UObject* UMetasoundFrontendLiteralBlueprintAccess::GetObjectValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return NULL;
}

TArray<UObject*> UMetasoundFrontendLiteralBlueprintAccess::GetObjectArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return TArray<UObject*>();
}

int32 UMetasoundFrontendLiteralBlueprintAccess::GetIntValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return 0;
}

TArray<int32> UMetasoundFrontendLiteralBlueprintAccess::GetIntArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return TArray<int32>();
}

float UMetasoundFrontendLiteralBlueprintAccess::GetFloatValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return 0.0f;
}

TArray<float> UMetasoundFrontendLiteralBlueprintAccess::GetFloatArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return TArray<float>();
}

bool UMetasoundFrontendLiteralBlueprintAccess::GetBoolValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return false;
}

TArray<bool> UMetasoundFrontendLiteralBlueprintAccess::GetBoolArrayValueFromLiteral(const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult) {
    return TArray<bool>();
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateStringMetaSoundLiteral(const FString& Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateStringArrayMetaSoundLiteral(const TArray<FString>& Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateObjectMetaSoundLiteral(UObject* Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateObjectArrayMetaSoundLiteral(const TArray<UObject*>& Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateMetaSoundLiteralFromParam(const FAudioParameter& Param) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateIntMetaSoundLiteral(int32 Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateIntArrayMetaSoundLiteral(const TArray<int32>& Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateFloatMetaSoundLiteral(float Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateFloatArrayMetaSoundLiteral(const TArray<float>& Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateBoolMetaSoundLiteral(bool Value) {
    return FMetasoundFrontendLiteral{};
}

FMetasoundFrontendLiteral UMetasoundFrontendLiteralBlueprintAccess::CreateBoolArrayMetaSoundLiteral(const TArray<bool>& Value) {
    return FMetasoundFrontendLiteral{};
}

FString UMetasoundFrontendLiteralBlueprintAccess::Conv_MetaSoundLiteralToString(const FMetasoundFrontendLiteral& Literal) {
    return TEXT("");
}


