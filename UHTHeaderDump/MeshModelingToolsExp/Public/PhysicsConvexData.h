#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KShapeElem -FallbackName=KShapeElem
#include "PhysicsConvexData.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsConvexData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKShapeElem Element;
    
    MESHMODELINGTOOLSEXP_API FPhysicsConvexData();
};

