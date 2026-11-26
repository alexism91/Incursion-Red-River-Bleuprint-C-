#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeNodes -ObjectName=EInterchangeMotionVectorsHandling -FallbackName=EInterchangeMotionVectorsHandling
#include "InterchangeMeshFactoryNode.h"
#include "InterchangeGeometryCacheFactoryNode.generated.h"

class UInterchangeBaseNodeContainer;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeGeometryCacheFactoryNode : public UInterchangeMeshFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeGeometryCacheFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomStoreImportedVertexNumbers(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomStartFrame(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPositionPrecision(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomOptimizeIndexBuffers(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomNumBitsForUVs(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMotionVectorsImport(EInterchangeMotionVectorsHandling AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFlattenTracks(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomEndFrame(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomApplyConstantTopologyOptimization(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void InitializeGeometryCacheNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass, UInterchangeBaseNodeContainer* NodeContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomStoreImportedVertexNumbers(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomStartFrame(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomPositionPrecision(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomOptimizeIndexBuffers(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomNumBitsForUVs(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomMotionVectorsImport(EInterchangeMotionVectorsHandling& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFlattenTracks(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomEndFrame(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomApplyConstantTopologyOptimization(bool& AttributeValue) const;
    
};

