#pragma once
#include "CoreMinimal.h"
#include "MetaHumanSkeletalMeshPipelineAssemblyOutput.generated.h"

class UAnimBlueprint;
class UMaterialInterface;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct METAHUMANDEFAULTPIPELINE_API FMetaHumanSkeletalMeshPipelineAssemblyOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimBlueprint> AnimBlueprintToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInterface*> OverrideMaterials;
    
    FMetaHumanSkeletalMeshPipelineAssemblyOutput();
};

