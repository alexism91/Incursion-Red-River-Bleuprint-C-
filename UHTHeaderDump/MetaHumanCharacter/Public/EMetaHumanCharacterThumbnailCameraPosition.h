#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterThumbnailCameraPosition.generated.h"

UENUM(BlueprintType)
enum class EMetaHumanCharacterThumbnailCameraPosition : uint8 {
    Face,
    Body,
    Character_Body,
    Character_Face,
};

