#pragma once
#include "CoreMinimal.h"
#include "NavigationToolSerializedTreeNode.generated.h"

USTRUCT(BlueprintType)
struct FNavigationToolSerializedTreeNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ChildrenIndices;
    
public:
    MOVIESCENE_API FNavigationToolSerializedTreeNode();
};

