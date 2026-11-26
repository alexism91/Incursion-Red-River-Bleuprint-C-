#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ERecomputeUVsPropertiesIslandMode.h"
#include "ERecomputeUVsPropertiesLayoutType.h"
#include "ERecomputeUVsPropertiesUnwrapType.h"
#include "ERecomputeUVsToolOrientationMode.h"
#include "RecomputeUVsToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URecomputeUVsToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePolygroupSupport;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecomputeUVsPropertiesIslandMode IslandGeneration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecomputeUVsPropertiesUnwrapType UnwrapType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecomputeUVsToolOrientationMode AutoRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveIrregularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SmoothingSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothingAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MergingDistortionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MergingAngleThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERecomputeUVsPropertiesLayoutType LayoutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUDIMLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUDIMCVAREnabled;
    
    URecomputeUVsToolProperties();

};

