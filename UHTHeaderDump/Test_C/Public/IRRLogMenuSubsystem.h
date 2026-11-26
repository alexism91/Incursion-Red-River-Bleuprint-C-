#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "IRRLogMenuSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRLogMenuSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIRRLogMenuSubsystem();

};

