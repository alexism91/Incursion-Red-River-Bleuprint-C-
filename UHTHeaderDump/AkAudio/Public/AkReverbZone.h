#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "AkReverbZone.generated.h"

UCLASS(Blueprintable, NoExport)
class AKAUDIO_API AAkReverbZone : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
    AAkReverbZone(const FObjectInitializer& ObjectInitializer);

};

