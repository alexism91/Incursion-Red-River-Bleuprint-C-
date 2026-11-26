#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LandscapeEditLayerBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ULandscapeEditLayerBase : public UObject {
    GENERATED_BODY()
public:
    ULandscapeEditLayerBase();

};

