#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRNavTrackingInterface.h"
#include "IRRNavTrackerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRADVANCEDAI_API UIRRNavTrackerComponent : public UActorComponent, public IIRRNavTrackingInterface {
    GENERATED_BODY()
public:
    UIRRNavTrackerComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

