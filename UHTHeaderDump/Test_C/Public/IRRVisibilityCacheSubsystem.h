#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRVisibilityCacheSubsystem.generated.h"

class UIRRBatchAsyncLineTraceSubsystem;

UCLASS(Blueprintable)
class TEST_C_API UIRRVisibilityCacheSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRBatchAsyncLineTraceSubsystem* BatchTrace;
    
public:
    UIRRVisibilityCacheSubsystem();

};

