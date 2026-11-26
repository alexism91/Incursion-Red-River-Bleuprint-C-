#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRVicinitySubsystem.generated.h"

class APlayerController;
class UIRRVicinityInventoryComponent;

UCLASS(Blueprintable)
class TEST_C_API UIRRVicinitySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRVicinitySubsystem();

    UFUNCTION(BlueprintCallable)
    UIRRVicinityInventoryComponent* GetVicinityInventory(APlayerController* PlayerController);
    
};

