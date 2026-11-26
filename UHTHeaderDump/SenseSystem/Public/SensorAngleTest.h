#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "SensorLocationTestBase.h"
#include "SensorAngleTest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API USensorAngleTest : public USensorLocationTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleLost;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ScoreModifyCurve;
    
    USensorAngleTest();

    UFUNCTION(BlueprintCallable)
    void SetAngleParam(float Max_Angle, float Max_AngleLost);
    
};

