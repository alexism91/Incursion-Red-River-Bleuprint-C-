#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "PlayAnimWaitSimpleDelegateDelegate.h"
#include "AbilityTask_PlayAnimAndWait.generated.h"

class UAbilityTask_PlayAnimAndWait;
class UAnimMontage;
class UAnimSequence;
class UGameplayAbility;

UCLASS(Blueprintable, MinimalAPI)
class UAbilityTask_PlayAnimAndWait : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAnimWaitSimpleDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAnimWaitSimpleDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAnimWaitSimpleDelegate OnBlendIn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAnimWaitSimpleDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayAnimWaitSimpleDelegate OnCancelled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSequenceToPlay;
    
public:
    UAbilityTask_PlayAnimAndWait();

    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendedIn(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PlayAnimAndWait* CreatePlayAnimAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimSequence* AnimSequence, FName SlotName, float BlendInTime, float BlendOutTime, float InPlayRate, float StartTimeSeconds, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float InPlayCount);
    
};

