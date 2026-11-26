#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "EVolumeGridElementType.h"
#include "InterchangeVolumeGridNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeVolumeGridNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeVolumeGridNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomNumComponents(const int32& NumComponents);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGridTransform(const FTransform& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGridActiveDimensions(const FIntVector& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGridActiveAABBMin(const FIntVector& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomGridActiveAABBMax(const FIntVector& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomElementType(const EVolumeGridElementType& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomNumComponents(int32& NumComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGridTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGridActiveDimensions(FIntVector& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGridActiveAABBMin(FIntVector& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGridActiveAABBMax(FIntVector& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomElementType(EVolumeGridElementType& AttributeValue) const;
    
};

