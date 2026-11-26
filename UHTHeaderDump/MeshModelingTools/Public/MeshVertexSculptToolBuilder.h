#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MeshSurfacePointMeshEditingToolBuilder -FallbackName=MeshSurfacePointMeshEditingToolBuilder
#include "MeshVertexSculptToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UMeshVertexSculptToolBuilder();

};

