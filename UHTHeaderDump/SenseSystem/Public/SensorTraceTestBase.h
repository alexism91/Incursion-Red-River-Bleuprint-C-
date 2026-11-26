#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "ETraceTestParam.h"
#include "SensorLocationTestBase.h"
#include "SensorTraceTestBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class SENSESYSTEM_API USensorTraceTestBase : public USensorLocationTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraceTestParam TraceTestParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSphereTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    USensorTraceTestBase();

    UFUNCTION(BlueprintCallable)
    void SetBaseTraceParam(ETraceTestParam TraceParam, TEnumAsByte<ECollisionChannel> Collision, bool TraceComplex, bool SphereTrace, float NewSphereRadius);
    
};

