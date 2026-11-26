#pragma once
#include "CoreMinimal.h"
#include "IRRNavDataInterface.h"
#include "IRRNavTrackingInterface.generated.h"

UINTERFACE()
class UIRRNavTrackingInterface : public UIRRNavDataInterface {
    GENERATED_BODY()
};

class IIRRNavTrackingInterface : public IIRRNavDataInterface {
    GENERATED_BODY()
public:
};

