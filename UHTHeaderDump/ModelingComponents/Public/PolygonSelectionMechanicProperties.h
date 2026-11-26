#pragma once
#include "CoreMinimal.h"
#include "MeshTopologySelectionMechanicProperties.h"
#include "PolygonSelectionMechanicProperties.generated.h"

UCLASS(Blueprintable, Deprecated, MinimalAPI, NonTransient, NotPlaceable)
class UDEPRECATED_PolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties {
    GENERATED_BODY()
public:
    UDEPRECATED_PolygonSelectionMechanicProperties();

};

