#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputDeviceRay -FallbackName=InputDeviceRay
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputRayHit -FallbackName=InputRayHit
#include "ScriptableInteractiveTool.h"
#include "ScriptableToolModifierStates.h"
#include "ScriptableSingleClickTool.generated.h"

class UMouseHoverBehavior;
class USingleClickInputBehavior;

UCLASS(Blueprintable, NonTransient)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableSingleClickTool : public UScriptableInteractiveTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantMouseHover;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USingleClickInputBehavior* SingleClickBehavior;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, NonTransactional, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UMouseHoverBehavior* MouseHoverBehavior;
    
    UScriptableSingleClickTool();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FInputRayHit TestIfHitByClick(FInputDeviceRay ClickPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnHoverUpdate(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FInputRayHit OnHoverHitTest(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHoverEnd(const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHoverBegin(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitByClick(FInputDeviceRay ClickPos, const FScriptableToolModifierStates& Modifiers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShiftDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCtrlDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAltDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InActiveHover() const;
    
    UFUNCTION(BlueprintCallable)
    FScriptableToolModifierStates GetActiveModifiers();
    
};

