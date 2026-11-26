#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MassProcessingPhaseConfig.generated.h"

class UMassCompositeProcessor;
class UMassProcessor;

USTRUCT(BlueprintType)
struct FMassProcessingPhaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PhaseName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMassCompositeProcessor> PhaseGroupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMassProcessor*> ProcessorCDOs;
    
    MASSENTITY_API FMassProcessingPhaseConfig();
};

