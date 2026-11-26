#pragma once
#include "CoreMinimal.h"
#include "EDataflowVisualizeFractureColoringType.generated.h"

UENUM(BlueprintType)
enum class EDataflowVisualizeFractureColoringType : uint8 {
    ColorByParent,
    ColorByLevel,
    ColorByCluster,
    ColorByLeafLevel,
    ColorByLeaf,
    ColorByAttr,
};

