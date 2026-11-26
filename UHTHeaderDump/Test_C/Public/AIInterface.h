#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAISettings -FallbackName=IRRAISettings
#include "IRRAISenseDataSource.h"
#include "AIInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAIInterface : public UInterface {
    GENERATED_BODY()
};

class IAIInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateAISettings(const FIRRAISettings& NewSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TrySayVoiceLineByTag(const FGameplayTag& VoiceLineTag, bool IgnoreGate, bool ForceToPlay, float ChanceToSay, float Delay, float CooldownOverride, int32 Priority);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleAIHidden(const bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TargetSensed(const FIRRAISenseDataSource& SensedData, float AdditionalDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FIRRAISettings GetAISettings() const;
    
};

