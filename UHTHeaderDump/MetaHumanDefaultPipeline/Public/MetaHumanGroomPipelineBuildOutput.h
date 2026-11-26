#pragma once
#include "CoreMinimal.h"
#include "MetaHumanGroomPipelineBuildOutput.generated.h"

class UGroomBindingAsset;

USTRUCT(BlueprintType)
struct FMetaHumanGroomPipelineBuildOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGroomBindingAsset*> Bindings;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanGroomPipelineBuildOutput();
};

