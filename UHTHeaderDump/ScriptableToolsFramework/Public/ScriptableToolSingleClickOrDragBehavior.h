#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolMouseButton.h"
#include "MouseBehaviorModiferCheckDelegateDelegate.h"
#include "OnClickDragDelegateDelegate.h"
#include "OnClickPressDelegateDelegate.h"
#include "OnClickReleaseDelegateDelegate.h"
#include "OnHitByClickDelegateDelegate.h"
#include "OnTerminateDragSequenceDelegateDelegate.h"
#include "ScriptableToolBehavior.h"
#include "TestCanBeginClickDragSequenceDelegateDelegate.h"
#include "TestIfHitByClickDelegateDelegate.h"
#include "ScriptableToolSingleClickOrDragBehavior.generated.h"

class UScriptableModularBehaviorTool;
class USingleClickOrDragInputBehavior;

UCLASS(Blueprintable)
class UScriptableToolSingleClickOrDragBehavior : public UScriptableToolBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptableModularBehaviorTool* BehaviorHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USingleClickOrDragInputBehavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseBehaviorModiferCheckDelegate ModifierCheckFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestIfHitByClickDelegate TestIfHitByClickFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitByClickDelegate OnHitByClickFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestCanBeginClickDragSequenceDelegate TestCanBeginClickDragSequenceFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickPressDelegate OnClickPressFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickDragDelegate OnClickDragFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickReleaseDelegate OnClickReleaseFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTerminateDragSequenceDelegate OnTerminateDragSequenceFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScriptableToolMouseButton MouseButton;
    
public:
    UScriptableToolSingleClickOrDragBehavior();

};

