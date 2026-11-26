#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowSelectionTypes -FallbackName=DataflowSelectionTypes
#include "ESetOperationEnum.h"
#include "CollectionSelectionSetOperationDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FCollectionSelectionSetOperationDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESetOperationEnum Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSelectionTypes SelectionA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSelectionTypes SelectionB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSelectionTypes Selection;
    
public:
    GEOMETRYCOLLECTIONNODES_API FCollectionSelectionSetOperationDataflowNode();
};

