#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetObjectFactory.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient)
class UNetObjectFactory : public UObject {
    GENERATED_BODY()
public:
    UNetObjectFactory();

};

