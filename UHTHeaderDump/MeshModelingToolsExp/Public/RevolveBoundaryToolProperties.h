#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshModelingTools -ObjectName=ERevolvePropertiesCapFillMode -FallbackName=ERevolvePropertiesCapFillMode
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshModelingTools -ObjectName=RevolveProperties -FallbackName=RevolveProperties
#include "RevolveBoundaryToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URevolveBoundaryToolProperties : public URevolveProperties {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERevolvePropertiesCapFillMode CapFillMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayInputMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AxisOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AxisOrientation;
    
    URevolveBoundaryToolProperties();

};

