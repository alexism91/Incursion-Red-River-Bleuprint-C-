#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Visual.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, MinimalAPI)
class UVisual : public UObject {
    GENERATED_BODY()
public:
    UVisual();

};

