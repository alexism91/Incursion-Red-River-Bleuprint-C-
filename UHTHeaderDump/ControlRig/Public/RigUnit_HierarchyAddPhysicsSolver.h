#pragma once
#include "CoreMinimal.h"
#include "RigPhysicsSolverID.h"
#include "RigUnit_DynamicHierarchyBaseMutable.h"
#include "RigUnit_HierarchyAddPhysicsSolver.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddPhysicsSolver : public FRigUnit_DynamicHierarchyBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPhysicsSolverID Solver;
    
    CONTROLRIG_API FRigUnit_HierarchyAddPhysicsSolver();
};

