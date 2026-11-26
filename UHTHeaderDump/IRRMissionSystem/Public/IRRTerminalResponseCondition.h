#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRReplicatedObject -FallbackName=IRRReplicatedObject
#include "IRRTerminalResponseCondition.generated.h"

class UIRRTerminalComponent;
class UIRRTerminalSequence;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalResponseCondition : public UIRRReplicatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRTerminalSequence*> OnFailureSequences;
    
    UIRRTerminalResponseCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Evaluate(const UIRRTerminalComponent* Terminal);
    
};

