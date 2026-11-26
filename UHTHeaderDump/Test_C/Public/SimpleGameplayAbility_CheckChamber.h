#pragma once
#include "CoreMinimal.h"
#include "SimpleGameplayAbility.h"
#include "SimpleGameplayAbility_CheckChamber.generated.h"

class UAsyncAction_PlayMontage;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_CheckChamber : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChamberedNotifyName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncAction_PlayMontage* ChamberMontage;
    
public:
    USimpleGameplayAbility_CheckChamber();

private:
    UFUNCTION(BlueprintCallable)
    void OnChamberNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnChamberMontageInterrupted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnChamberMontageBlendOut(FName NotifyName);
    
};

