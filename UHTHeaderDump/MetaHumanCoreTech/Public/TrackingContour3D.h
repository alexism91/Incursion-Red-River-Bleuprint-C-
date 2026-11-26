#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3d -FallbackName=Vector3d
#include "TrackingContour3D.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCORETECH_API FTrackingContour3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector3d> DensePoints;
    
    FTrackingContour3D();
};

