#pragma once
#include "CoreMinimal.h"
#include "ChaosVDKinematicTarget.h"
#include "ChaosVDParticleBounds.h"
#include "ChaosVDParticleCluster.h"
#include "ChaosVDParticleDynamicMisc.h"
#include "ChaosVDParticleDynamics.h"
#include "ChaosVDParticleMassProps.h"
#include "ChaosVDParticlePositionRotation.h"
#include "ChaosVDParticleVelocities.h"
#include "ChaosVDShapeCollisionData.h"
#include "ChaosVDVSmooth.h"
#include "ChaosVDWrapperDataBase.h"
#include "EChaosVDParticleContext.h"
#include "EChaosVDParticleType.h"
#include "ChaosVDParticleDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDParticleDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DirtyFlagsBits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDParticleContext ParticleContext;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GeometryHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParticleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SolverId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDParticleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDParticlePositionRotation ParticlePositionRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDParticleVelocities ParticleVelocities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDParticleBounds ParticleInflatedBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDKinematicTarget ParticleKinematicTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDVSmooth ParticleVWSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDParticleDynamics ParticleDynamics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDParticleDynamicMisc ParticleDynamicsMisc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDParticleMassProps ParticleMassProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosVDParticleCluster ParticleCluster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosVDShapeCollisionData> CollisionDataPerShape;
    
    CHAOSVDRUNTIME_API FChaosVDParticleDataWrapper();
};

