#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "IRRTerminalUIInterface.h"
#include "IRRTerminalWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRTerminalWidget : public UIRRUserWidget, public IIRRTerminalUIInterface {
    GENERATED_BODY()
public:
    UIRRTerminalWidget();


    // Fix for true pure virtual functions not being implemented
};

