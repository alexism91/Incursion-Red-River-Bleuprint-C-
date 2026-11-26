#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRREnhancedUltraDynamicWeather.generated.h"

UCLASS(Blueprintable, NoExport)
class IRRULTRADYNAMICSKY_API AIRREnhancedUltraDynamicWeather : public AActor {
    GENERATED_BODY()
public:
    AIRREnhancedUltraDynamicWeather(const FObjectInitializer& ObjectInitializer);

};

