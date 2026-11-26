#pragma once
#include "CoreMinimal.h"
#include "PCGManagedResource.h"
#include "PCGManagedComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGManagedComponentBase : public UPCGManagedResource {
    GENERATED_BODY()
public:
    UPCGManagedComponentBase();

};

