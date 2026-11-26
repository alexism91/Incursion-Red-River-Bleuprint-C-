#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.h"
#include "KSkinnedTriangleMeshElem.generated.h"

USTRUCT(BlueprintType)
struct FKSkinnedTriangleMeshElem : public FKShapeElem {
    GENERATED_BODY()
public:
    ENGINE_API FKSkinnedTriangleMeshElem();
};

