#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeLevelFactoryNode.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeLevelFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeLevelFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomShouldCreateLevel(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSceneImportAssetFactoryNodeUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomCreateWorldPartitionLevel(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomActorFactoryNodeUid(const FString& ActorFactoryNodeUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomShouldCreateLevel(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSceneImportAssetFactoryNodeUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomCreateWorldPartitionLevel(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomActorFactoryNodeUids(TArray<FString>& OutActorFactoryNodeUids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCustomActorFactoryNodeUidCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCustomActorFactoryNodeUid(const int32 Index, FString& OutActorFactoryNodeUid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddCustomActorFactoryNodeUid(const FString& ActorFactoryNodeUid);
    
};

