#pragma once
#include "CoreMinimal.h"
#include "MetaHumanOutfitPipelineParameterContext.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FMetaHumanOutfitPipelineParameterContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstanceDynamic*> MaterialSlotToMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AvailableSlots;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanOutfitPipelineParameterContext();
};

