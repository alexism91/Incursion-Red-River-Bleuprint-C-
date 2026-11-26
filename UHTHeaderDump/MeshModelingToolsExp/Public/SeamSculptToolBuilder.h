#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MeshSurfacePointMeshEditingToolBuilder -FallbackName=MeshSurfacePointMeshEditingToolBuilder
#include "SeamSculptToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    USeamSculptToolBuilder();

};

