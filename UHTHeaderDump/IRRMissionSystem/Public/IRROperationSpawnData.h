#pragma once
#include "CoreMinimal.h"
#include "IRROperationSpawnData.generated.h"

class AIRRMissionSpawnPosition;

USTRUCT(BlueprintType)
struct IRRMISSIONSYSTEM_API FIRROperationSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OperationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AIRRMissionSpawnPosition>, float> OperationStartPoints;
    
    FIRROperationSpawnData();
};

