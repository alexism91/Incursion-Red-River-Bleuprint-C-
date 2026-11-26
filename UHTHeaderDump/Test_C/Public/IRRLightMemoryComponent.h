#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LXR -ObjectName=LXRMemoryComponent -FallbackName=LXRMemoryComponent
#include "IRRLightMemoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRLightMemoryComponent : public ULXRMemoryComponent {
    GENERATED_BODY()
public:
    UIRRLightMemoryComponent(const FObjectInitializer& ObjectInitializer);

};

