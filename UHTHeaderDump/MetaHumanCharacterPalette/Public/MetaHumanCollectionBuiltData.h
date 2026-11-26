#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterPaletteBuildQuality.h"
#include "MetaHumanPaletteBuiltData.h"
#include "MetaHumanPinnedSlotSelection.h"
#include "MetaHumanCollectionBuiltData.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanCollectionBuiltData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanPaletteBuiltData PaletteBuiltData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanPinnedSlotSelection> SortedPinnedSlotSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaHumanCharacterPaletteBuildQuality Quality;
    
    FMetaHumanCollectionBuiltData();
};

