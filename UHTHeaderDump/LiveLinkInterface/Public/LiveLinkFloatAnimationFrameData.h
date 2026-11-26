#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform3f -FallbackName=Transform3f
#include "LiveLinkBaseFrameData.h"
#include "LiveLinkFloatAnimationFrameData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkFloatAnimationFrameData : public FLiveLinkBaseFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform3f> Transforms;
    
    LIVELINKINTERFACE_API FLiveLinkFloatAnimationFrameData();
};

