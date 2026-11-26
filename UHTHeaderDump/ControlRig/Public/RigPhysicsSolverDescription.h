#pragma once
#include "CoreMinimal.h"
#include "RigPhysicsSolverID.h"
#include "RigPhysicsSolverDescription.generated.h"

USTRUCT(BlueprintType)
struct FRigPhysicsSolverDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPhysicsSolverID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    CONTROLRIG_API FRigPhysicsSolverDescription();
};

