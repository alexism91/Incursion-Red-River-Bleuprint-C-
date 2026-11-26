#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EDescendantScrollDestination -FallbackName=EDescendantScrollDestination
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=EScrollWhenFocusChanges -FallbackName=EScrollWhenFocusChanges
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EConsumeMouseWheel -FallbackName=EConsumeMouseWheel
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ScrollBarStyle -FallbackName=ScrollBarStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ScrollBoxStyle -FallbackName=ScrollBoxStyle
#include "ESlateVisibility.h"
#include "OnScrollBarVisibilityChangedEventDelegate.h"
#include "OnScrollBoxFocusLostEventDelegate.h"
#include "OnScrollBoxFocusReceivedEventDelegate.h"
#include "OnUserScrolledEventDelegate.h"
#include "PanelWidget.h"
#include "ScrollBox.generated.h"

class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UScrollBox : public UPanelWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollAnimationInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTouchScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumePointerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey AnalogMouseWheelKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFocusable;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle WidgetBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ScrollBarVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScrollbarThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ScrollBarPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbarTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowOverscroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BackPadScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FrontPadScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateWheelScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDescendantScrollDestination NavigationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationScrollPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScrollWhenFocusChanges ScrollWhenFocusChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRightClickDragScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelScrollMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserScrolledEvent OnUserScrolled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScrollBarVisibilityChangedEvent OnScrollBarVisibilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScrollBoxFocusReceivedEvent OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScrollBoxFocusLostEvent OnFocusLost;
    
    UScrollBox();

    UFUNCTION(BlueprintCallable)
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(float NewScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarPadding(const FMargin& NewScrollbarPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollAnimationInterpolationSpeed(float NewScrollAnimationInterpolationSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationDestination(const EDescendantScrollDestination NewNavigationDestination);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTouchScrollingEnabled(bool bInEnableTouchScrolling);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool bInIsFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumePointerInput(bool bInConsumePointerInput);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
    
    UFUNCTION(BlueprintCallable)
    void SetAnalogMouseWheelKey(FKey InMouseWheelKey);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowOverscroll(bool NewAllowOverscroll);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToStart();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetViewOffsetFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetViewFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffsetOfEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverscrollPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverscrollOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsScrolling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFocusable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConsumePointerInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetAnalogMouseWheelKey() const;
    
    UFUNCTION(BlueprintCallable)
    void EndInertialScrolling();
    
};

