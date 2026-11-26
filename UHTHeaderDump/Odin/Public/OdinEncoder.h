#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOdinAudioEvents.h"
#include "OdinApmConfig.h"
#include "OdinChannelMask.h"
#include "OdinChannelPosition.h"
#include "OdinPosition.h"
#include "OdinEncoder.generated.h"

class UAudioGenerator;
class UOdinEncoder;
class UOdinHandle;
class UOdinPipeline;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinEncoder : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinEncoderAudioEventCallbackDelegate, UOdinEncoder*, encoder, EOdinAudioEvents, Filter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinEncoderAudioEventCallbackDelegate OnAudioEventCallbackBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioGenerator* AudioGenerator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PeerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStereo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinHandle* Handle;
    
public:
    UOdinEncoder();

    UFUNCTION(BlueprintCallable)
    bool SetPositions(const TArray<FOdinChannelPosition>& Positions);
    
    UFUNCTION(BlueprintCallable)
    bool SetPosition(FOdinChannelMask ChannelMask, FOdinPosition Position);
    
    UFUNCTION(BlueprintCallable)
    void SetEchoCancellationProcessingDelay(int32 DelayInMs);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioGenerator(UAudioGenerator* generator);
    
    UFUNCTION(BlueprintCallable)
    bool SetAudioEventHandler(int32 EFilter);
    
    UFUNCTION(BlueprintCallable)
    int32 Push(TArray<float> Samples);
    
    UFUNCTION(BlueprintCallable)
    int32 Pop(TArray<uint8>& datagram);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPipelineApmConfigChanged(UOdinPipeline* AffectedPipeline, int32 effectId, FOdinApmConfig NewApmConfig);
    
public:
    UFUNCTION(BlueprintCallable)
    UOdinPipeline* GetOrCreatePipeline();
    
    UFUNCTION(BlueprintCallable)
    static UOdinPipeline* GetOrCreateEncoderPipeline(UOdinEncoder* encoder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UOdinRoom*> GetLinkedRooms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSilent() const;
    
    UFUNCTION(BlueprintCallable)
    static bool FreeEncoder(UOdinEncoder* encoder);
    
    UFUNCTION(BlueprintCallable)
    UOdinEncoder* CreateEncoderEx(int64 InConnectedPeerId, int32 InSampleRate, bool bUseStereo, bool bApplication_VOIP, int32 bitrate_kbps, int32 Packet_Loss_Perc, int64 Update_Position_Interval_MS);
    
    UFUNCTION(BlueprintCallable)
    UOdinEncoder* CreateEncoder(int64 InPeerId, int32 InSampleRate, bool bUseStereo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinEncoder* ConstructEncoderEx(UObject* WorldContextObject, int64 NewPeerId, int32 NewSampleRate, bool NewBStereo, bool bApplication_VOIP, int32 bitrate_kbps, int32 Packet_Loss_Perc, int64 Update_Position_Interval_MS);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinEncoder* ConstructEncoder(UObject* WorldContextObject, int64 NewPeerId, int32 NewSampleRate, bool NewBStereo);
    
    UFUNCTION(BlueprintCallable)
    bool ClearPosition(FOdinChannelMask ChannelMask);
    
};

