#pragma once
#include "CoreMinimal.h"
#include "MetaHumanSkeletalMeshPipelineAssemblyInput.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FMetaHumanSkeletalMeshPipelineAssemblyInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* TargetMesh;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanSkeletalMeshPipelineAssemblyInput();
};

