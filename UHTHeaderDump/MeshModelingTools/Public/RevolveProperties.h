#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ERevolvePropertiesPolygroupMode.h"
#include "ERevolvePropertiesQuadSplit.h"
#include "RevolveProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URevolveProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RevolveDegreesClamped;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RevolveDegrees;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RevolveDegreesOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StepsMaxDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplicitSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumExplicitSteps;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HeightOffsetPerDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseRevolutionDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSharpNormals;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SharpNormalsDegreeThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPathAtMidpointOfStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERevolvePropertiesPolygroupMode PolygroupMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERevolvePropertiesQuadSplit QuadSplitMode;
    
    URevolveProperties();

};

