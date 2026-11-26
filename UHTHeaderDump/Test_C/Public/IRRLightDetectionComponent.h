#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LXR -ObjectName=LXRDetectionComponent -FallbackName=LXRDetectionComponent
#include "IRRLightDetectionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRLightDetectionComponent : public ULXRDetectionComponent {
    GENERATED_BODY()
public:
    UIRRLightDetectionComponent(const FObjectInitializer& ObjectInitializer);

};

