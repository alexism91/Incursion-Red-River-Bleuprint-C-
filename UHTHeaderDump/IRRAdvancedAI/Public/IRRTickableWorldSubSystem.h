#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "ObjectTickInterface.h"
#include "IRRTickableWorldSubSystem.generated.h"

UCLASS(Abstract, Blueprintable)
class IRRADVANCEDAI_API UIRRTickableWorldSubSystem : public UWorldSubsystem, public IObjectTickInterface {
    GENERATED_BODY()
public:
    UIRRTickableWorldSubSystem();


    // Fix for true pure virtual functions not being implemented
};

