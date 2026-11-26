#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigPhysicsSolverID.h"
#include "RigUnit_HierarchyAddElement.h"
#include "RigUnit_HierarchyAddPhysicsJoint.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HierarchyAddPhysicsJoint : public FRigUnit_HierarchyAddElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigPhysicsSolverID Solver;
    
    CONTROLRIG_API FRigUnit_HierarchyAddPhysicsJoint();
};

