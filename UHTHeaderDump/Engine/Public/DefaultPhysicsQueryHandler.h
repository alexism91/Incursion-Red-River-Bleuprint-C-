#pragma once
#include "CoreMinimal.h"
#include "PhysicsQueryHandler.h"
#include "DefaultPhysicsQueryHandler.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDefaultPhysicsQueryHandler : public UPhysicsQueryHandler {
    GENERATED_BODY()
public:
    UDefaultPhysicsQueryHandler();

};

