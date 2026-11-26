#pragma once
#include "CoreMinimal.h"
#include "MouseBehaviorModiferCheckDelegateDelegate.h"
#include "OnMouseWheelScrollDownDelegateDelegate.h"
#include "OnMouseWheelScrollUpDelegateDelegate.h"
#include "ScriptableToolBehavior.h"
#include "TestShouldRespondToMouseWheelDelegateDelegate.h"
#include "ScriptableToolMouseWheelBehavior.generated.h"

class UMouseWheelInputBehavior;
class UScriptableModularBehaviorTool;

UCLASS(Blueprintable)
class UScriptableToolMouseWheelBehavior : public UScriptableToolBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptableModularBehaviorTool* BehaviorHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMouseWheelInputBehavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseBehaviorModiferCheckDelegate ModifierCheckFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestShouldRespondToMouseWheelDelegate TestShouldRespondToMouseWheelFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseWheelScrollUpDelegate OnMouseWheelScrollUpFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseWheelScrollDownDelegate OnMouseWheelScrollDownFunc;
    
public:
    UScriptableToolMouseWheelBehavior();

};

