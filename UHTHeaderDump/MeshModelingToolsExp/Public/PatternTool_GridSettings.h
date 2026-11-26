#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EPatternToolAxisSpacingMode.h"
#include "PatternTool_GridSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPatternTool_GridSettings : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatternToolAxisSpacingMode SpacingX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StepSizeX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenteredX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatternToolAxisSpacingMode SpacingY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StepSizeY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtentY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenteredY;
    
    UPatternTool_GridSettings();

};

