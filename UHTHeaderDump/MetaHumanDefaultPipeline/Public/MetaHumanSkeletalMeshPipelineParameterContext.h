#pragma once
#include "CoreMinimal.h"
#include "MetaHumanSkeletalMeshPipelineParameterContext.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FMetaHumanSkeletalMeshPipelineParameterContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> MaterialSlotToMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailableSlots;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanSkeletalMeshPipelineParameterContext();
};

