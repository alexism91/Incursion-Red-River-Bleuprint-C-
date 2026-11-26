#pragma once
#include "CoreMinimal.h"
#include "QueryShapeBase.h"
#include "QueryShapeSphere.generated.h"

USTRUCT(BlueprintType)
struct SPATIALQUERYSYSTEM_API FQueryShapeSphere : public FQueryShapeBase {
    GENERATED_BODY()
public:
    FQueryShapeSphere();
};

