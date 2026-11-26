#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LXRFluxRenderActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LXRFLUX_API ULXRFluxRenderActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULXRFluxRenderActorComponent(const FObjectInitializer& ObjectInitializer);

};

