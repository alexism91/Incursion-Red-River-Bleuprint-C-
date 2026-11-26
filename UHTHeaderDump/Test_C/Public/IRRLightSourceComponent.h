#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LXR -ObjectName=LXRSourceComponent -FallbackName=LXRSourceComponent
#include "IRRLightSourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRLightSourceComponent : public ULXRSourceComponent {
    GENERATED_BODY()
public:
    UIRRLightSourceComponent(const FObjectInitializer& ObjectInitializer);

};

