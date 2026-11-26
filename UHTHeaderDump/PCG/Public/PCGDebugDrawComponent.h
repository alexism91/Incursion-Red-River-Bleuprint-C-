#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "PCGDebugDrawComponent.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPCGDebugDrawComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UPCGDebugDrawComponent(const FObjectInitializer& ObjectInitializer);

};

