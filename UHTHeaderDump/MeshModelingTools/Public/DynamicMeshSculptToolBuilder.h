#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MeshSurfacePointMeshEditingToolBuilder -FallbackName=MeshSurfacePointMeshEditingToolBuilder
#include "DynamicMeshSculptToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UDynamicMeshSculptToolBuilder();

};

