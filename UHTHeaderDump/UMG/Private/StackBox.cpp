#include "StackBox.h"
#include "ESlateVisibility.h"

UStackBox::UStackBox() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Orientation = Orient_Horizontal;
}

bool UStackBox::ReplaceStackBoxChildAt(int32 Index, UWidget* Content) {
    return false;
}

UStackBoxSlot* UStackBox::AddChildToStackBox(UWidget* Content) {
    return NULL;
}


