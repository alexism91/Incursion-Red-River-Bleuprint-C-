#pragma once
#include "CoreMinimal.h"
#include "MetaHumanGroomPipelineParameterContext.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FMetaHumanGroomPipelineParameterContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> MaterialSlotToMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailableSlots;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanGroomPipelineParameterContext();
};

