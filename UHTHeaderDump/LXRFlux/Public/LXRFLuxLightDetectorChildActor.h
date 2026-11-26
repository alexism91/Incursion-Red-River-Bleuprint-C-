#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshActor -FallbackName=StaticMeshActor
#include "LXRFLuxLightDetectorChildActor.generated.h"

UCLASS(Blueprintable, NoExport)
class LXRFLUX_API ALXRFLuxLightDetectorChildActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    ALXRFLuxLightDetectorChildActor(const FObjectInitializer& ObjectInitializer);

};

