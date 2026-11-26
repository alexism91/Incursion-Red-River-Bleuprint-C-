#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EUVUnwrapMethod.h"
#include "UVUnwrapNode.generated.h"

class UDataflowMesh;

USTRUCT(BlueprintType)
struct FUVUnwrapNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflowMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UVChannelIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EUVUnwrapMethod Method;
    
public:
    MESHRESIZINGDATAFLOWNODES_API FUVUnwrapNode();
};

