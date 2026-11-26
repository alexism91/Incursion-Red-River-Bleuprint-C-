#pragma once
#include "CoreMinimal.h"
#include "PCGDataFromActorSettings.h"
#include "PCGGetPrimitiveSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings {
    GENERATED_BODY()
public:
    UPCGGetPrimitiveSettings();

};

