#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "VoxelProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoxelProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoxelCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSimplify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveInternalSurfaces;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SimplifyMaxErrorFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CubeRootMinComponentVolume;
    
    UVoxelProperties();

};

