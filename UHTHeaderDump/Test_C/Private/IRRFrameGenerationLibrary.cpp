#include "IRRFrameGenerationLibrary.h"

UIRRFrameGenerationLibrary::UIRRFrameGenerationLibrary() {
}

bool UIRRFrameGenerationLibrary::SetFrameGenerationVendor(const UObject* WorldContextObject, EIRRFrameGenerationVendor Vendor) {
    return false;
}

bool UIRRFrameGenerationLibrary::IsRestartRequiredForFrameGeneration(EIRRFrameGenerationVendor Vendor) {
    return false;
}

bool UIRRFrameGenerationLibrary::IsFrameGenerationVendorSupported(EIRRFrameGenerationVendor Vendor) {
    return false;
}

EIRRFrameGenerationVendor UIRRFrameGenerationLibrary::GetSessionFrameGenerationVendor() {
    return EIRRFrameGenerationVendor::None;
}

EIRRFrameGenerationVendor UIRRFrameGenerationLibrary::GetSavedFrameGenerationVendor() {
    return EIRRFrameGenerationVendor::None;
}


