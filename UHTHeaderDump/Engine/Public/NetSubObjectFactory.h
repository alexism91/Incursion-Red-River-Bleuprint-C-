#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=NetObjectFactory -FallbackName=NetObjectFactory
#include "NetSubObjectFactory.generated.h"

UCLASS(Blueprintable, NonTransient)
class UNetSubObjectFactory : public UNetObjectFactory {
    GENERATED_BODY()
public:
    UNetSubObjectFactory();

};

