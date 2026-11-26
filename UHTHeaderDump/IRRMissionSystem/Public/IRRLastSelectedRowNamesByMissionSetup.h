#pragma once
#include "CoreMinimal.h"
#include "IRRLastSelectedRowNamesByMissionSetup.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FIRRLastSelectedRowNamesByMissionSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LastMissionRowNames;
    
    IRRMISSIONSYSTEM_API FIRRLastSelectedRowNamesByMissionSetup();
};

