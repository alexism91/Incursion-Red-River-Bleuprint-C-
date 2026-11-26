#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderFloatValue.h"
#include "BTDecorator_BlackboardBase.h"
#include "FAIDistanceType.h"
#include "ValueOrBBKey_Bool.h"
#include "BTDecorator_IsAtLocation.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ParametrizedAcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDistanceType GeometricDistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseParametrizedRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool bUseNavAgentGoalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Bool bPathFindingBasedTest;
    
    UBTDecorator_IsAtLocation();

};

