#pragma once
#include "CoreMinimal.h"
#include "ChildActorComponent.h"
#include "AutoRTFMTestChildActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAutoRTFMTestChildActorComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UAutoRTFMTestChildActorComponent(const FObjectInitializer& ObjectInitializer);

};

