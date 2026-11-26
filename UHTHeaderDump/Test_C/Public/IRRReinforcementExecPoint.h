#pragma once
#include "CoreMinimal.h"
#include "IRRAISpawnPointV2.h"
#include "IRRReinforcementExecPoint.generated.h"

UCLASS(Blueprintable, NoExport, Transient)
class TEST_C_API AIRRReinforcementExecPoint : public AIRRAISpawnPointV2 {
    GENERATED_BODY()
public:
    AIRRReinforcementExecPoint(const FObjectInitializer& ObjectInitializer);

};

