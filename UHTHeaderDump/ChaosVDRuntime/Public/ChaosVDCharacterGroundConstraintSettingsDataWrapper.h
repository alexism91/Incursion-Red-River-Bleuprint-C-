#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDCharacterGroundConstraintSettingsDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCharacterGroundConstraintSettingsDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VerticalAxis;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TargetHeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RadialForceLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrictionForceLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TwistTorqueLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SwingTorqueLimit;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CosMaxWalkableSlopeAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DampingFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AssumedOnGroundHeight;
    
    CHAOSVDRUNTIME_API FChaosVDCharacterGroundConstraintSettingsDataWrapper();
};

