#include "SlateRHIRendererSettings.h"

USlateRHIRendererSettings::USlateRHIRendererSettings() {
}

FSlatePostSettings USlateRHIRendererSettings::GetSlatePostSetting(ESlatePostRT InPostBufferBit) const {
    return FSlatePostSettings{};
}

FSlatePostSettings USlateRHIRendererSettings::GetMutableSlatePostSetting(ESlatePostRT InPostBufferBit) {
    return FSlatePostSettings{};
}


