#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "MouseBehaviorModiferCheckDelegateDelegate.h"
#include "OnForceEndCaptureDelegate_ScriptableToolsDelegate.h"
#include "OnKeyStateToggleDelegateDelegate.h"
#include "ScriptableToolBehavior.h"
#include "ScriptableToolKeyInputBehavior.generated.h"

class UKeyInputBehavior;
class UScriptableModularBehaviorTool;

UCLASS(Blueprintable)
class UScriptableToolKeyInputBehavior : public UScriptableToolBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptableModularBehaviorTool* BehaviorHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKeyInputBehavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseBehaviorModiferCheckDelegate ModifierCheckFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyStateToggleDelegate OnKeyPressedFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyStateToggleDelegate OnKeyReleasedFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForceEndCaptureDelegate_ScriptableTools OnForceEndCaptureFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> ListenKeys;
    
public:
    UScriptableToolKeyInputBehavior();

};

