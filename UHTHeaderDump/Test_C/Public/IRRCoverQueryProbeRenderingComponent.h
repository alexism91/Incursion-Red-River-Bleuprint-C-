#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "IRRCoverQueryProbeRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRCoverQueryProbeRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UIRRCoverQueryProbeRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

