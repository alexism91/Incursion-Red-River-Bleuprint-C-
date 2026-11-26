#pragma once
#include "CoreMinimal.h"
#include "IRRTerminalWidget.h"
#include "IRRTerminalConsoleWidget.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalConsoleWidget : public UIRRTerminalWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* ActiveWidget;
    
    UIRRTerminalConsoleWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetActiveWidget();
    
};

