#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeMaterialInterfaceArrayDataflowNode.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMakeMaterialInterfaceArrayDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialArray;
    
public:
    GEOMETRYCOLLECTIONNODES_API FMakeMaterialInterfaceArrayDataflowNode();
};

