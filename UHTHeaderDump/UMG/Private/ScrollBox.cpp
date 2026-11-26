#include "ScrollBox.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping

UScrollBox::UScrollBox() {
    this->bIsVariable = false;
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->ScrollAnimationInterpolationSpeed = 15.00f;
    this->bEnableTouchScrolling = true;
    this->bConsumePointerInput = true;
    this->bIsFocusable = false;
    this->Orientation = Orient_Vertical;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->AlwaysShowScrollbar = false;
    this->AlwaysShowScrollbarTrack = false;
    this->AllowOverscroll = true;
    this->BackPadScrolling = false;
    this->FrontPadScrolling = false;
    this->bAnimateWheelScrolling = false;
    this->NavigationDestination = EDescendantScrollDestination::IntoView;
    this->NavigationScrollPadding = 0.00f;
    this->ScrollWhenFocusChanges = EScrollWhenFocusChanges::NoScroll;
    this->bAllowRightClickDragScrolling = true;
    this->WheelScrollMultiplier = 1.00f;
}

void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
}

void UScrollBox::SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges) {
}

void UScrollBox::SetScrollOffset(float NewScrollOffset) {
}

void UScrollBox::SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility) {
}

void UScrollBox::SetScrollbarThickness(const FVector2D& NewScrollbarThickness) {
}

void UScrollBox::SetScrollBarPadding(const FMargin& NewScrollbarPadding) {
}

void UScrollBox::SetScrollAnimationInterpolationSpeed(float NewScrollAnimationInterpolationSpeed) {
}

void UScrollBox::SetOrientation(TEnumAsByte<EOrientation> NewOrientation) {
}

void UScrollBox::SetNavigationDestination(const EDescendantScrollDestination NewNavigationDestination) {
}

void UScrollBox::SetIsTouchScrollingEnabled(bool bInEnableTouchScrolling) {
}

void UScrollBox::SetIsFocusable(bool bInIsFocusable) {
}

void UScrollBox::SetConsumePointerInput(bool bInConsumePointerInput) {
}

void UScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel) {
}

void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling) {
}

void UScrollBox::SetAnalogMouseWheelKey(FKey InMouseWheelKey) {
}

void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
}

void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
}

void UScrollBox::ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding) {
}

void UScrollBox::ScrollToStart() {
}

void UScrollBox::ScrollToEnd() {
}

float UScrollBox::GetViewOffsetFraction() const {
    return 0.0f;
}

float UScrollBox::GetViewFraction() const {
    return 0.0f;
}

float UScrollBox::GetScrollOffsetOfEnd() const {
    return 0.0f;
}

float UScrollBox::GetScrollOffset() const {
    return 0.0f;
}

float UScrollBox::GetOverscrollPercentage() const {
    return 0.0f;
}

float UScrollBox::GetOverscrollOffset() const {
    return 0.0f;
}

bool UScrollBox::GetIsScrolling() const {
    return false;
}

bool UScrollBox::GetIsFocusable() const {
    return false;
}

bool UScrollBox::GetConsumePointerInput() const {
    return false;
}

FKey UScrollBox::GetAnalogMouseWheelKey() const {
    return FKey{};
}

void UScrollBox::EndInertialScrolling() {
}


