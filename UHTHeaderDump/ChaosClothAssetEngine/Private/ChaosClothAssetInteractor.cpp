#include "ChaosClothAssetInteractor.h"

UChaosClothAssetInteractor::UChaosClothAssetInteractor() {
}

void UChaosClothAssetInteractor::SetWeightedFloatValue(const FString& PropertyName, int32 LODIndex, FVector2D Value) {
}

void UChaosClothAssetInteractor::SetVectorValue(const FString& PropertyName, int32 LODIndex, FVector Value) {
}

void UChaosClothAssetInteractor::SetStringValue(const FString& PropertyName, int32 LODIndex, const FString& Value) {
}

void UChaosClothAssetInteractor::SetLowFloatValue(const FString& PropertyName, int32 LODIndex, float Value) {
}

void UChaosClothAssetInteractor::SetIntValue(const FString& PropertyName, int32 LODIndex, int32 Value) {
}

void UChaosClothAssetInteractor::SetHighFloatValue(const FString& PropertyName, int32 LODIndex, float Value) {
}

void UChaosClothAssetInteractor::SetFloatValue(const FString& PropertyName, int32 LODIndex, float Value) {
}

FVector2D UChaosClothAssetInteractor::GetWeightedFloatValue(const FString& PropertyName, int32 LODIndex, FVector2D DefaultValue) const {
    return FVector2D{};
}

FVector UChaosClothAssetInteractor::GetVectorValue(const FString& PropertyName, int32 LODIndex, FVector DefaultValue) const {
    return FVector{};
}

FString UChaosClothAssetInteractor::GetStringValue(const FString& PropertyName, int32 LODIndex, const FString& DefaultValue) const {
    return TEXT("");
}

float UChaosClothAssetInteractor::GetLowFloatValue(const FString& PropertyName, int32 LODIndex, float DefaultValue) const {
    return 0.0f;
}

int32 UChaosClothAssetInteractor::GetIntValue(const FString& PropertyName, int32 LODIndex, int32 DefaultValue) const {
    return 0;
}

float UChaosClothAssetInteractor::GetHighFloatValue(const FString& PropertyName, int32 LODIndex, float DefaultValue) const {
    return 0.0f;
}

float UChaosClothAssetInteractor::GetFloatValue(const FString& PropertyName, int32 LODIndex, float DefaultValue) const {
    return 0.0f;
}

TArray<FString> UChaosClothAssetInteractor::GetAllProperties(int32 LODIndex) const {
    return TArray<FString>();
}


