#include "MediaOutput.h"

UMediaOutput::UMediaOutput() {
    this->NumberOfTextureBuffers = 4;
}

bool UMediaOutput::Validate(FString& OutFailureReason) const {
    return false;
}

UMediaCapture* UMediaOutput::CreateMediaCapture() {
    return NULL;
}


