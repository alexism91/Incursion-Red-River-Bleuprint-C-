#pragma once
#include "CoreMinimal.h"
#include "IRRSpawnSourceBase.h"
#include "Templates/SubclassOf.h"
#include "IRRAISpawnZone.generated.h"

class AAIController;
class AActor;
class AIRRAISpawnPoint;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRAISpawnZone : public AIRRSpawnSourceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> BotClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIController> ControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnHeightOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AIRRAISpawnPoint* ExecPoint;
    
public:
    AIRRAISpawnZone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnWave();
    
};

