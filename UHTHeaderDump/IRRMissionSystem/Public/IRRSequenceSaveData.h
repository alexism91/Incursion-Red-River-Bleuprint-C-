#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EIRRSequenceState.h"
#include "IRRObjectiveSaveData.h"
#include "IRRSequenceSaveData.generated.h"

USTRUCT(BlueprintType)
struct FIRRSequenceSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRSequenceState SequenceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRObjectiveSaveData> Objectives;
    
    IRRMISSIONSYSTEM_API FIRRSequenceSaveData();
};

