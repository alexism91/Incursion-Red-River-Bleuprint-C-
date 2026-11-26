#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MeshSurfacePointMeshEditingToolBuilder -FallbackName=MeshSurfacePointMeshEditingToolBuilder
#include "MeshGroupPaintToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UMeshGroupPaintToolBuilder();

};

