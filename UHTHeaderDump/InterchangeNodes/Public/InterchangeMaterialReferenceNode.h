#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeMaterialReferenceNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeMaterialReferenceNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialReferenceNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SetCustomContentPath(const FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomContentPath(FString& AttributeValue) const;
    
};

