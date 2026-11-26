#pragma once
#include "CoreMinimal.h"
#include "NavigationToolSerializedItem.h"
#include "NavigationToolSerializedTreeNode.h"
#include "NavigationToolSerializedTree.generated.h"

USTRUCT(BlueprintType)
struct FNavigationToolSerializedTree {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavigationToolSerializedTreeNode RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationToolSerializedItem> SceneItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FNavigationToolSerializedItem, FNavigationToolSerializedTreeNode> ItemTreeMap;
    
public:
    MOVIESCENE_API FNavigationToolSerializedTree();
};

