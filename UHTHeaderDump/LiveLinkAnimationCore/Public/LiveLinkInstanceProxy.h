#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstanceProxy -FallbackName=AnimInstanceProxy
#include "AnimNode_LiveLinkPose.h"
#include "LiveLinkInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNode_LiveLinkPose PoseNode;
    
    LIVELINKANIMATIONCORE_API FLiveLinkInstanceProxy();
};

