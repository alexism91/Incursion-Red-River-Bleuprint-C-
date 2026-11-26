#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LXR -ObjectName=LXRLightSenseComponent -FallbackName=LXRLightSenseComponent
#include "IRRLightSenseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRLightSenseComponent : public ULXRLightSenseComponent {
    GENERATED_BODY()
public:
    UIRRLightSenseComponent(const FObjectInitializer& ObjectInitializer);

};

