class AGM_HideoutGamemode_C : public AGameMode
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/Hideout/GM_HideoutGamemode.GM_HideoutGamemode_C:SimpleConstructionScript_1'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Hideout/GM_HideoutGamemode.GM_HideoutGamemode_C:ExecuteUbergraph_GM_HideoutGamemode'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRInboxItem IRRInbox Item = {
        "Title": "",
        "Author": FSoftObjectPath(""),
        "Briefing": {
            "Text": {},
            "BriefingAudioEvent": nullptr,
            "Priority": 0,
            "bCanSkip": true,
            "bInterruptedByDanger": true,
            "Subtitles": {}
        },
        "Timestamp": FDateTime("lundi 1 janvier 0001 00:00:00"),
        "UID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "bOpened": false,
        "RewardItems": {},
        "XPReward": 0,
        "FactionRewards": {},
        "bRewardClaimed": false,
        "LinkURL": "",
        "bNews": false
    };
    bool bDelayedStart = true;
    class UBlueprintGeneratedClass* GameStateClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/Hideout/GS_HideoutGamestate.GS_HideoutGamestate_C'";
    class UBlueprintGeneratedClass* PlayerControllerClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/Hideout/BP_HideoutPlayerController.BP_HideoutPlayerController_C'";
    class UBlueprintGeneratedClass* HUDClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/Hideout/HUD_Hideout.HUD_Hideout_C'";
    class UBlueprintGeneratedClass* DefaultPawnClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C'";
    bool bStartPlayersAsSpectators = true;
    class USceneComponent* DefaultSceneRoot;

};