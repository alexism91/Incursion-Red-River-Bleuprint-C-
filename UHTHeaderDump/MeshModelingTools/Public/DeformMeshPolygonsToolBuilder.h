#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MeshSurfacePointMeshEditingToolBuilder -FallbackName=MeshSurfacePointMeshEditingToolBuilder
#include "DeformMeshPolygonsToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UDeformMeshPolygonsToolBuilder();

};

