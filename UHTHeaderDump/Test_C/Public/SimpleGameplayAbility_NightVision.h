#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "CharacterMontageSet.h"
#include "ContainerItem.h"
#include "MainContainer.h"
#include "SimpleGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "SimpleGameplayAbility_NightVision.generated.h"

class UAsyncAction_PlayMontage;
class UObject;
class USimpleGameplayEffect;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_NightVision : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IgnoreInterruptsFromTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USimpleGameplayEffect> GogglesDownEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem LocHelmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem LocNVGs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* GogglesPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet GogglesEquipMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet GogglesUnequipMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncAction_PlayMontage* GogglesMontage;
    
public:
    USimpleGameplayAbility_NightVision();

private:
    UFUNCTION(BlueprintCallable)
    void OnUnequipNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(FMainContainer MainContainer, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    void OnEquipNotifyBegin(FName NotifyName);
    
};

