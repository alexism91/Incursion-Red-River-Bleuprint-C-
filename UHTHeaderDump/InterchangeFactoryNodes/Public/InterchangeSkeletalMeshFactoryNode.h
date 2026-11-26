#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EInterchangeSkeletalMeshContentType.h"
#include "InterchangeMeshFactoryNode.h"
#include "InterchangeSkeletalMeshFactoryNode.generated.h"

class UInterchangeBaseNodeContainer;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeSkeletalMeshFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseHighPrecisionSkinWeights(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomThresholdUV(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomThresholdTangentNormal(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomThresholdPosition(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonSoftObjectPath(const FSoftObjectPath& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPhysicAssetSoftObjectPath(const FSoftObjectPath& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMorphThresholdPosition(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMergeMorphTargetShapeWithSameName(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportVertexAttributes(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportMorphTarget(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportContentType(const EInterchangeSkeletalMeshContentType& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomCreatePhysicsAsset(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBoneInfluenceLimit(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAddCurveMetadataToSkeleton(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSkeletalMeshNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass, UInterchangeBaseNodeContainer* NodeContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomThresholdUV(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomThresholdTangentNormal(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomThresholdPosition(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomMorphThresholdPosition(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomMergeMorphTargetShapeWithSameName(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomImportVertexAttributes(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomImportMorphTarget(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomCreatePhysicsAsset(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBoneInfluenceLimit(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue) const;
    
};

