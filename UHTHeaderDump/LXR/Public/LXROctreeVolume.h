#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "LXROctreeVolume.generated.h"

UCLASS(Blueprintable, NoExport)
class LXR_API ALXROctreeVolume : public AVolume {
    GENERATED_BODY()
public:
    ALXROctreeVolume(const FObjectInitializer& ObjectInitializer);

};

