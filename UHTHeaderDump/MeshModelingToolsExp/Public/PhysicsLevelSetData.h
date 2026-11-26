#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=KShapeElem -FallbackName=KShapeElem
#include "PhysicsLevelSetData.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsLevelSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKShapeElem Element;
    
    MESHMODELINGTOOLSEXP_API FPhysicsLevelSetData();
};

