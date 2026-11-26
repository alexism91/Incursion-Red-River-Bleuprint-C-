#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=Odin -ObjectName=EOdinAudioEvents -FallbackName=EOdinAudioEvents
//CROSS-MODULE INCLUDE V2: -ModuleName=Odin -ObjectName=OdinError -FallbackName=OdinError
//CROSS-MODULE INCLUDE V2: -ModuleName=Odin -ObjectName=OdinJoined -FallbackName=OdinJoined
//CROSS-MODULE INCLUDE V2: -ModuleName=Odin -ObjectName=OdinPeerJoined -FallbackName=OdinPeerJoined
//CROSS-MODULE INCLUDE V2: -ModuleName=Odin -ObjectName=OdinPeerLeft -FallbackName=OdinPeerLeft
//CROSS-MODULE INCLUDE V2: -ModuleName=Odin -ObjectName=OdinRoomStatusChanged -FallbackName=OdinRoomStatusChanged
#include "EIRRVoiceChatState.h"
#include "IRRVoiceOutputDeviceInfo.h"
#include "IRRVoicePeerState.h"
#include "IRRVoiceUserSettings.h"
#include "OnIRRVoiceChatConnectionChangedDelegate.h"
#include "OnIRRVoiceChatTalkingChangedDelegate.h"
#include "IRRVoiceChatSubsystem.generated.h"

class APlayerState;
class UIRRVoiceLevelMeterEffect;
class UOdinAudioCapture;
class UOdinDecoder;
class UOdinEncoder;
class UOdinMuteEffect;
class UOdinPipeline;
class UOdinRoom;

UCLASS(Blueprintable)
class TEST_C_API UIRRVoiceChatSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIRRVoiceChatTalkingChanged OnPlayerTalkingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIRRVoiceChatConnectionChanged OnConnectionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinRoom* room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinAudioCapture* AudioCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinEncoder* encoder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRVoiceLevelMeterEffect* MicLevelMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinMuteEffect* MuteEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRVoicePeerState> Peers;
    
public:
    UIRRVoiceChatSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldConnectToVoiceChat() const;
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceIsolation(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceActivityDetection(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalkHeld(bool bHeld);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalkEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetNoiseSuppression(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetInputSensitivityDb(float Db);
    
    UFUNCTION(BlueprintCallable)
    void SetHighPassFilter(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEchoCancellation(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoGainControl(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SelectOutputDevice(int64 WwiseDeviceId, const FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    void SelectInputDevice(const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    void RequestDisconnect();
    
    UFUNCTION(BlueprintCallable)
    void RequestConnect();
    
    UFUNCTION(BlueprintCallable)
    void RefreshOutputDevices();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoiceIsolationSupported() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSharedCapture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransmitting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPushToTalkHeld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPushToTalkEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTalkingByUserId(const FString& UserId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerTalking(const APlayerState* Player) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerTalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCaptureRunning() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleRoomStatusChanged(UOdinRoom* InRoom, FOdinRoomStatusChanged Data);
    
    UFUNCTION(BlueprintCallable)
    void HandleRoomJoined(UOdinRoom* InRoom, FOdinJoined Data);
    
    UFUNCTION(BlueprintCallable)
    void HandleRoomError(UOdinRoom* InRoom, FOdinError Data);
    
    UFUNCTION(BlueprintCallable)
    void HandlePeerLeft(UOdinRoom* InRoom, FOdinPeerLeft Data);
    
    UFUNCTION(BlueprintCallable)
    void HandlePeerJoined(UOdinRoom* InRoom, FOdinPeerJoined Data);
    
    UFUNCTION(BlueprintCallable)
    void HandleEncoderAudioEvent(UOdinEncoder* InEncoder, EOdinAudioEvents Filter);
    
    UFUNCTION(BlueprintCallable)
    void HandleDecoderAudioEvent(UOdinDecoder* InDecoder, EOdinAudioEvents Filter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceIsolation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVoiceClientSerial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoiceActivityDetection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRVoiceUserSettings GetUserSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APlayerState*> GetTalkingPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStatusText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPushToTalkFallbackKey() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPeerCount() const;
    
    UFUNCTION(BlueprintPure)
    int64 GetOwnPeerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRVoiceOutputDeviceInfo> GetOutputDevices() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNoiseSuppression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLocalVoiceUserId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocalMicLevelDb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputSensitivityDb() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInProcessVoiceClientCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHighPassFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEchoCancellation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentRoomId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRVoiceChatState GetConnectionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetConnectDebugLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoundPeerCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoGainControl() const;
    
};

