#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowAllTypes -FallbackName=DataflowAllTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowArrayTypes -FallbackName=DataflowArrayTypes
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DataflowGetArrayElementNode.generated.h"

USTRUCT(BlueprintType)
struct FDataflowGetArrayElementNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowArrayTypes Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowAllTypes Element;
    
public:
    GEOMETRYCOLLECTIONNODES_API FDataflowGetArrayElementNode();
};

