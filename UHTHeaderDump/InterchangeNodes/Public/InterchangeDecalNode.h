#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeDecalNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeDecalNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeDecalNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSortOrder(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDecalSize(const FVector& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDecalMaterialPathName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSortOrder(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDecalSize(FVector& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDecalMaterialPathName(FString& AttributeValue) const;
    
};

