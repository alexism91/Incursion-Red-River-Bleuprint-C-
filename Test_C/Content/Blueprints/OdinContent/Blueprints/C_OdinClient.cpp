class UC_OdinClient_C : public UActorComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/OdinContent/Blueprints/C_OdinClient.C_OdinClient_C:ExecuteUbergraph_C_OdinClient'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FString AccessKey = "AX90sJbnsG8Y/5RizI9CUhMArwxGDViyaaSq6RXcoikZ";
    struct FGuid Own Guid = FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000);
    struct FTimerHandle Timer = {
        "Handle": 0
    };
     OnPlayerSpeak = ;
    class UOdinRoom* OdinRoom;
    TMap<int64, class UAdvancedAkAudioInputComponent*>* IdToSynth;
    class UOdinAudioCapture* AudioCapture;
    class UOdinJsonObject* UserData;
    TMap<int, struct FGuid> PeerIdToPlayerId;
    class UObject* CaptureStream;
    bool IsVoiceActive;
    FString GeneratedToke;
    bool Enabled?;
    class UOdinEncoder* Encoder;
    class UOdinMuteEffect* MuteEffect;
    int Apm Effect Id;

};