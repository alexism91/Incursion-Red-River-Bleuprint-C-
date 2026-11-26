#include "KronosUserAuthWidget.h"

UKronosUserAuthWidget::UKronosUserAuthWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UKronosUserAuthWidget::OnUserAuthStateChanged(EKronosUserAuthState NewState, EKronosUserAuthState PrevState, bool bIsInitialAuth) {
}

void UKronosUserAuthWidget::OnUserAuthStarted(bool bIsInitialAuth) {
}

void UKronosUserAuthWidget::OnUserAuthComplete(EKronosUserAuthCompleteResult Result, bool bWasInitialAuth, const FText& ErrorText) {
}





