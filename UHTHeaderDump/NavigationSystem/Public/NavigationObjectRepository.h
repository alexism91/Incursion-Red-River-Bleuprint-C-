#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "NavigationObjectRepository.generated.h"

UCLASS(Blueprintable)
class UNavigationObjectRepository : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UNavigationObjectRepository();

};

