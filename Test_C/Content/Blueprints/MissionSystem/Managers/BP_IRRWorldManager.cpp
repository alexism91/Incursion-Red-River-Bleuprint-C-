class UBP_IRRWorldManager_C : public UIRRWorldManager
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Managers/BP_IRRWorldManager.BP_IRRWorldManager_C:ExecuteUbergraph_BP_IRRWorldManager'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<class UIRRMapSetup*> MapSetupArray = {
        "IRRMapSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Maps/MD_Hideout.MD_Hideout'",
        "IRRMapSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Maps/MD_Lobby.MD_Lobby'",
        "IRRMapSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Maps/MD_Bunker.MD_Bunker'",
        "IRRMapSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Maps/MD_Quarry.MD_Quarry'",
        "IRRMapSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Maps/MD_Delta.MD_Delta'",
        "IRRMapSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Maps/MD_Outskirts.MD_Outskirts'"
    };
    class UIRRMapSetup* FallbackMapSetup = "IRRMapSetup'Test_C/Content/Blueprints/MissionSystem/DataAssets/Maps/Test/MD_TestHideout.MD_TestHideout'";

};