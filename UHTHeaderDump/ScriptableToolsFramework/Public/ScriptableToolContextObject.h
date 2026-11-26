#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptableToolContextObject.generated.h"

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolContextObject : public UObject {
    GENERATED_BODY()
public:
    UScriptableToolContextObject();

};

