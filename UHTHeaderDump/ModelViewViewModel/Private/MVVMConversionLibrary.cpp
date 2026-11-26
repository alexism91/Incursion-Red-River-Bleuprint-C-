#include "MVVMConversionLibrary.h"

UMVVMConversionLibrary::UMVVMConversionLibrary() {
}

ESlateVisibility UMVVMConversionLibrary::Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility) {
    return ESlateVisibility::Visible;
}


