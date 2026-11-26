#pragma once
#include "CoreMinimal.h"
#include "EHairLODTransition.generated.h"

UENUM(BlueprintType)
enum class EHairLODTransition : uint8 {
    StrandsToCardsToMesh,
    StrandsToCardsToTexture,
    StrandsToCardsAndTextureToTexture,
    StrandsToCardsAndTextureToMeshToTexture,
    StrandsToTexture,
};

