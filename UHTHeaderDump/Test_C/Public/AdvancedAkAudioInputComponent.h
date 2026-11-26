#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkAudioInputComponent -FallbackName=AkAudioInputComponent
#include "AdvancedAkAudioInputComponent.generated.h"

class UAkRtpc;
class UAudioGenerator;
class UOdinDecoder;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UAdvancedAkAudioInputComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinDecoder* PlaybackDecoder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Buffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* VoiceActivityRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStereo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioGenerator* LoopbackGenerator;
    
public:
    UAdvancedAkAudioInputComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnassignOdinDecoder();
    
    UFUNCTION(BlueprintCallable)
    void SetIsMuted(bool bNewIsMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMuted() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignOdinDecoder(UOdinDecoder* decoder);
    
    UFUNCTION(BlueprintCallable)
    void AssignLoopbackGenerator(UAudioGenerator* generator);
    
};

