#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EActivationState.h"
#include "EMassProcessingPhase.h"
#include "MassProcessorExecutionOrder.h"
#include "MassProcessor.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, ConfigDoNotCheckDefaults, DefaultConfig, EditInlineNew, MinimalAPI, Config=Mass)
class UMassProcessor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassProcessorExecutionOrder ExecutionOrder;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMassProcessingPhase ProcessingPhase;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ExecutionFlags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoRegisterWithProcessingPhases: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresGameThreadExecution: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivationState ActivationState;
    
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ExecutionPriority;
    
public:
    UMassProcessor();

};

