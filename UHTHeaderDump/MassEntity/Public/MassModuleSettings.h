#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MassModuleSettings.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultConfig, MinimalAPI, Config=Mass)
class UMassModuleSettings : public UObject {
    GENERATED_BODY()
public:
    UMassModuleSettings();

};

