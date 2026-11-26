#pragma once
#include "CoreMinimal.h"
#include "EScriptableToolMouseButton.h"
#include "MouseBehaviorModiferCheckDelegateDelegate.h"
#include "OnHitByClickDelegateDelegate.h"
#include "ScriptableToolBehavior.h"
#include "TestIfHitByClickDelegateDelegate.h"
#include "ScriptableToolSingleClickBehavior.generated.h"

class UScriptableModularBehaviorTool;
class USingleClickInputBehavior;

UCLASS(Blueprintable)
class UScriptableToolSingleClickBehavior : public UScriptableToolBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptableModularBehaviorTool* BehaviorHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USingleClickInputBehavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseBehaviorModiferCheckDelegate ModifierCheckFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTestIfHitByClickDelegate TestIfHitByClickFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitByClickDelegate OnHitByClickFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScriptableToolMouseButton MouseButton;
    
public:
    UScriptableToolSingleClickBehavior();

};

