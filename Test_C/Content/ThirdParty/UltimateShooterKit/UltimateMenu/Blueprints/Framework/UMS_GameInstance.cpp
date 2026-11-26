class UUMS_GameInstance_C : public UGeneralGameInstance
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/Blueprints/Framework/UMS_GameInstance.UMS_GameInstance_C:ExecuteUbergraph_UMS_GameInstance'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double LoadingScreenDelay = 2;
    bool FirstInit = true;
    bool LevelLoaded = true;
    enum Enum_WidgetAnimType RequestedAnimType = Enum_WidgetAnimType::Enum_MAX;
    struct FBlueprintSessionResult ConnectedSession = {};
    FName MenuLevel = FName("LVL_Menu");
     OnVideoSettingsUpdated = ;
     OnAudioSettingsUpdated = ;
    FString Incoming Name = "None";
    struct FIRRPatchData PatchData = {
        "Build": "",
        "Date": FDateTime("lundi 1 janvier 0001 00:00:00"),
        "Title": "",
        "PatchNotes": "",
        "SteamAnnouncementURL": "",
        "bMajorUpdate": false,
        "bDeleteAllSaveGames": false,
        "bDeleteGameSettingsSaveGame": false,
        "bDeleteMissionSaveGame": false,
        "bDeleteWorldSaveGame": false,
        "bDeleteVendorSaveGame": false,
        "bDeleteStashSaveGame": false,
        "bDeleteInventorySaveGame": false,
        "bDeleteSafehouseSaveGame": false
    };
    bool Paused = true;
    struct FGameplayTag Interact Tag = {
        "TagName": FName("Character.Abilities.Allowed.Interact")
    };
    struct FGameplayTag Open Inventory Tag = {
        "TagName": FName("Character.Abilities.Active.Inventory Open")
    };
    TArray<class UIRRSettingCollection*> SettingCollections = {
        "IRRSettingCollection'Test_C/Content/Blueprints/Settings/DA_Settings_AI.DA_Settings_AI'"
    };
    float LoadingScreenFadeTime = 1;
    class UWB_MenuMaster_C* MasterWidget;
    bool LoadedPatch;
    bool ConstructFromMenu;
    Enum_MenuHandlerType CurrentMenuType;
    Enum_MenuHandlerType RequestedMenuType;
    class UBP_SettingsSaveGame_C* LoadedGame;
    FString CurrentSlotName;
    bool StartedFromMenu;
    bool AI_Debug?;
    bool EQS_Debug?;
    TArray<struct FIRRPatchData> PatchNotes;
    TMap<struct FGuid, class ACharacter*> Ids to Player Characters;
    class UAudioComponent* NewVar;

};