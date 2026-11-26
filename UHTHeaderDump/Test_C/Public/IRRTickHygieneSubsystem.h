#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRTickHygieneSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRTickHygieneSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRTickHygieneSubsystem();

};

