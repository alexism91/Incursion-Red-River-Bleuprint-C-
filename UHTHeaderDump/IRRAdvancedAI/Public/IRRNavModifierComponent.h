#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavModifierComponent -FallbackName=NavModifierComponent
#include "IRRNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRADVANCEDAI_API UIRRNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UIRRNavModifierComponent(const FObjectInitializer& ObjectInitializer);

};

