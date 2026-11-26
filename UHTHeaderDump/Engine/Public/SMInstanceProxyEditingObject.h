#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SMInstanceProxyEditingObject.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class USMInstanceProxyEditingObject : public UObject {
    GENERATED_BODY()
public:
    USMInstanceProxyEditingObject();

};

