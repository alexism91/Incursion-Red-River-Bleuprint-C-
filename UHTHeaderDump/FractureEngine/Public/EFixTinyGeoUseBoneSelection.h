#pragma once
#include "CoreMinimal.h"
#include "EFixTinyGeoUseBoneSelection.generated.h"

UENUM(BlueprintType)
enum class EFixTinyGeoUseBoneSelection : uint8 {
    NoEffect,
    AlsoMergeSelected,
    OnlyMergeSelected,
};

