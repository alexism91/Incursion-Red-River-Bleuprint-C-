#pragma once
#include "CoreMinimal.h"
#include "AudioSlider.h"
#include "AudioVolumeSlider.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioVolumeSlider : public UAudioSlider {
    GENERATED_BODY()
public:
    UAudioVolumeSlider();

};

