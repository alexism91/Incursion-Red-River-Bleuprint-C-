#pragma once
#include "CoreMinimal.h"
#include "MeshTopologySelectionMechanic.h"
#include "PolygonSelectionMechanic.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic {
    GENERATED_BODY()
public:
    UPolygonSelectionMechanic();

};

