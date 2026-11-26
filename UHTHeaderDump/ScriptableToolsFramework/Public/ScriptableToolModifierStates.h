#pragma once
#include "CoreMinimal.h"
#include "ScriptableToolModifierStates.generated.h"

USTRUCT(BlueprintType)
struct FScriptableToolModifierStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShiftDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCtrlDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAltDown;
    
    SCRIPTABLETOOLSFRAMEWORK_API FScriptableToolModifierStates();
};

