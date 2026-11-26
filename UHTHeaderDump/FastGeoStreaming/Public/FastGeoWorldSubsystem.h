#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "FastGeoWorldSubsystem.generated.h"

UCLASS(Blueprintable)
class FASTGEOSTREAMING_API UFastGeoWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UFastGeoWorldSubsystem();

};

