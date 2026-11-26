#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationSystemV1 -FallbackName=NavigationSystemV1
#include "IRRNavigationSystem.generated.h"

UCLASS(Blueprintable, NonTransient)
class IRRADVANCEDAI_API UIRRNavigationSystem : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
    UIRRNavigationSystem();

};

