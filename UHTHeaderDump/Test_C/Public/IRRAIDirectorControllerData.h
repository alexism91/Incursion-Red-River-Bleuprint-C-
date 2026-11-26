#pragma once
#include "CoreMinimal.h"
#include "IRRAIDirectorControllerData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIRRAIDirectorControllerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToClosestPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveAITargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivePlayerTargets;
    
    TEST_C_API FIRRAIDirectorControllerData();
};

