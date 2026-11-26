#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterPaletteItem.generated.h"

class UMetaHumanWardrobeItem;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanCharacterPaletteItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMetaHumanWardrobeItem* WardrobeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    FMetaHumanCharacterPaletteItem();
};

