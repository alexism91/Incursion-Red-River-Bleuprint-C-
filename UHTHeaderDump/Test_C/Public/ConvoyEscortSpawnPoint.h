#pragma once
#include "CoreMinimal.h"
#include "IRRAISpawnPointV2.h"
#include "ConvoyEscortSpawnPoint.generated.h"

UCLASS(Blueprintable, NoExport, Transient)
class TEST_C_API AConvoyEscortSpawnPoint : public AIRRAISpawnPointV2 {
    GENERATED_BODY()
public:
    AConvoyEscortSpawnPoint(const FObjectInitializer& ObjectInitializer);

};

