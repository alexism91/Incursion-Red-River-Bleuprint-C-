#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EOdinAudioEvents.h"
#include "OdinChannelMask.h"
#include "OdinPosition.h"
#include "OdinDecoder.generated.h"

class UOdinDecoder;
class UOdinHandle;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinDecoder : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdinDecoderAudioEventCallbackDelegate, UOdinDecoder*, decoder, EOdinAudioEvents, Filter);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinDecoderAudioEventCallbackDelegate OnAudioEventCallbackBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinChannelMask ChannelMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStereo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinHandle* Handle;
    
public:
    UOdinDecoder();

    UFUNCTION(BlueprintCallable)
    UOdinDecoder* SetupInternalDecoder(int32 DecoderSampleRate, bool bUseStereo);
    
    UFUNCTION(BlueprintCallable)
    bool SetAudioEventHandler(int32 EFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Push(const TArray<uint8>& datagram) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Pop(TArray<float>& Samples, bool& bSilence) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOdinPosition> GetPositions(FOdinChannelMask NewChannelMask) const;
    
    UFUNCTION(BlueprintCallable)
    UOdinPipeline* GetOrCreatePipeline();
    
    UFUNCTION(BlueprintCallable)
    static UOdinPipeline* GetOrCreateDecoderPipeline(UOdinDecoder* decoder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSilent() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetActiveChannelMask() const;
    
    UFUNCTION(BlueprintCallable)
    static bool FreeDecoder(UOdinDecoder* decoder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinDecoder* ConstructDecoder(UObject* WorldContextObject, int32 NewSampleRate, bool bUseStereo);
    
};

