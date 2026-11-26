#pragma once
#include "CoreMinimal.h"
#include "CameraRigProxyRedirectTableEntry.generated.h"

class UCameraRigAsset;
class UCameraRigProxyAsset;

USTRUCT(BlueprintType)
struct FCameraRigProxyRedirectTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigProxyAsset* CameraRigProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigAsset* CameraRig;
    
    GAMEPLAYCAMERAS_API FCameraRigProxyRedirectTableEntry();
};

