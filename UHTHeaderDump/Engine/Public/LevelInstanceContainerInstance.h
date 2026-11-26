#pragma once
#include "CoreMinimal.h"
#include "ActorDescContainerInstance.h"
#include "LevelInstanceContainerInstance.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULevelInstanceContainerInstance : public UActorDescContainerInstance {
    GENERATED_BODY()
public:
    ULevelInstanceContainerInstance();

};

