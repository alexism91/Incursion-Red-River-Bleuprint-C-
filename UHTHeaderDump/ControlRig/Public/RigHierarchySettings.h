#pragma once
#include "CoreMinimal.h"
#include "EElementNameDisplayMode.h"
#include "RigHierarchySettings.generated.h"

USTRUCT(BlueprintType)
struct FRigHierarchySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EElementNameDisplayMode ElementNameDisplayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProceduralElementLimit;
    
    CONTROLRIG_API FRigHierarchySettings();
};

