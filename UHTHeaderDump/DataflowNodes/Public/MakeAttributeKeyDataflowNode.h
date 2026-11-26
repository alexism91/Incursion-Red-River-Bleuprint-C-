#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowEnginePlugin -ObjectName=CollectionAttributeKey -FallbackName=CollectionAttributeKey
#include "MakeAttributeKeyDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FMakeAttributeKeyDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttributeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectionAttributeKey AttributeKeyOut;
    
    DATAFLOWNODES_API FMakeAttributeKeyDataflowNode();
};

