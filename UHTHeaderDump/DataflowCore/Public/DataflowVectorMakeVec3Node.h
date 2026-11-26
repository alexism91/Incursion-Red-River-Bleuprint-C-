#pragma once
#include "CoreMinimal.h"
#include "DataflowNode.h"
#include "DataflowNumericTypes.h"
#include "DataflowVectorTypes.h"
#include "DataflowVectorMakeVec3Node.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorMakeVec3Node : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowNumericTypes Z;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVectorTypes Vector3d;
    
public:
    DATAFLOWCORE_API FDataflowVectorMakeVec3Node();
};

