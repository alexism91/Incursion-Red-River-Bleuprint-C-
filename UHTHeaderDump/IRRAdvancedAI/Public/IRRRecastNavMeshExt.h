#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "IRRRecastNavMeshExt.generated.h"

UCLASS(Blueprintable, NoExport)
class IRRADVANCEDAI_API AIRRRecastNavMeshExt : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AIRRRecastNavMeshExt(const FObjectInitializer& ObjectInitializer);

};

