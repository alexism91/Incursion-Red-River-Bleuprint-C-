#pragma once
#include "CoreMinimal.h"
#include "RemeshMeshTool.h"
#include "ProjectToTargetTool.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UProjectToTargetTool : public URemeshMeshTool {
    GENERATED_BODY()
public:
    UProjectToTargetTool();

};

