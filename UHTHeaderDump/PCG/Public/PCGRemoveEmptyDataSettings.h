#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGRemoveEmptyDataSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGRemoveEmptyDataSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPCGRemoveEmptyDataSettings();

};

