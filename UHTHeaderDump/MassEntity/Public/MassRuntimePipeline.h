#pragma once
#include "CoreMinimal.h"
#include "MassRuntimePipeline.generated.h"

class UMassProcessor;

USTRUCT(BlueprintType)
struct FMassRuntimePipeline {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMassProcessor*> Processors;
    
public:
    MASSENTITY_API FMassRuntimePipeline();
};

