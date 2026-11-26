#pragma once
#include "CoreMinimal.h"
#include "RootMotionModifier_Warp.h"
#include "RootMotionModifier_SimpleWarp.generated.h"

UCLASS(Blueprintable, Deprecated, EditInlineNew, MinimalAPI, NotPlaceable)
class UDEPRECATED_RootMotionModifier_SimpleWarp : public URootMotionModifier_Warp {
    GENERATED_BODY()
public:
    UDEPRECATED_RootMotionModifier_SimpleWarp();

};

