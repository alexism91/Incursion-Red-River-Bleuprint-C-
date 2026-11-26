#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EOccludedAction.h"
#include "EOcclusionCalculationUIMode.h"
#include "EOcclusionTriangleSamplingUIMode.h"
#include "RemoveOccludedTrianglesToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOcclusionCalculationUIMode OcclusionTestMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOcclusionTriangleSamplingUIMode TriangleSampling;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WindingIsoValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddRandomRays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddTriangleSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlySelfOcclude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShrinkRemoval;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinAreaIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTriCountIsland;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOccludedAction Action;
    
    URemoveOccludedTrianglesToolProperties();

};

