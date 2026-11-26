#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacter -ObjectName=MetaHumanCharacterGeneratedAssets -FallbackName=MetaHumanCharacterGeneratedAssets
#include "MetaHumanCharacterPartOutput.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanCharacterPartOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterGeneratedAssets GeneratedAssets;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanCharacterPartOutput();
};

