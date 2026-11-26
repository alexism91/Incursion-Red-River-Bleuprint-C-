#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkCameraFrameData.h"
#include "LiveLinkCameraStaticData.h"
#include "LiveLinkCameraBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkCameraStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkCameraFrameData FrameData;
    
    LIVELINKINTERFACE_API FLiveLinkCameraBlueprintData();
};

