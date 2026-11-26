#pragma once
#include "CoreMinimal.h"
#include "ESubmixSendStage.h"
#include "SoundSubmixSendInfoBase.h"
#include "SoundSubmixSendInfo.generated.h"

USTRUCT(BlueprintType)
struct FSoundSubmixSendInfo : public FSoundSubmixSendInfoBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubmixSendStage SendStage;
    
    ENGINE_API FSoundSubmixSendInfo();
};

