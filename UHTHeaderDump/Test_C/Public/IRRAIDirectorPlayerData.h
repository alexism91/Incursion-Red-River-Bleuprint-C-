#pragma once
#include "CoreMinimal.h"
#include "IRRAIDirectorPlayerData.generated.h"

class AAIController;

USTRUCT(BlueprintType)
struct FIRRAIDirectorPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIController*> AwareBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIController*> AwareBotGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIController*> SearchingBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIController*> SearchingBotGroups;
    
    TEST_C_API FIRRAIDirectorPlayerData();
};

