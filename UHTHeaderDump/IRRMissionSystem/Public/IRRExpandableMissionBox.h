#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "OnExpansionStateChangedDelegate.h"
#include "IRRExpandableMissionBox.generated.h"

class UIRRBaseButtonWidget;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRExpandableMissionBox : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* ToggleButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* ExpandButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* CollapseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ContentSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpandedWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpandDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartExpanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStateIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ExpandIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush CollapseIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideUnavailableButton;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExpansionStateChanged OnExpansionStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExpanded;
    
public:
    UIRRExpandableMissionBox();

    UFUNCTION(BlueprintCallable)
    void ToggleExpansion();
    
    UFUNCTION(BlueprintCallable)
    void SetExpanded(bool bInExpanded, bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnExpansionProgress(float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnExpansionFinished(bool bInIsExpanded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExpanded() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleToggleButtonClicked(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable)
    void HandleExpandButtonClicked(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable)
    void HandleCollapseButtonClicked(UIRRBaseButtonWidget* ButtonRef);
    
};

