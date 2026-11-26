#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanPaletteItemKey -FallbackName=MetaHumanPaletteItemKey
#include "MetaHumanOutfitGeneratedAssets.h"
#include "MetaHumanOutfitPipelineBuildOutput.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanOutfitPipelineBuildOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMetaHumanPaletteItemKey, FMetaHumanOutfitGeneratedAssets> CharacterAssets;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanOutfitPipelineBuildOutput();
};

