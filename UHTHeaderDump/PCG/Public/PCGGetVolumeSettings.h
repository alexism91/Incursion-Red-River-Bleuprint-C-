#pragma once
#include "CoreMinimal.h"
#include "PCGDataFromActorSettings.h"
#include "PCGGetVolumeSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetVolumeSettings : public UPCGDataFromActorSettings {
    GENERATED_BODY()
public:
    UPCGGetVolumeSettings();

};

