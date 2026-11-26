class AGM_InGameGamemode_C : public AGameMode
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/InGame/GM_InGameGamemode.GM_InGameGamemode_C:SimpleConstructionScript_1'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/InGame/GM_InGameGamemode.GM_InGameGamemode_C:ExecuteUbergraph_GM_InGameGamemode'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bDelayedStart = true;
    class UBlueprintGeneratedClass* GameStateClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/InGame/GS_InGameGamestate.GS_InGameGamestate_C'";
    class UBlueprintGeneratedClass* PlayerControllerClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/InGame/BP_InGamePlayerController.BP_InGamePlayerController_C'";
    class UBlueprintGeneratedClass* PlayerStateClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/InGame/BP_IRRPlayerState.BP_IRRPlayerState_C'";
    class UBlueprintGeneratedClass* HUDClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/InGame/HUD_InGame.HUD_InGame_C'";
    class UBlueprintGeneratedClass* DefaultPawnClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/BP_IRR_PlayerCharacter.BP_IRR_PlayerCharacter_C'";
    bool bStartPlayersAsSpectators = true;
    class USceneComponent* DefaultSceneRoot;
    TArray<class APlayerController*> Players;
    int PlayerCount;

};