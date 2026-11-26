#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "BeginHoverSequenceHitTestDelegateDelegate.h"
#include "CanBeginClickSequenceDelegateDelegate.h"
#include "EScriptableToolMouseButton.h"
#include "MouseBehaviorModiferCheckDelegateDelegate.h"
#include "OnBeginClickSequenceDelegateDelegate.h"
#include "OnBeginHoverDelegateDelegate.h"
#include "OnBeginSequencePreviewDelegateDelegate.h"
#include "OnClickDragDelegateDelegate.h"
#include "OnClickPressDelegateDelegate.h"
#include "OnClickReleaseDelegateDelegate.h"
#include "OnEndHoverDelegateDelegate.h"
#include "OnForceEndCaptureDelegate_ScriptableToolsDelegate.h"
#include "OnHitByClickDelegateDelegate.h"
#include "OnKeyStateToggleDelegateDelegate.h"
#include "OnMouseWheelScrollDownDelegateDelegate.h"
#include "OnMouseWheelScrollUpDelegateDelegate.h"
#include "OnNextSequenceClickDelegateDelegate.h"
#include "OnNextSequencePreviewDelegateDelegate.h"
#include "OnTerminateClickSequenceDelegateDelegate.h"
#include "OnTerminateDragSequenceDelegateDelegate.h"
#include "OnUpdateHoverDelegateDelegate.h"
#include "RequestAbortClickSequenceDelegateDelegate.h"
#include "ScriptableInteractiveTool.h"
#include "ScriptableToolModifierStates.h"
#include "TestCanBeginClickDragSequenceDelegateDelegate.h"
#include "TestIfHitByClickDelegateDelegate.h"
#include "TestShouldRespondToMouseWheelDelegateDelegate.h"
#include "ScriptableModularBehaviorTool.generated.h"

class UScriptableToolClickDragBehavior;
class UScriptableToolClickSequenceBehavior;
class UScriptableToolDoubleClickBehavior;
class UScriptableToolKeyInputBehavior;
class UScriptableToolMouseHoverBehavior;
class UScriptableToolMouseWheelBehavior;
class UScriptableToolSingleClickBehavior;
class UScriptableToolSingleClickOrDragBehavior;

UCLASS(Blueprintable, NonTransient)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableModularBehaviorTool : public UScriptableInteractiveTool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolSingleClickBehavior*> SingleClickBehaviors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolDoubleClickBehavior*> DoubleClickBehaviors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolClickDragBehavior*> ClickDragBehaviors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolSingleClickOrDragBehavior*> SingleClickOrDragBehaviors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolMouseWheelBehavior*> MouseWheelBehaviors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolClickSequenceBehavior*> MultiClickSequenceBehaviors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolMouseHoverBehavior*> MouseHoverBehaviors;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<UScriptableToolKeyInputBehavior*> KeyInputBehaviors;
    
public:
    UScriptableModularBehaviorTool();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShiftDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCtrlDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAltDown() const;
    
    UFUNCTION(BlueprintCallable)
    FScriptableToolModifierStates GetActiveModifiers();
    
    UFUNCTION(BlueprintCallable)
    void AddSingleKeyInputBehavior(FOnKeyStateToggleDelegate OnKeyPressed, FOnKeyStateToggleDelegate OnKeyReleased, FOnForceEndCaptureDelegate_ScriptableTools OnForceEndCaptureFuncIn, FKey Key, const FMouseBehaviorModiferCheckDelegate CaptureCheck, int32 CapturePriority);
    
    UFUNCTION(BlueprintCallable)
    void AddSingleClickOrDragBehavior(FTestIfHitByClickDelegate IfHitByClick, FOnHitByClickDelegate OnHitByClick, FTestCanBeginClickDragSequenceDelegate CanBeginClickDragSequence, FOnClickPressDelegate OnClickPress, FOnClickDragDelegate OnClickDrag, FOnClickReleaseDelegate OnClickRelease, FOnTerminateDragSequenceDelegate OnTerminateDragSequence, FMouseBehaviorModiferCheckDelegate CaptureCheck, int32 CapturePriority, EScriptableToolMouseButton MouseButton, bool bBeginDragIfClickTargetNotHit, float ClickDistanceThreshold);
    
    UFUNCTION(BlueprintCallable)
    void AddSingleClickBehavior(const FTestIfHitByClickDelegate IfHitByClick, const FOnHitByClickDelegate OnHitByClick, const FMouseBehaviorModiferCheckDelegate CaptureCheck, int32 CapturePriority, EScriptableToolMouseButton MouseButton, bool bHitTestOnRelease);
    
    UFUNCTION(BlueprintCallable)
    void AddMultiKeyInputBehavior(FOnKeyStateToggleDelegate OnKeyPressed, FOnKeyStateToggleDelegate OnKeyReleased, FOnForceEndCaptureDelegate_ScriptableTools OnForceEndCaptureFuncIn, TArray<FKey> Keys, bool bRequireAllKeys, const FMouseBehaviorModiferCheckDelegate CaptureCheck, int32 CapturePriority);
    
    UFUNCTION(BlueprintCallable)
    void AddMultiClickSequenceBehavior(FOnBeginSequencePreviewDelegate OnBeginSequencePreview, FCanBeginClickSequenceDelegate CanBeginClickSequence, FOnBeginClickSequenceDelegate OnBeginClickSequence, FOnNextSequencePreviewDelegate OnNextSequencePreview, FOnNextSequenceClickDelegate OnNextSequenceClick, FOnTerminateClickSequenceDelegate OnTerminateClickSequence, FRequestAbortClickSequenceDelegate RequestAbortClickSequence, FMouseBehaviorModiferCheckDelegate CaptureCheck, const FMouseBehaviorModiferCheckDelegate HoverCaptureCheck, int32 CapturePriority, EScriptableToolMouseButton MouseButton);
    
    UFUNCTION(BlueprintCallable)
    void AddMouseWheelBehavior(FTestShouldRespondToMouseWheelDelegate TestShouldRespondToMouseWheel, FOnMouseWheelScrollUpDelegate OnMouseWheelScrollUp, FOnMouseWheelScrollDownDelegate OnMouseWheelScrollDown, FMouseBehaviorModiferCheckDelegate CaptureCheck, int32 CapturePriority);
    
    UFUNCTION(BlueprintCallable)
    void AddMouseHoverBehavior(FBeginHoverSequenceHitTestDelegate BeginHoverSequenceHitTest, FOnBeginHoverDelegate OnBeginHover, FOnUpdateHoverDelegate OnUpdateHover, FOnEndHoverDelegate OnEndHover, const FMouseBehaviorModiferCheckDelegate HoverCaptureCheck, int32 CapturePriority);
    
    UFUNCTION(BlueprintCallable)
    void AddDoubleClickBehavior(const FTestIfHitByClickDelegate IfHitByClick, const FOnHitByClickDelegate OnHitByClick, const FMouseBehaviorModiferCheckDelegate CaptureCheck, int32 CapturePriority, EScriptableToolMouseButton MouseButton, bool bHitTestOnRelease);
    
    UFUNCTION(BlueprintCallable)
    void AddClickDragBehavior(const FTestCanBeginClickDragSequenceDelegate CanBeginClickDragSequence, const FOnClickPressDelegate OnClickPress, const FOnClickDragDelegate OnClickDrag, const FOnClickReleaseDelegate OnClickRelease, const FOnTerminateDragSequenceDelegate OnTerminateDragSequence, const FMouseBehaviorModiferCheckDelegate CaptureCheck, int32 CapturePriority, EScriptableToolMouseButton MouseButton, bool bUpdateModifiersDuringDrag);
    
};

