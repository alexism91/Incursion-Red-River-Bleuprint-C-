#pragma once
#include "CoreMinimal.h"
#include "MetaHumanGroomPipelineAssemblyInput.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FMetaHumanGroomPipelineAssemblyInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TargetMesh;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanGroomPipelineAssemblyInput();
};

