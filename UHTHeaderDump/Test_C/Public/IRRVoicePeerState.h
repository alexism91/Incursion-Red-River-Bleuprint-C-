#pragma once
#include "CoreMinimal.h"
#include "IRRVoicePeerState.generated.h"

class APlayerState;
class UAdvancedAkAudioInputComponent;
class UIRRVoiceChatSubsystem;
class UOdinDecoder;

USTRUCT(BlueprintType)
struct FIRRVoicePeerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinDecoder* decoder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAdvancedAkAudioInputComponent> VoiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIRRVoiceChatSubsystem> LoopbackSource;
    
    TEST_C_API FIRRVoicePeerState();
};

