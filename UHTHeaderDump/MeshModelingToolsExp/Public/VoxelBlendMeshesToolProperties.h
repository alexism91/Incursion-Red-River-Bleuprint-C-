#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EVoxelBlendOperation.h"
#include "VoxelBlendMeshesToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendPower;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BlendFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelBlendOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoxWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveInternalsAfterVoxWrap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ThickenShells;
    
    UVoxelBlendMeshesToolProperties();

};

