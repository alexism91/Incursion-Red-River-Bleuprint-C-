#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputDeviceRay -FallbackName=InputDeviceRay
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputRayHit -FallbackName=InputRayHit
#include "ScriptableInteractiveTool.h"
#include "ScriptableToolModifierStates.h"
#include "ScriptableClickDragTool.generated.h"

class UClickDragInputBehavior;
class UMouseHoverBehavior;

UCLASS(Blueprintable, NonTransient)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableClickDragTool : public UScriptableInteractiveTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantMouseHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateModifiersDuringDrag;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UClickDragInputBehavior* ClickDragBehavior;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMouseHoverBehavior* MouseHoverBehavior;
    
    UScriptableClickDragTool();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FInputRayHit TestIfCanBeginClickDrag(FInputDeviceRay ClickPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnHoverUpdate(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FInputRayHit OnHoverHitTest(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHoverEnd(const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHoverBegin(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDragUpdatePosition(FInputDeviceRay NewPosition, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDragSequenceCancelled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDragEnd(FInputDeviceRay EndPosition, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDragBegin(FInputDeviceRay StartPosition, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShiftDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCtrlDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAltDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InActiveHover() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InActiveClickDrag() const;
    
    UFUNCTION(BlueprintCallable)
    FScriptableToolModifierStates GetActiveModifiers();
    
};

