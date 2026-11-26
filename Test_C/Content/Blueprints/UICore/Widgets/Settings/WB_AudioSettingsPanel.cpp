class UWB_AudioSettingsPanel_C : public UIRRBaseSettingPageWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_AudioSettingsPanel.WB_AudioSettingsPanel_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_AudioSettingsPanel.WB_AudioSettingsPanel_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_AudioSettingsPanel.WB_AudioSettingsPanel_C:ExecuteUbergraph_WB_AudioSettingsPanel'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Voip Radio Effect Distance"), FGuid(0x34309C65, 0x4FA9161A, 0xFFA2E0AB, 0x28385C11) }, 
        { FName("Voip Radio Effect Scale"), FGuid(0x67C9F29E, 0x40BFEB73, 0x27A6F4A1, 0xF14D3F01) }, 
        { FName("Voip Occlusion Impact"), FGuid(0xD0402773, 0x4E4F0D55, 0xBE6C65A1, 0xE8AF3D1D) }, 
        { FName("Voip Distance Scaling"), FGuid(0xD96F394C, 0x420195DB, 0x9460BD85, 0xF6C7A7D7) }, 
        { FName("Voip Volume"), FGuid(0x38C2FBC5, 0x4699E30B, 0x551B8FB4, 0x002CE02E) }, 
        { FName("VoiceVolumeValue"), FGuid(0xB541D2F6, 0x474F420A, 0x2553C98E, 0x4D24B67A) }, 
        { FName("AmbienceVolumeValue"), FGuid(0xDDDE308C, 0x469E92BC, 0x180F19A8, 0x61CD944D) }, 
        { FName("ReverbVolumeValue"), FGuid(0x7185F51A, 0x44586650, 0x601DAB8D, 0x2B729FD3) }, 
        { FName("GunsVolumeValue"), FGuid(0x3E4FD8EE, 0x4C1AA288, 0x376611A5, 0xE3A09327) }, 
        { FName("FootstepsVolumeValue"), FGuid(0xC229D08A, 0x480149DF, 0xCFD1BA94, 0xF12704C0) }, 
        { FName("DefaultAudioSettings"), FGuid(0x2D912ED5, 0x4781158F, 0x8B9EB0BB, 0xCD160A6F) }, 
        { FName("MasterVolumeEnabled"), FGuid(0x87005A1B, 0x4FE0B6E3, 0x9273AD92, 0x0BBCAC20) }, 
        { FName("MusicSoundsEnabled"), FGuid(0xF3B75688, 0x43DE40CF, 0xB235A488, 0x3063CA3E) }, 
        { FName("SFXSoundsEnabled"), FGuid(0xE678DB2D, 0x47E87631, 0x65EF58A4, 0x2EE95551) }, 
        { FName("UISoundsEnabled"), FGuid(0xC5BCD933, 0x438B6C95, 0x0E1E87B4, 0xA48D4EEF) }, 
        { FName("MasterVolumeValue"), FGuid(0xE22EBE97, 0x42DE1CF1, 0xE75DA29F, 0x529A6128) }, 
        { FName("MusicVolumeValue"), FGuid(0x84A387B0, 0x4A3AF405, 0xF0D696AC, 0xD08B4880) }, 
        { FName("SFXVolumeValue"), FGuid(0x731EDA3C, 0x4AC42467, 0xF237C78F, 0x655A3836) }, 
        { FName("UIVolumeValue"), FGuid(0xD4F6C536, 0x4C3BF455, 0x811A098B, 0x6544F3C6) }, 
        { FName("AIBarkVolume"), FGuid(0x46F921B5, 0xFF483C40, 0xADE24ABB, 0xC6B72D28) }, 
        { FName("AmbienceVolume"), FGuid(0x6927F878, 0x6D1534F7, 0x8B227849, 0xF0D38071) }, 
        { FName("Content"), FGuid(0x4B509BB8, 0x1FF137F0, 0x97E5098C, 0x95BA6F05) }, 
        { FName("FootstepsVolume"), FGuid(0x27E88790, 0xC4D43EC2, 0x90AE4343, 0x43FDCE0D) }, 
        { FName("GunsVolume"), FGuid(0xD2B08E94, 0x58653254, 0x87798FE3, 0x5A839331) }, 
        { FName("HeadphoneMode"), FGuid(0x7F4D9B0C, 0x4D651A4E, 0x3E8BCC8D, 0xB52CBEB3) }, 
        { FName("MasterVolume"), FGuid(0x11B9A16F, 0x65573C03, 0x98E96EBB, 0xEE0E2D1E) }, 
        { FName("MissionHandlerVolume"), FGuid(0xB6AF6731, 0x4EA84B75, 0x4860959B, 0xFC2BDF04) }, 
        { FName("MonoMode"), FGuid(0x2A4A0325, 0x4F038A6D, 0xF72A8D86, 0xD1B22051) }, 
        { FName("MusicInRaidVolume"), FGuid(0x62275918, 0x4620C980, 0x12A1DE80, 0x634139E8) }, 
        { FName("MusicVolume"), FGuid(0xE6B9E5EA, 0x4E683DB2, 0xA1FF3241, 0x8D84D5B3) }, 
        { FName("PushToTalk"), FGuid(0xFD6FA80B, 0x4DEB717A, 0xDF99FCAA, 0x4062162F) }, 
        { FName("ReverbEffectVolume"), FGuid(0x68A35E4B, 0xAFA73520, 0x8FCEE23D, 0x029F1E43) }, 
        { FName("SettingsList"), FGuid(0x729474C5, 0x765134FA, 0x87C65E5C, 0xC2CEC757) }, 
        { FName("SFXVolume"), FGuid(0xCE6045BD, 0x0D32348C, 0x8AA8600F, 0xC623F045) }, 
        { FName("UIVolume"), FGuid(0x5DC17B13, 0xE52135A5, 0xA4B6A80A, 0x8EE392A6) }, 
        { FName("VoipDistanceScaling"), FGuid(0x8EA10F65, 0x4E8F92C9, 0xC2C97D93, 0x755331EE) }, 
        { FName("VoipOcclusionImpact"), FGuid(0xEDBDCAD8, 0x40BA5B22, 0xD8E377BA, 0xE877FF0A) }, 
        { FName("VoipRadioEffectDistance"), FGuid(0x924BE23D, 0x424C8CD4, 0xAEB8C3B6, 0xACAA27C4) }, 
        { FName("VoipRadioEffectScale"), FGuid(0x433510BA, 0x4BB1F7A7, 0xFB90A8B5, 0xE499BBCA) }, 
        { FName("VoipVolume"), FGuid(0x99F940D1, 0x4A50EAB7, 0xC9887683, 0xFFE67FE2) }, 
        { FName("W_InventorySection"), FGuid(0x5D37FEEC, 0x45BEABD6, 0xDE244690, 0x644E17A9) }, 
        { FName("W_InventorySection_1"), FGuid(0x5889A108, 0x5F7E3E2A, 0xA5FC710F, 0x197BA64A) }, 
        { FName("WB_SettingInfo"), FGuid(0x195C753B, 0xCC683839, 0x8B546129, 0xAF4D6913) }, 
        { FName("WB_SingleSettingBar_8"), FGuid(0x43F3DDBC, 0xA74F378E, 0xA229B6A1, 0x76F8E2AB) }, 
        { FName("WB_SingleSettingBar_9"), FGuid(0xE3B76BD9, 0xE18D3A1F, 0x954B6FEE, 0x7E38F055) }, 
        { FName("WB_SingleSettingBar_11"), FGuid(0xA5CCD119, 0xFF973880, 0x9F5F5606, 0x5F88C8BF) }, 
        { FName("WB_SingleSettingBar_13"), FGuid(0x8FCDD481, 0x06973336, 0x8AEAA607, 0xE606BC95) }, 
        { FName("WeatherEffectsVolume"), FGuid(0x8FE56959, 0x45140026, 0x8D81A3BA, 0xEBAD85C0) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_AudioSave DefaultAudioSettings = {
        "SoundsEnabled_14_6692EBF4485102CB66A9F6ABC7A9CA45": true,
        "MasterVolume_4_A3883DDE4558E8F1B4D0C2855745531D": 100,
        "MusicEnabled_13_2F74861F4C9B13538EB6E69C849948AA": true,
        "MusicVolume_10_36D132D745A5B235457E5288C4579A4A": 100,
        "MusicInRaidVolume_60_B0B432EA43F01F73C4FEDAB58A1F830D": 100,
        "SoundEffectsEnabled_16_E2C74D6343606F6D2877A98F5C53CB44": true,
        "SoundEffectsVolume_17_FD7D152249C782ADCB9AA9912E9D3BED": 100,
        "UISoundsEnabled_19_1D7FC5034373196E13A155896215AF3A": true,
        "UserInterfaceVolume_22_03FA4EEA4023CE43E8DEC291E5B3FCE3": 100,
        "FootstepsVolume_30_A7205D2843C40024FA94D4BB3676439E": 100,
        "GunsVolume_31_F883FBFF459E4308F953AC8601EA20BB": 100,
        "AmbienceVolume_32_C74FF3AE4DAEF1670C1A74885A93CEFE": 100,
        "WeatherEffectsVolume_62_E700D47D4E3EA28290365DA2593296FB": 100,
        "AIBarkVolume_65_0DCDDC594F05D0E75A555CBC16D0F8B5": 100,
        "HandlerVolume_66_0A76B3F043828A5A2B614DBA579699E1": 100,
        "ReverbEffectVolume_35_6E5B9D1D4C4269A2EBF30695270B0AA3": 100,
        "PushToTalk_37_6B8C838B4053EB48A6C8A793D25C00A9": true,
        "MonoMode_42_1D638BC643FC58F7A1494EAF16B0FE7F": false,
        "HeadphoneMode_41_7E9DA70E4FCD3E7704EECD967B9AC82C": true,
        "VoipVolume_45_C215EC4F405B963BCED52DBF96FD6039": 100,
        "VoipDistanceScaling_54_5407B01E4182AE4DC62B65A915801A65": 100,
        "VoipOcclusionImpact_55_C2FCFB9048074788F0C7F18A0A70A44D": 100,
        "VoipRadioEffectScale_56_33FAC953407974C248A01E9155BE0778": 100,
        "VoipRadioEffectDistance_57_A7DC494845E36387D4933F89105D4DA6": 50
    };
    class UWidgetBlueprintGeneratedClass* DefaultRowClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SingleSettingBar.WB_SingleSettingBar_C'";
    class UWidgetBlueprintGeneratedClass* SectionHeaderClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventorySection.W_InventorySection_C'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SingleSettingBar_C* WeatherEffectsVolume;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_13;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_11;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_9;
    class UWB_SingleSettingBar_C* WB_SingleSettingBar_8;
    class UWB_SettingInfo_C* WB_SettingInfo;
    class UW_InventorySection_C* W_InventorySection_1;
    class UW_InventorySection_C* W_InventorySection;
    class UWB_SingleSettingBar_C* VoipVolume;
    class UWB_SingleSettingBar_C* VoipRadioEffectScale;
    class UWB_SingleSettingBar_C* VoipRadioEffectDistance;
    class UWB_SingleSettingBar_C* VoipOcclusionImpact;
    class UWB_SingleSettingBar_C* VoipDistanceScaling;
    class UWB_SingleSettingBar_C* UIVolume;
    class UWB_SingleSettingBar_C* SFXVolume;
    class UVerticalBox* SettingsList;
    class UWB_SingleSettingBar_C* ReverbEffectVolume;
    class UWB_SingleSettingBar_C* PushToTalk;
    class UWB_SingleSettingBar_C* MusicVolume;
    class UWB_SingleSettingBar_C* MusicInRaidVolume;
    class UWB_SingleSettingBar_C* MonoMode;
    class UWB_SingleSettingBar_C* MissionHandlerVolume;
    class UWB_SingleSettingBar_C* MasterVolume;
    class UWB_SingleSettingBar_C* HeadphoneMode;
    class UWB_SingleSettingBar_C* GunsVolume;
    class UWB_SingleSettingBar_C* FootstepsVolume;
    class UVerticalBox* Content;
    class UWB_SingleSettingBar_C* AmbienceVolume;
    class UWB_SingleSettingBar_C* AIBarkVolume;
    double UIVolumeValue;
    double SFXVolumeValue;
    double MusicVolumeValue;
    double MasterVolumeValue;
    bool UISoundsEnabled;
    bool SFXSoundsEnabled;
    bool MusicSoundsEnabled;
    bool MasterVolumeEnabled;
    double FootstepsVolumeValue;
    double GunsVolumeValue;
    double ReverbVolumeValue;
    double AmbienceVolumeValue;
    double VoiceVolumeValue;
    double Voip Volume;
    double Voip Distance Scaling;
    double Voip Occlusion Impact;
    double Voip Radio Effect Scale;
    double Voip Radio Effect Distance;

};