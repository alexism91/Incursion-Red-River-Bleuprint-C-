#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=NavigationQueryFilter -FallbackName=NavigationQueryFilter
#include "EIRRAvoidanceClaimType.h"
#include "IRRNavQueryFilter_Avoidance.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRNavQueryFilter_Avoidance : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIRRAvoidanceClaimType> IgnoredRouteCostClaimTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenGroundCostMultiplier;
    
public:
    UIRRNavQueryFilter_Avoidance();

};

