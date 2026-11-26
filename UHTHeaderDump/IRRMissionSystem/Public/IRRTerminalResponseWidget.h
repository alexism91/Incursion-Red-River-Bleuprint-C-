#pragma once
#include "CoreMinimal.h"
#include "IRRTerminalWidget.h"
#include "IRRTerminalResponseWidget.generated.h"

class UIRRTerminalComponent;
class UIRRTerminalSequence;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalResponseWidget : public UIRRTerminalWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnResponseFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResponseFinished OnResponseFinished;
    
    UIRRTerminalResponseWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(UIRRTerminalSequence* TerminalSequence, UIRRTerminalComponent* TerminalComp, const FText& Command);
    
};

