#pragma once
#include "CoreMinimal.h"
#include "RigTransformDirtyState.h"
#include "RigLocalAndGlobalDirtyState.generated.h"

USTRUCT(BlueprintType)
struct FRigLocalAndGlobalDirtyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigTransformDirtyState Global;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigTransformDirtyState Local;
    
    CONTROLRIG_API FRigLocalAndGlobalDirtyState();
};

