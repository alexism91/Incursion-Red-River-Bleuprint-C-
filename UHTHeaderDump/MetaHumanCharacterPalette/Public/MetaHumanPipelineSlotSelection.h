#pragma once
#include "CoreMinimal.h"
#include "MetaHumanPaletteItemKey.h"
#include "MetaHumanPaletteItemPath.h"
#include "MetaHumanPipelineSlotSelection.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanPipelineSlotSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanPaletteItemPath ParentItemPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanPaletteItemKey SelectedItem;
    
    FMetaHumanPipelineSlotSelection();
};

