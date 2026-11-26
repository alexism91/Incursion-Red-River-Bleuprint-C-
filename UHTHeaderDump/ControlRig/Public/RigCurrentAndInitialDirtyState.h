#pragma once
#include "CoreMinimal.h"
#include "RigLocalAndGlobalDirtyState.h"
#include "RigCurrentAndInitialDirtyState.generated.h"

USTRUCT(BlueprintType)
struct FRigCurrentAndInitialDirtyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigLocalAndGlobalDirtyState Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigLocalAndGlobalDirtyState Initial;
    
    CONTROLRIG_API FRigCurrentAndInitialDirtyState();
};

