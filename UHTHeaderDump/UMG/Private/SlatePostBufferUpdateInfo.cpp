#include "SlatePostBufferUpdateInfo.h"

FSlatePostBufferUpdateInfo::FSlatePostBufferUpdateInfo() {
    this->BufferToUpdate = ESlatePostRT::None;
    this->PostParamUpdater = NULL;
}

