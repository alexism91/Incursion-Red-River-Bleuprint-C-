#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeVolumeNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeVolumeNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeVolumeNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomFileName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAnimationID(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomGridDependency(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomFrameIndexInAnimation(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomGridDependency(const int32 Index, FString& OutDependency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomGridDependeciesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomGridDependecies(TArray<FString>& OutDependencies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomFrameIndicesInAnimation(TArray<int32>& OutAnimationIndices) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomFrameIndexInAnimation(int32 IndexIndex, int32& OutIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFileName(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAnimationID(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomGridDependency(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomFrameIndexInAnimation(int32 Index);
    
};

