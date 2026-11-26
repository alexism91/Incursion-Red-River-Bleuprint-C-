#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EBakeCurvatureClampMode.h"
#include "EBakeCurvatureColorMode.h"
#include "EBakeCurvatureTypeMode.h"
#include "BakeCurvatureMapToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeCurvatureTypeMode CurvatureType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeCurvatureColorMode ColorMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorRangeMultiplier;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRangeMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBakeCurvatureClampMode Clamping;
    
    UBakeCurvatureMapToolProperties();

};

