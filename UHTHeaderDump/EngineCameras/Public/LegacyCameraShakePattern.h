#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "LegacyCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown, MinimalAPI)
class ULegacyCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    ULegacyCameraShakePattern();

};

