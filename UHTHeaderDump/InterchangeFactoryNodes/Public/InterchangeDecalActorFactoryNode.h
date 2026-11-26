#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "InterchangeActorFactoryNode.h"
#include "InterchangeDecalActorFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeDecalActorFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSortOrder(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDecalSize(const FVector& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDecalMaterialPathName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSortOrder(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDecalSize(FVector& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomDecalMaterialPathName(FString& AttributeValue) const;
    
};

