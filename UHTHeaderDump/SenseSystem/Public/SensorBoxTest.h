#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SensorLocationTestBase.h"
#include "SensorBoxTest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API USensorBoxTest : public USensorLocationTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientedBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreVerticalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScore;
    
    USensorBoxTest();

    UFUNCTION(BlueprintCallable)
    void SetBoxParam(FVector Extent, bool OrientedBox, bool IgnoreVerticalRotation, bool Score);
    
};

