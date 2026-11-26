#pragma once
#include "CoreMinimal.h"
#include "InterchangePointLightNode.h"
#include "InterchangeSpotLightNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSpotLightNode : public UInterchangePointLightNode {
    GENERATED_BODY()
public:
    UInterchangeSpotLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomOuterConeAngle(float AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomInnerConeAngle(float AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomOuterConeAngle(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomInnerConeAngle(float& AttributeValue) const;
    
};

