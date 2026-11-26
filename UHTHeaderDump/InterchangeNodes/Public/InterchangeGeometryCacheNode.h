#pragma once
#include "CoreMinimal.h"
#include "InterchangeMeshNode.h"
#include "InterchangeGeometryCacheNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeGeometryCacheNode : public UInterchangeMeshNode {
    GENERATED_BODY()
public:
    UInterchangeGeometryCacheNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomStartFrame(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasConstantTopology(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFrameRate(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomEndFrame(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomStartFrame(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomHasConstantTopology(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFrameRate(double& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomEndFrame(int32& AttributeValue) const;
    
};

