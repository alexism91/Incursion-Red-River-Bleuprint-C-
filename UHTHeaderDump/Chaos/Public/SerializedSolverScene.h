#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosVDRuntime -ObjectName=ChaosVDCharacterGroundConstraint -FallbackName=ChaosVDCharacterGroundConstraint
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosVDRuntime -ObjectName=ChaosVDJointConstraint -FallbackName=ChaosVDJointConstraint
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosVDRuntime -ObjectName=ChaosVDParticleDataWrapper -FallbackName=ChaosVDParticleDataWrapper
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosVDRuntime -ObjectName=ChaosVDParticlePairMidPhase -FallbackName=ChaosVDParticlePairMidPhase
#include "SerializedSolverScene.generated.h"

USTRUCT(BlueprintType)
struct FSerializedSolverScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosVDParticleDataWrapper> ParticleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosVDJointConstraint> JointConstraintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosVDCharacterGroundConstraint> CharacterGroundConstraintData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosVDParticlePairMidPhase> CollisionMidPhaseData;
    
    CHAOS_API FSerializedSolverScene();
};

