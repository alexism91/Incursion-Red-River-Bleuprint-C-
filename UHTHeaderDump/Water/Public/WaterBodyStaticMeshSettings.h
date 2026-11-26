#pragma once
#include "CoreMinimal.h"
#include "WaterBodyStaticMeshSettings.generated.h"

USTRUCT(BlueprintType)
struct FWaterBodyStaticMeshSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWaterBodyStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSectionWaterBodyStaticMesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double SectionSize;
    
    WATER_API FWaterBodyStaticMeshSettings();
};

