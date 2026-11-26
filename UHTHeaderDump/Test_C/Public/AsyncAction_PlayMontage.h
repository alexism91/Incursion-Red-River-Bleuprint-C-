#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BranchingPointNotifyPayload -FallbackName=BranchingPointNotifyPayload
#include "CharacterMontageSet.h"
#include "OnCharacterMontagePlayDelegateDelegate.h"
#include "AsyncAction_PlayMontage.generated.h"

class AActor;
class UAnimMontage;
class UAsyncAction_PlayMontage;

UCLASS(Blueprintable)
class TEST_C_API UAsyncAction_PlayMontage : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterMontagePlayDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterMontagePlayDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterMontagePlayDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterMontagePlayDelegate OnNotifyBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterMontagePlayDelegate OnNotifyEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet PendingCharacterMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PendingSingleMontage;
    
public:
    UAsyncAction_PlayMontage();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_PlayMontage* CreateProxyObjectForPlaySingleMontage(AActor* Actor, FName LinkedAnimGraph, FName MontageSection, UAnimMontage* Montage, float PlayRate, bool StopPreviousMontage, bool Predict);
    
    UFUNCTION(BlueprintCallable)
    static UAsyncAction_PlayMontage* CreateProxyObjectForPlayCharacterMontage(AActor* Actor, AActor* Weapon, FName LinkedAnimGraph, FName MontageSection, FCharacterMontageSet CharacterMontages, float PlayRate, bool StopPreviousMontage, bool SyncAnimLength, bool Predict);
    
};

