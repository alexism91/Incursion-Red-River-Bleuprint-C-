#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAINoiseData -FallbackName=IRRAINoiseData
#include "EIRRBodyPart.h"
#include "IRRCharacterInterface.generated.h"

UINTERFACE(Blueprintable)
class UIRRCharacterInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRCharacterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetNeutralEyeLocationBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetFactionBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetEyeLocationBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCharacterNameBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetBodyPartLocationBP(const EIRRBodyPart BodyPartType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAINoiseLocation(FName NoiseTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FIRRAINoiseData GetAINoiseData(FName NoiseTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BroadcastAINoise(FName NoiseTag, FVector Location);
    
};

