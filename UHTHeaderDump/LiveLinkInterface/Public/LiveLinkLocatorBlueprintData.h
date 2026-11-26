#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkLocatorFrameData.h"
#include "LiveLinkLocatorStaticData.h"
#include "LiveLinkLocatorBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkLocatorBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkLocatorStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkLocatorFrameData FrameData;
    
    LIVELINKINTERFACE_API FLiveLinkLocatorBlueprintData();
};

