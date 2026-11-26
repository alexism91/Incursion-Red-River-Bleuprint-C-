#pragma once
#include "CoreMinimal.h"
#include "EPCGPointNeighborhoodDensityMode.h"
#include "PCGSettings.h"
#include "PCGPointNeighborhoodSettings.generated.h"

UCLASS(Blueprintable)
class UPCGPointNeighborhoodSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetDistanceToAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DistanceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetAveragePositionToAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AveragePositionAttribute;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGPointNeighborhoodDensityMode SetDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetAveragePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetAverageColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeightedAverage;
    
    UPCGPointNeighborhoodSettings();

};

