#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "FirstPersonCoreSubObject.h"
#include "IRRStaminaInfluence.h"
#include "OnStaminaUpdatedDelegate.h"
#include "OnStaminaUsedUpDelegate.h"
#include "FirstPersonStamina.generated.h"

class UAkRtpc;
class UGameplayAbilityComponent;
class USimpleGameplayAttribute;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonStamina : public UFirstPersonCoreSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoverPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRStaminaInfluence> StaminaInfluences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilitiesToStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* Rtpc_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleGameplayAttribute* StaminaAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayAbilityComponent* GameplayAbilityComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStaminaUsedUp OnStaminaUsedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStaminaUpdated OnStaminaUpdated;
    
    UFirstPersonStamina();

    UFUNCTION(BlueprintCallable)
    bool TryConsumeStamina(float Amount);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStaminaInfluence(FIRRStaminaInfluence Influence);
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentStamina();
    
    UFUNCTION(BlueprintCallable)
    void AddStaminaInfluence(FIRRStaminaInfluence Influence);
    
};

