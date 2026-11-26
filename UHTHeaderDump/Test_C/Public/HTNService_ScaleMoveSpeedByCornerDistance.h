#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNService -FallbackName=HTNService
#include "HTNService_ScaleMoveSpeedByCornerDistance.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNService_ScaleMoveSpeedByCornerDistance : public UHTNService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDotNextCorner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OutRangeA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OutRangeB;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InRangeA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InRangeB;
    
    UHTNService_ScaleMoveSpeedByCornerDistance();

};

