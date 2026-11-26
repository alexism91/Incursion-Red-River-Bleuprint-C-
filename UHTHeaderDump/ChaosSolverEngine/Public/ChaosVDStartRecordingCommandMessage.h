#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ChaosVDRuntime -ObjectName=EChaosVDRecordingMode -FallbackName=EChaosVDRecordingMode
#include "ChaosVDStartRecordingCommandMessage.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDStartRecordingCommandMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChaosVDRecordingMode RecordingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Target;
    
    CHAOSSOLVERENGINE_API FChaosVDStartRecordingCommandMessage();
};

