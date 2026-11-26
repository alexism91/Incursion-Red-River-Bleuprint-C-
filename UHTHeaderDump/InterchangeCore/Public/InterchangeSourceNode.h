#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "InterchangeBaseNode.h"
#include "InterchangeSourceNode.generated.h"

class UInterchangeBaseNodeContainer;
class UInterchangeSourceNode;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSourceNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSourceNode();

    UFUNCTION(BlueprintCallable)
    bool SetExtraInformation(const FString& Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomUseLegacySkeletalMeshBakeTransform(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomUseAssetTypeSubPathSuffix(const bool& Suffix);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSubPathPrefix(const FString& Prefix);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceTimelineStart(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceTimelineEnd(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceFrameRateNumerator(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceFrameRateDenominator(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomReimportStrategyFlags(uint8 StrategyFlag);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomImportUnusedMaterial(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAxisConversionInverseTransform(const FTransform& AxisConversionInverseTransform);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimatedTimeStart(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimatedTimeEnd(const double& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveExtraInformation(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSourceNode(const FString& UniqueID, const FString& DisplayLabel, UInterchangeBaseNodeContainer* NodeContainer);
    
    UFUNCTION(BlueprintCallable)
    static UInterchangeSourceNode* GetUniqueInstance(const UInterchangeBaseNodeContainer* NodeContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetExtraInformation(TMap<FString, FString>& OutExtraInformation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUseLegacySkeletalMeshBakeTransform(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUseAssetTypeSubPathSuffix(bool& Suffix) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSubPathPrefix(FString& Prefix) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSourceTimelineStart(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSourceTimelineEnd(double& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSourceFrameRateNumerator(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSourceFrameRateDenominator(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomReimportStrategyFlags(uint8& StrategyFlag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomImportUnusedMaterial(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAxisConversionInverseTransform(FTransform& AxisConversionInverseTransform) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimatedTimeStart(double& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAnimatedTimeEnd(double& AttributeValue) const;
    
};

