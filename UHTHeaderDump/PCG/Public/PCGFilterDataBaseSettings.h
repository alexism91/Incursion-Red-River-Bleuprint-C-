#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGFilterDataBaseSettings.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGFilterDataBaseSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPCGFilterDataBaseSettings();

};

