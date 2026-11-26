#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EIRRHealthCosmeticAudience.h"
#include "IRRHealthCosmeticIntensity.h"
#include "IRRHealthCosmetic.generated.h"

class ACharacter;
class UIRRHealthCosmeticsComponent;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UIRRHealthCosmetic : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRHealthCosmeticIntensity> IntensityLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRHealthCosmeticAudience Audience;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIRRHealthCosmeticsComponent* Component;
    
public:
    UIRRHealthCosmetic();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnIntensityChanged(float OldIntensity, float NewIntensity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnActivated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalFirstPersonViewer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCosmeticActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnerSpeed2D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntensity() const;
    
};

