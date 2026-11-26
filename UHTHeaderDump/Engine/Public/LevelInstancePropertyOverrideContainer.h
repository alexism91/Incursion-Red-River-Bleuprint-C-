#pragma once
#include "CoreMinimal.h"
#include "ActorDescContainer.h"
#include "LevelInstancePropertyOverrideContainer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULevelInstancePropertyOverrideContainer : public UActorDescContainer {
    GENERATED_BODY()
public:
    ULevelInstancePropertyOverrideContainer();

};

