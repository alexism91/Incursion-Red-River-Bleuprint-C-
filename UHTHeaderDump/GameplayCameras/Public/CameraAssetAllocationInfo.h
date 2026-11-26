#pragma once
#include "CoreMinimal.h"
#include "CameraContextDataTableAllocationInfo.h"
#include "CameraVariableTableAllocationInfo.h"
#include "CameraAssetAllocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraAssetAllocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableTableAllocationInfo VariableTableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraContextDataTableAllocationInfo ContextDataTableInfo;
    
    GAMEPLAYCAMERAS_API FCameraAssetAllocationInfo();
};

