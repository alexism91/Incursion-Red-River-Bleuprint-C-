#pragma once
#include "CoreMinimal.h"
#include "IRRNavQueryFilter_Avoidance.h"
#include "IRRNavQueryFilter_AvoidanceIgnoreBodies.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRNavQueryFilter_AvoidanceIgnoreBodies : public UIRRNavQueryFilter_Avoidance {
    GENERATED_BODY()
public:
    UIRRNavQueryFilter_AvoidanceIgnoreBodies();

};

