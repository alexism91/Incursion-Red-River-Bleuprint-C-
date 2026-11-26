#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
#include "InterchangeBaseLightFactoryNode.h"
#include "InterchangeLightFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseIESBrightness(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRotation(const FRotator& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIESTexture(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIESBrightnessScale(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUseIESBrightness(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomRotation(FRotator& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIntensityUnits(ELightUnits& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIESTexture(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIESBrightnessScale(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttenuationRadius(float& AttributeValue) const;
    
};

