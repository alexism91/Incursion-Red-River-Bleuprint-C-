#pragma once
#include "CoreMinimal.h"
#include "CameraVariableDefinition.h"
#include "CameraVariableTableAllocationInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraVariableTableAllocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraVariableDefinition> VariableDefinitions;
    
    GAMEPLAYCAMERAS_API FCameraVariableTableAllocationInfo();
};

