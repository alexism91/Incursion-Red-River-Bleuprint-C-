#pragma once
#include "CoreMinimal.h"
#include "CameraContextDataDefinition.h"
#include "CameraContextDataTableAllocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraContextDataTableAllocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraContextDataDefinition> DataDefinitions;
    
    GAMEPLAYCAMERAS_API FCameraContextDataTableAllocationInfo();
};

