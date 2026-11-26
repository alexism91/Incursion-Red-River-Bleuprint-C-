#pragma once
#include "CoreMinimal.h"
#include "BeginHoverSequenceHitTestDelegateDelegate.h"
#include "MouseBehaviorModiferCheckDelegateDelegate.h"
#include "OnBeginHoverDelegateDelegate.h"
#include "OnEndHoverDelegateDelegate.h"
#include "OnUpdateHoverDelegateDelegate.h"
#include "ScriptableToolBehavior.h"
#include "ScriptableToolMouseHoverBehavior.generated.h"

class UMouseHoverBehavior;
class UScriptableModularBehaviorTool;

UCLASS(Blueprintable)
class UScriptableToolMouseHoverBehavior : public UScriptableToolBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptableModularBehaviorTool* BehaviorHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMouseHoverBehavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseBehaviorModiferCheckDelegate HoverModifierCheckFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginHoverSequenceHitTestDelegate BeginHoverSequenceHitTestFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginHoverDelegate OnBeginHoverFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateHoverDelegate OnUpdateHoverFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndHoverDelegate OnEndHoverFunc;
    
public:
    UScriptableToolMouseHoverBehavior();

};

