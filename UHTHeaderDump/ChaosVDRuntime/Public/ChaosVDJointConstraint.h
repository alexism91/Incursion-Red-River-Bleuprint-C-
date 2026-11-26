#pragma once
#include "CoreMinimal.h"
#include "ChaosVDConstraintDataWrapperBase.h"
#include "ChaosVDGTJointStateDataWrapper.h"
#include "ChaosVDJointSettingsDataWrapper.h"
#include "ChaosVDJointStateDataWrapper.h"
#include "ChaosVDJointConstraint.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDJointConstraint : public FChaosVDConstraintDataWrapperBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstraintIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDJointStateDataWrapper PhysicsThreadJointState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDGTJointStateDataWrapper GameThreadJointState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDJointSettingsDataWrapper JointSettings;
    
    CHAOSVDRUNTIME_API FChaosVDJointConstraint();
};

