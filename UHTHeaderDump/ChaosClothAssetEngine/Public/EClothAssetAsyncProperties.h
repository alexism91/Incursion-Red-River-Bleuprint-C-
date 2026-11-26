#pragma once
#include "CoreMinimal.h"
#include "EClothAssetAsyncProperties.generated.h"

UENUM()
enum class EClothAssetAsyncProperties {
    None,
    RenderData,
    ThumbnailInfo,
    ImportedModel = 4,
    ClothCollection = 8,
    RefSkeleton = 16,
    All = 4294967295,
};

