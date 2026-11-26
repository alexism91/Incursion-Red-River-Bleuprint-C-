#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowRotationTypes.h"
#include "ConvertRotationDataflowNode.generated.h"

USTRUCT(BlueprintType)
struct FConvertRotationDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowRotationTypes In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowRotationTypes Out;
    
public:
    DATAFLOWCORE_API FConvertRotationDataflowNode();
};

