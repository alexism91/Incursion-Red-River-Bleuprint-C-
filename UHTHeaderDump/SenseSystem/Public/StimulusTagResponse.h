#pragma once
#include "CoreMinimal.h"
#include "BitFlag64_SenseSys.h"
#include "StimulusTagResponse.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SENSESYSTEM_API FStimulusTagResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBitFlag64_SenseSys BitChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Age;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReceiveStimulusFlag;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, uint64> TmpSensed;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, uint64> TmpLost;
    
    FStimulusTagResponse();
};

