#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanPaletteItemKey -FallbackName=MetaHumanPaletteItemKey
#include "MetaHumanOutfitPipelineAssemblyInput.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanOutfitPipelineAssemblyInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanPaletteItemKey SelectedCharacter;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanOutfitPipelineAssemblyInput();
};

