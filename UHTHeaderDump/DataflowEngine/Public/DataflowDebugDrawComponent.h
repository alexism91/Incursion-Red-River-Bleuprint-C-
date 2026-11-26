#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "DataflowDebugDrawComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDataflowDebugDrawComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UDataflowDebugDrawComponent(const FObjectInitializer& ObjectInitializer);

};

