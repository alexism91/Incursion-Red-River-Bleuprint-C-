#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointToolBuilder -FallbackName=MeshSurfacePointToolBuilder
#include "MeshSurfacePointMeshEditingToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder {
    GENERATED_BODY()
public:
    UMeshSurfacePointMeshEditingToolBuilder();

};

