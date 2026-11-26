#pragma once
#include "CoreMinimal.h"
#include "QueryShapeBase.h"
#include "QueryShapeCapsule.generated.h"

USTRUCT(BlueprintType)
struct SPATIALQUERYSYSTEM_API FQueryShapeCapsule : public FQueryShapeBase {
    GENERATED_BODY()
public:
    FQueryShapeCapsule();
};

