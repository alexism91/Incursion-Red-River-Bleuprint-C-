#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "IRRMarkerOnHoveredDelegate.h"
#include "IRRMarkerOnUnHoveredDelegate.h"
#include "IRRMarkerSettings.h"
#include "IRRMarkerWidget.generated.h"

class UIRRMarkerComponent;
class UIRRToolTipWidget;
class UImage;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRMarkerWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMarkerComponent* MarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMarkerSettings MarkerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRToolTipWidget* MarkerToolTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MarkerBackgroundSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MarkerBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MarkerIconShadowBackdrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* MarkerIconSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* MarkerIconImage;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMarkerOnHovered OnHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMarkerOnUnHovered OnUnhovered;
    
    UIRRMarkerWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStatic() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateMarker();
    
    UFUNCTION(BlueprintCallable)
    void ApplyMarkerSettings(const FIRRMarkerSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    void ActivateMarker();
    
};

