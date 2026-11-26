#pragma once
#include "CoreMinimal.h"
#include "OdinCaptureDeviceInfo.h"
#include "GetCaptureDeviceDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FGetCaptureDeviceDelegate, const TArray<FOdinCaptureDeviceInfo>&, OutDevices, const FOdinCaptureDeviceInfo&, CurrentDevice);

