#pragma once
#include "CoreMinimal.h"
#include "ChaosVDFRigidParticleControlFlags.h"
#include "ChaosVDWrapperDataBase.h"
#include "EChaosVDObjectStateType.h"
#include "EChaosVDSleepType.h"
#include "ChaosVDParticleDynamicMisc.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDParticleDynamicMisc : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MLinearEtherDrag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MAngularEtherDrag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MMaxLinearSpeedSq;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MMaxAngularSpeedSq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MInitialOverlapDepenetrationVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSleepThresholdMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MCollisionGroup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDObjectStateType MObjectState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDSleepType MSleepType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MCollisionConstraintFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDFRigidParticleControlFlags MControlFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    CHAOSVDRUNTIME_API FChaosVDParticleDynamicMisc();
};

