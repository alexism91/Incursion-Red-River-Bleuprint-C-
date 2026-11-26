#pragma once
#include "CoreMinimal.h"
#include "Light.h"
#include "DirectionalLight.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ADirectionalLight : public ALight {
    GENERATED_BODY()
public:
    ADirectionalLight(const FObjectInitializer& ObjectInitializer);

};

