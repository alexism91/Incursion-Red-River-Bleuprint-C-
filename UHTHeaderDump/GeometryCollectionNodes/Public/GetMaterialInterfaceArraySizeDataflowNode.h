#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "GetMaterialInterfaceArraySizeDataflowNode.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FGetMaterialInterfaceArraySizeDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Size;
    
public:
    GEOMETRYCOLLECTIONNODES_API FGetMaterialInterfaceArraySizeDataflowNode();
};

