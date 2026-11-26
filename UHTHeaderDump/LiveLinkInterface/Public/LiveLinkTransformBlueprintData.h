#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "LiveLinkTransformFrameData.h"
#include "LiveLinkTransformStaticData.h"
#include "LiveLinkTransformBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkTransformStaticData StaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkTransformFrameData FrameData;
    
    LIVELINKINTERFACE_API FLiveLinkTransformBlueprintData();
};

