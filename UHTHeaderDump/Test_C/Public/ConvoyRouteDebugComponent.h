#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "ConvoyRouteDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UConvoyRouteDebugComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UConvoyRouteDebugComponent(const FObjectInitializer& ObjectInitializer);

};

