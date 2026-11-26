#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "LiveLinkBaseFrameData.h"
#include "LiveLinkAnimationFrameData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    LIVELINKINTERFACE_API FLiveLinkAnimationFrameData();
};

