#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GeometryScriptRenderCaptureCamera.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptRenderCaptureCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Resolution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FieldOfViewDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NearPlaneDist;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptRenderCaptureCamera();
};

