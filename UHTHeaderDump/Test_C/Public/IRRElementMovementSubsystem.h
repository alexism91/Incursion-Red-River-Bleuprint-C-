#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRTickableWorldSubSystem -FallbackName=IRRTickableWorldSubSystem
#include "IRRElementMovementSubsystem.generated.h"

class AIRRMovementGroup;

UCLASS(Blueprintable)
class TEST_C_API UIRRElementMovementSubsystem : public UIRRTickableWorldSubSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AIRRMovementGroup>> RegisteredGroups;
    
public:
    UIRRElementMovementSubsystem();

};

