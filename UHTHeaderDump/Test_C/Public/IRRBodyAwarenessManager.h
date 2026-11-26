#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EIRRBodyAwareness.h"
#include "IRRBodyDiscoveredSignatureDelegate.h"
#include "IRRBodyInvalidatedSignatureDelegate.h"
#include "IRRBodyAwarenessManager.generated.h"

class AIRRAIBaseController;
class AIRRBaseCharacter;

UCLASS(Blueprintable)
class TEST_C_API UIRRBodyAwarenessManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBodyDiscoveredSignature OnBodyDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBodyInvalidatedSignature OnBodyInvalidated;
    
    UIRRBodyAwarenessManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterRevive(AIRRBaseCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDeath(AIRRBaseCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRBodyAwareness GetBodyAwareness(const AIRRAIBaseController* Bot, const AIRRBaseCharacter* DeadCharacter) const;
    
};

