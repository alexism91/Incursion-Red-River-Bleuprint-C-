#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SensorLocationTestBase.h"
#include "FrustumTest.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API UFrustumTest : public USensorLocationTestBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOVAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FarPlaneDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScoreDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScoreScreenDistance;
    
    UFrustumTest();

    UFUNCTION(BlueprintCallable)
    void SetFrustumSelectionRectangleParam(FVector2D Point1, FVector2D Point2, FVector2D ViewportSize, float FOV, float FarDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetFrustumParam(float FieldOfView, float Aspect_Ratio, float FarDistancePlane);
    
};

