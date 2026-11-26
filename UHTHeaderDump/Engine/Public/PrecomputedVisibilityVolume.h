#pragma once
#include "CoreMinimal.h"
#include "Volume.h"
#include "PrecomputedVisibilityVolume.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class APrecomputedVisibilityVolume : public AVolume {
    GENERATED_BODY()
public:
    APrecomputedVisibilityVolume(const FObjectInitializer& ObjectInitializer);

};

