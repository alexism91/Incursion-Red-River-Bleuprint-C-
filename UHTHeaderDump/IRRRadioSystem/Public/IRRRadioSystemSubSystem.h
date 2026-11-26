#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRRadioSystemSubSystem.generated.h"

UCLASS(Blueprintable)
class IRRRADIOSYSTEM_API UIRRRadioSystemSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRRadioSystemSubSystem();

};

