#pragma once
#include "CoreMinimal.h"
#include "PlayerController.h"
#include "NoPawnPlayerController.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ANoPawnPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ANoPawnPlayerController(const FObjectInitializer& ObjectInitializer);

};

