#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "IRRButtonConstructor.h"
#include "IRRTabButtonInterface.h"
#include "IRRTabDescriptor.h"
#include "IRRUserWidget.h"
#include "OnButtonClickedDelegate.h"
#include "OnButtonDeselectedDelegate.h"
#include "OnButtonDisabledDelegate.h"
#include "OnButtonEnabledDelegate.h"
#include "OnButtonHoveredDelegate.h"
#include "OnButtonSelectedDelegate.h"
#include "OnButtonUnHoveredDelegate.h"
#include "IRRBaseButtonWidget.generated.h"

class UAkAudioEvent;
class UButton;
class UIRRAudioData;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRBaseButtonWidget : public UIRRUserWidget, public IIRRTabButtonInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMinSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAudioData* AudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOnHoverSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOnUnHoverSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOnClickSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideOnHoverSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnHoverSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideOnUnHoverSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnUnHoverSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideOnClickSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnClickSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClicked OnButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonSelected OnButtonSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonDeselected OnButtonDeselected;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonHovered OnButtonHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonUnHovered OnButtonUnHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonEnabled OnButtonEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonDisabled OnButtonDisabled;
    
    UIRRBaseButtonWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetText(const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTabLabelInfo_Implementation(const FIRRTabDescriptor& TabLabelInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSize(bool bInUseMinSize, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool bInIsSelected, bool bManual);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIcon(FSlateBrush InIcon);
    
    UFUNCTION(BlueprintCallable)
    void OnUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnSelected();
    
    UFUNCTION(BlueprintCallable)
    void OnHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnEnabled();
    
    UFUNCTION(BlueprintCallable)
    void OnDisabled();
    
    UFUNCTION(BlueprintCallable)
    void OnDeselected();
    
    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDeselected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ConstructFromStruct(FIRRButtonConstructor InStruct);
    

    // Fix for true pure virtual functions not being implemented
};

