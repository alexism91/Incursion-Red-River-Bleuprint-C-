#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "AddToMaterialInterfaceArrayDataflowNode.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FAddToMaterialInterfaceArrayDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialsToAdd;
    
public:
    GEOMETRYCOLLECTIONNODES_API FAddToMaterialInterfaceArrayDataflowNode();
};

