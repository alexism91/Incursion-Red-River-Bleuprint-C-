#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "FirstPersonCoreSubObject.h"
#include "IRRGameplaySettings.h"
#include "FirstPersonAutoLowReady.generated.h"

class UFirstPersonCoreComponent;
class UGameplayAbilityComponent;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonAutoLowReady : public UFirstPersonCoreSubObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LowReadyAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IdleBlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayAbilityComponent* GameplayAbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFirstPersonCoreComponent* FirstPersonCoreComponent;
    
public:
    UFirstPersonAutoLowReady();

protected:
    UFUNCTION(BlueprintCallable)
    void OnControllerSettingsChanged(FIRRGameplaySettings NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityStarted(FGameplayTag AbilityTag);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityEnded(FGameplayTag AbilityTag, bool bSuccess);
    
};

