#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ETraceTestParam.h"
#include "SensorTraceTestBase.h"
#include "SensorTraceTest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API USensorTraceTest : public USensorTraceTestBase {
    GENERATED_BODY()
public:
    USensorTraceTest();

    UFUNCTION(BlueprintCallable)
    void SetTraceParam(ETraceTestParam TraceParam, TEnumAsByte<ECollisionChannel> Collision, bool bInTestBySingleLocation, bool TraceComplex, bool SphereTrace, float NewSphereRadius);
    
};

