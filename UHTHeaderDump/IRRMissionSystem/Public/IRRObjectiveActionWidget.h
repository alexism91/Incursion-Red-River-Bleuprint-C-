#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "IRRObjectiveActionWidget.generated.h"

class UIRRBaseButtonWidget;
class UIRRMissionObjective;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRObjectiveActionWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionObjective* MissionObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* Button;
    
    UIRRObjectiveActionWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleActionWidget(bool bActivate);
    
};

