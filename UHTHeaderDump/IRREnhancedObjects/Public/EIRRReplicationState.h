#pragma once
#include "CoreMinimal.h"
#include "EIRRReplicationState.generated.h"

UENUM(BlueprintType)
enum EIRRReplicationState {
    Replicates,
    DoNotReplicate,
};

