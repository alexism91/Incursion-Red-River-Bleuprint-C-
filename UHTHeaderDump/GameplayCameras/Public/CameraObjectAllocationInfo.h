#pragma once
#include "CoreMinimal.h"
#include "CameraContextDataTableAllocationInfo.h"
#include "CameraNodeEvaluatorAllocationInfo.h"
#include "CameraVariableTableAllocationInfo.h"
#include "CameraObjectAllocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraObjectAllocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraNodeEvaluatorAllocationInfo EvaluatorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableTableAllocationInfo VariableTableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraContextDataTableAllocationInfo ContextDataTableInfo;
    
    GAMEPLAYCAMERAS_API FCameraObjectAllocationInfo();
};

