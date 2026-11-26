#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaterBodyGenerator.generated.h"

UCLASS(Abstract, Blueprintable, Deprecated, MinimalAPI, NotPlaceable, Within=WaterBody)
class UDEPRECATED_WaterBodyGenerator : public UObject {
    GENERATED_BODY()
public:
    UDEPRECATED_WaterBodyGenerator();

};

