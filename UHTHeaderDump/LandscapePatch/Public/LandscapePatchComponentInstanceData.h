#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponentInstanceData -FallbackName=SceneComponentInstanceData
#include "LandscapePatchComponentInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FLandscapePatchComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    LANDSCAPEPATCH_API FLandscapePatchComponentInstanceData();
};

