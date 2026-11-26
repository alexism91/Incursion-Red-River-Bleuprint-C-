#pragma once
#include "CoreMinimal.h"
#include "MeshTopologySelectionMechanic.h"
#include "BoundarySelectionMechanic.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic {
    GENERATED_BODY()
public:
    UBoundarySelectionMechanic();

};

