#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetObjectFactory -FallbackName=NetObjectFactory
#include "NetActorFactory.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNetActorFactory : public UNetObjectFactory {
    GENERATED_BODY()
public:
    UNetActorFactory();

};

