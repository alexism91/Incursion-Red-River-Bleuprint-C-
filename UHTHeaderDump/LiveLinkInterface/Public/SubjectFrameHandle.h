#pragma once
#include "CoreMinimal.h"
#include "LiveLinkBaseBlueprintData.h"
#include "SubjectFrameHandle.generated.h"

USTRUCT(BlueprintType)
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    LIVELINKINTERFACE_API FSubjectFrameHandle();
};

