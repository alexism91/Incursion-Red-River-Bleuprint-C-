#pragma once
#include "CoreMinimal.h"
#include "IRRNavQueryFilter_Avoidance.h"
#include "IRRNavQueryFilter_AvoidanceBots.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRNavQueryFilter_AvoidanceBots : public UIRRNavQueryFilter_Avoidance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BotRouteCostMultiplier;
    
    UIRRNavQueryFilter_AvoidanceBots();

};

