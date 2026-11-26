#pragma once
#include "CoreMinimal.h"
#include "CanBeginClickSequenceDelegateDelegate.h"
#include "EScriptableToolMouseButton.h"
#include "MouseBehaviorModiferCheckDelegateDelegate.h"
#include "OnBeginClickSequenceDelegateDelegate.h"
#include "OnBeginSequencePreviewDelegateDelegate.h"
#include "OnNextSequenceClickDelegateDelegate.h"
#include "OnNextSequencePreviewDelegateDelegate.h"
#include "OnTerminateClickSequenceDelegateDelegate.h"
#include "RequestAbortClickSequenceDelegateDelegate.h"
#include "ScriptableToolBehavior.h"
#include "ScriptableToolClickSequenceBehavior.generated.h"

class UMultiClickSequenceInputBehavior;
class UScriptableModularBehaviorTool;

UCLASS(Blueprintable)
class UScriptableToolClickSequenceBehavior : public UScriptableToolBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptableModularBehaviorTool* BehaviorHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMultiClickSequenceInputBehavior* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseBehaviorModiferCheckDelegate ModifierCheckFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMouseBehaviorModiferCheckDelegate HoverModifierCheckFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginSequencePreviewDelegate OnBeginSequencePreviewFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCanBeginClickSequenceDelegate CanBeginClickSequenceFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginClickSequenceDelegate OnBeginClickSequenceFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNextSequencePreviewDelegate OnNextSequencePreviewFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNextSequenceClickDelegate OnNextSequenceClickFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTerminateClickSequenceDelegate OnTerminateClickSequenceFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestAbortClickSequenceDelegate RequestAbortClickSequenceFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScriptableToolMouseButton MouseButton;
    
public:
    UScriptableToolClickSequenceBehavior();

};

