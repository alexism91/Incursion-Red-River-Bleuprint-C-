#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "CameraBlockingVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ACameraBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    ACameraBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

