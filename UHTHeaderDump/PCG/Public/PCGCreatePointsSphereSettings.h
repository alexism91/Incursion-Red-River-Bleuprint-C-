#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPCGCoordinateSpace.h"
#include "EPCGSphereGeneration.h"
#include "EPCGSpherePointOrientation.h"
#include "PCGSettings.h"
#include "PCGCreatePointsSphereSettings.generated.h"

UCLASS(Blueprintable)
class UPCGCreatePointsSphereSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSphereGeneration SphereGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCoordinateSpace CoordinateSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSpherePointOrientation PointOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Origin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeodesicSubdivisions;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Theta;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Phi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatitudinalSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LongitudinalSegments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PoissonDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoissonMaxAttempts;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LatitudinalStartAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LatitudinalEndAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LongitudinalStartAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LongitudinalEndAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Jitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointSteepness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullPointsOutsideVolume;
    
    UPCGCreatePointsSphereSettings();

};

