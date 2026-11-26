#pragma once
#include "CoreMinimal.h"
#include "PCGDataFromActorSettings.h"
#include "PCGGetPCGComponentSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetPCGComponentSettings : public UPCGDataFromActorSettings {
    GENERATED_BODY()
public:
    UPCGGetPCGComponentSettings();

};

