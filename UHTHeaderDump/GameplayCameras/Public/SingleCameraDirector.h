#pragma once
#include "CoreMinimal.h"
#include "CameraDirector.h"
#include "SingleCameraDirector.generated.h"

class UCameraRigAsset;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USingleCameraDirector : public UCameraDirector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigAsset* CameraRig;
    
    USingleCameraDirector();

};

