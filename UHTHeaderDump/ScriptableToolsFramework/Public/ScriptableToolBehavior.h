#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptableToolBehavior.generated.h"

UCLASS(Abstract, Blueprintable)
class UScriptableToolBehavior : public UObject {
    GENERATED_BODY()
public:
    UScriptableToolBehavior();

};

