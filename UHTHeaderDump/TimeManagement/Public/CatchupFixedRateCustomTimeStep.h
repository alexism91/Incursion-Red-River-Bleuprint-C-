#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "FixedFrameRateCustomTimeStep.h"
#include "CatchupFixedRateCustomTimeStep.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UCatchupFixedRateCustomTimeStep : public UFixedFrameRateCustomTimeStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxCatchupSeconds;
    
    UCatchupFixedRateCustomTimeStep();

};

