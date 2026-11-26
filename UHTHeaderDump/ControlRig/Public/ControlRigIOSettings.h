#pragma once
#include "CoreMinimal.h"
#include "ControlRigIOSettings.generated.h"

USTRUCT(BlueprintType)
struct FControlRigIOSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdatePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateCurves;
    
    CONTROLRIG_API FControlRigIOSettings();
};

