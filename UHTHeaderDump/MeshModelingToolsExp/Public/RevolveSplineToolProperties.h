#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshModelingTools -ObjectName=ERevolvePropertiesCapFillMode -FallbackName=ERevolvePropertiesCapFillMode
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshModelingTools -ObjectName=RevolveProperties -FallbackName=RevolveProperties
#include "ERevolveSplineSampleMode.h"
#include "RevolveSplineToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URevolveSplineToolProperties : public URevolveProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERevolveSplineSampleMode SampleMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ErrorTolerance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxSampleDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERevolvePropertiesCapFillMode CapFillMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClosePathToAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AxisOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AxisOrientation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetAxisOnStart;
    
    URevolveSplineToolProperties();

};

