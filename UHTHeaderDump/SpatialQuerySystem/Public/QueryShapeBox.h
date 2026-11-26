#pragma once
#include "CoreMinimal.h"
#include "QueryShapeBase.h"
#include "QueryShapeBox.generated.h"

USTRUCT(BlueprintType)
struct SPATIALQUERYSYSTEM_API FQueryShapeBox : public FQueryShapeBase {
    GENERATED_BODY()
public:
    FQueryShapeBox();
};

