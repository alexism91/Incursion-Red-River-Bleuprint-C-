#pragma once
#include "CoreMinimal.h"
#include "ControlRigReplayVariable.h"
#include "RigPose.h"
#include "ControlRigTestDataFrame.generated.h"

USTRUCT(BlueprintType)
struct FControlRigTestDataFrame {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AbsoluteTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FControlRigReplayVariable> Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> MetaData;
    
    CONTROLRIG_API FControlRigTestDataFrame();
};

