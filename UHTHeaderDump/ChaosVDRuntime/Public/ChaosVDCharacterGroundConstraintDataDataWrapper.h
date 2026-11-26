#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDCharacterGroundConstraintDataDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDCharacterGroundConstraintDataDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GroundNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetDeltaPosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TargetDeltaFacing;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GroundDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CosMaxWalkableSlopeAngle;
    
    CHAOSVDRUNTIME_API FChaosVDCharacterGroundConstraintDataDataWrapper();
};

