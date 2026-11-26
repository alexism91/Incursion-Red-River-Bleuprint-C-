#pragma once
#include "CoreMinimal.h"
#include "CameraDirector.h"
#include "PriorityQueueCameraDirector.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UPriorityQueueCameraDirector : public UCameraDirector {
    GENERATED_BODY()
public:
    UPriorityQueueCameraDirector();

};

