#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeBaseMaterialFactoryNode.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeBaseMaterialFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomIsMaterialImportEnabled(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIsMaterialImportEnabled(bool& AttributeValue) const;
    
};

