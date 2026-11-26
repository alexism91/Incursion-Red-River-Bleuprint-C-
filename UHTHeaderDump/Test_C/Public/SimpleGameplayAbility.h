#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "CharacterMontageSet.h"
#include "OnAbilityCommittedDelegate.h"
#include "OnAbilityFinishedDelegate.h"
#include "SimpleGameplayAbility.generated.h"

class AActor;
class UGameplayAbilityComponent;
class USimpleGameplayAbility;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrantedAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationBlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InterruptAbilitiesWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockAbilitiesWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RemoveBufferedAbilitiesWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagToTriggerAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBufferAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedAnimGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopAbilityMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet CachedCharacterMontage;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityCommitted OnAbilityCommitted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAbilityFinished OnAbilityFinished;
    
    USimpleGameplayAbility();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveUpdatedGameplayTags(FGameplayTagContainer NewTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTriedStartedGameplayAbility(USimpleGameplayAbility* Ability, bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSingleInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAbilityToggled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAbilityBuffered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAbilityActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InterruptAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishAbility(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeactivateAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CommitAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ActivateAbility();
    
};

