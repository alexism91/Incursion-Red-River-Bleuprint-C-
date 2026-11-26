#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "GetMaterialInterfaceAssetDataflowNode.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FGetMaterialInterfaceAssetDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
public:
    GEOMETRYCOLLECTIONNODES_API FGetMaterialInterfaceAssetDataflowNode();
};

