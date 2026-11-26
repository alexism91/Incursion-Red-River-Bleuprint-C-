#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MeshSurfacePointMeshEditingToolBuilder -FallbackName=MeshSurfacePointMeshEditingToolBuilder
#include "MeshAttributePaintToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UMeshAttributePaintToolBuilder();

};

