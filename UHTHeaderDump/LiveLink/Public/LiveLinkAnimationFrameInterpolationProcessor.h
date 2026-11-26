#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBasicFrameInterpolationProcessor.h"
#include "LiveLinkAnimationFrameInterpolationProcessor.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor {
    GENERATED_BODY()
public:
    ULiveLinkAnimationFrameInterpolationProcessor();

};

