#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPatternToolAxisSpacingMode.h"
#include "PatternTool_RadialSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPatternTool_RadialSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatternToolAxisSpacingMode SpacingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StepSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StartAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EndAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AngleShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOriented;
    
    UPatternTool_RadialSettings();

};

