#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "SensorLocationTestBase.h"
#include "SensorDistanceTest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API USensorDistanceTest : public USensorLocationTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceLost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ScoreModifyCurve;
    
    USensorDistanceTest();

    UFUNCTION(BlueprintCallable)
    void SetDistanceParam(const float InMaxDistance, const float InMaxDistanceLost);
    
};

