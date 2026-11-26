#include "SharedImageConstRefBlueprintFns.h"

USharedImageConstRefBlueprintFns::USharedImageConstRefBlueprintFns() {
}

bool USharedImageConstRefBlueprintFns::IsValid(const FSharedImageConstRefBlueprint& Image) {
    return false;
}

int32 USharedImageConstRefBlueprintFns::GetWidth(const FSharedImageConstRefBlueprint& Image) {
    return 0;
}

FVector2f USharedImageConstRefBlueprintFns::GetSize(const FSharedImageConstRefBlueprint& Image) {
    return FVector2f{};
}

FVector4f USharedImageConstRefBlueprintFns::GetPixelValue(const FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool& bValid) {
    return FVector4f{};
}

FLinearColor USharedImageConstRefBlueprintFns::GetPixelLinearColor(const FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool& bValid, FLinearColor FailureColor) {
    return FLinearColor{};
}

int32 USharedImageConstRefBlueprintFns::GetHeight(const FSharedImageConstRefBlueprint& Image) {
    return 0;
}


