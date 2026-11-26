#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeShaderNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeShaderNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeShaderNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomShaderType(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomShaderType(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddStringInput(const FString& InputName, const FString& AttributeValue, bool bIsAParameter);
    
    UFUNCTION(BlueprintCallable)
    bool AddLinearColorInput(const FString& InputName, const FLinearColor& AttributeValue, bool bIsAParameter);
    
    UFUNCTION(BlueprintCallable)
    bool AddFloatInput(const FString& InputName, const float& AttributeValue, bool bIsAParameter);
    
};

