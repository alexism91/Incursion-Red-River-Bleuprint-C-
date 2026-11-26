#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "PassiveSensor.h"
#include "SensorHearing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API USensorHearing : public UPassiveSensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHearingDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DistanceCurve;
    
    USensorHearing();

    UFUNCTION(BlueprintCallable)
    void SetDistanceParam(float InMaxHearingDistance, float InMinScore);
    
};

