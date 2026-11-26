#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SensorLocationTestBase -FallbackName=SensorLocationTestBase
#include "IRRVisionCone.h"
#include "SensorDistanceAndAngleTest_Extended.generated.h"

class UCurveFloat;
class UIRRStatEffectComponent;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USensorDistanceAndAngleTest_Extended : public USensorLocationTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRVisionCone> AdditionalVisionCones;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* CachedDistanceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* CachedAngleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRStatEffectComponent* StatEffectComponent;
    
public:
    USensorDistanceAndAngleTest_Extended();

};

