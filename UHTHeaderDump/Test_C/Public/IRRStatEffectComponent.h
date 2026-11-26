#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAIStatEffect -FallbackName=IRRAIStatEffect
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAIStatEffectLimits -FallbackName=IRRAIStatEffectLimits
#include "IRRAIBaseControllerComponent.h"
#include "IRRStatEffectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRStatEffectComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIStatEffectLimits SoftClampLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRAIStatEffect> TemporaryEffects;
    
public:
    UIRRStatEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveEffect(const FGameplayTag EffectTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIStatEffect GetCurrentStatEffects() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffect(const FGameplayTag EffectTag, const FIRRAIStatEffect& Effect);
    
};

