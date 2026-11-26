#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "RigPhysicsSolverID.generated.h"

USTRUCT(BlueprintType)
struct FRigPhysicsSolverID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    CONTROLRIG_API FRigPhysicsSolverID();
};

