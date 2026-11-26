#pragma once
#include "CoreMinimal.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAILightController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAILightController : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UIRRAILightController(const FObjectInitializer& ObjectInitializer);

};

