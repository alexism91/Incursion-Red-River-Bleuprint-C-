#pragma once
#include "CoreMinimal.h"
#include "InterchangeBaseMaterialFactoryNode.h"
#include "InterchangeDecalMaterialFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeDecalMaterialFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomNormalTexturePath(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDiffuseTexturePath(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomNormalTexturePath(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDiffuseTexturePath(FString& AttributeValue) const;
    
};

