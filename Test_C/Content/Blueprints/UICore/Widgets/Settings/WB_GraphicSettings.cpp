class UWB_GraphicSettings_C : public UIRRBaseSettingPageWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_GraphicSettings.WB_GraphicSettings_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_GraphicSettings.WB_GraphicSettings_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_GraphicSettings.WB_GraphicSettings_C:ExecuteUbergraph_WB_GraphicSettings'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("VisualFidelityQualityLevel"), FGuid(0x4946DA69, 0x452D6108, 0x0E306AA6, 0x812FBF9A) }, 
        { FName("CurrentVideoSettings"), FGuid(0x8C04C3D0, 0x42572B98, 0xF27DFD98, 0x036659DC) }, 
        { FName("OverallQualityLevel"), FGuid(0xF2DCE244, 0x4D9B5D10, 0xF0621FA5, 0xFC06CA2B) }, 
        { FName("ViewDistanceQualityLevel"), FGuid(0x5A5397A2, 0x4CF6AEAB, 0xFD7D3AAD, 0x492AC417) }, 
        { FName("VisualEffectsQualityLevel"), FGuid(0x5595B3B7, 0x446FBE85, 0x985AA38F, 0x2A0F0367) }, 
        { FName("ShadowQualityLevel"), FGuid(0x8D5F8CDB, 0x41976B23, 0x6814ABAE, 0x99F294CA) }, 
        { FName("FoliageQualityLevel"), FGuid(0x4ADDDD8A, 0x45DBFEC6, 0x2B100D9A, 0x32479030) }, 
        { FName("AAQualityLevel"), FGuid(0x6F454E1A, 0x4F9FA3DE, 0x4208738A, 0xE35E4AF6) }, 
        { FName("ShadingQualityLevel"), FGuid(0xFC0DF939, 0x4F1B5B1C, 0xA10C0F98, 0x46BE0FE4) }, 
        { FName("PPQualityLevel"), FGuid(0x013BF9CD, 0x414A211C, 0x05991D8D, 0xBB94001B) }, 
        { FName("TextureQualityLevel"), FGuid(0x1F11DC84, 0x4E48DB53, 0x6498A7BE, 0x19559B27) }, 
        { FName("ADSFOVSettings"), FGuid(0x2F74ECEE, 0xD9E036E3, 0xBAB9B893, 0x83669C6A) }, 
        { FName("antialiasing_Method"), FGuid(0x77C42809, 0xFB463A3E, 0x927A0392, 0xC4CAFE5E) }, 
        { FName("ColorVisionDeficiencyStrength"), FGuid(0x56279398, 0x4B3E6CAB, 0xB6B06184, 0xD5DE7A71) }, 
        { FName("ColorVisionDeficiencyType"), FGuid(0x737D3FEC, 0x4716FC34, 0xD583B09C, 0x90C6718C) }, 
        { FName("Contrast"), FGuid(0x1CB4650E, 0x4254EE8C, 0xA844BEBF, 0x6F106BC3) }, 
        { FName("FilterBox"), FGuid(0x7F955E2F, 0x211A3331, 0x80C7DF8B, 0xFDC9BD83) }, 
        { FName("Foliage"), FGuid(0x6C899D28, 0x4D1631CA, 0x84280275, 0x399C92AE) }, 
        { FName("FOV_Slider"), FGuid(0x9E2A2B90, 0xD2223EDA, 0x82E7A2C5, 0x39A28D41) }, 
        { FName("FPSLimit"), FGuid(0x4698713C, 0x778D3D40, 0xBFF01139, 0x1A848CDF) }, 
        { FName("FramGenType"), FGuid(0xEE9B2D33, 0x474B53CA, 0x13E1BFAC, 0x01F7BF0D) }, 
        { FName("Gamma"), FGuid(0x04889D08, 0x045B3F94, 0xADBFCCE5, 0x1BFD48BB) }, 
        { FName("Illumination"), FGuid(0xCA77D83D, 0x16443AE2, 0xBB292C19, 0x100BDF3D) }, 
        { FName("LumenScalibility"), FGuid(0xF5B48293, 0xF35A3CFE, 0xB1DBA565, 0x831E4272) }, 
        { FName("MotionBlur"), FGuid(0x64D27022, 0x753A3E44, 0x8451C9AB, 0x09180155) }, 
        { FName("NvidiaReflex"), FGuid(0x9B8ACF66, 0x4C661B31, 0xA2DE6594, 0x9EC71B67) }, 
        { FName("OverallQuality"), FGuid(0xF6228386, 0x7D2C31DD, 0x83219340, 0x76F5C220) }, 
        { FName("PostProcess"), FGuid(0xD4A976B0, 0x3868377B, 0x8DFD2ADF, 0xB8251A4A) }, 
        { FName("RayReconstruction"), FGuid(0x5710A06A, 0x6C303A3D, 0x9F8C1946, 0x8FBC45BC) }, 
        { FName("Resolution"), FGuid(0xD4D833EE, 0x43863743, 0x8C67B64E, 0xB0DB0CCD) }, 
        { FName("ResolutionScale"), FGuid(0x66FAE1A7, 0x6A443F48, 0x88F366CF, 0xCCC7076D) }, 
        { FName("Saturation"), FGuid(0x253684F8, 0xAF053885, 0x84FBA48F, 0xD0234E4C) }, 
        { FName("SettingsContainer_1"), FGuid(0x08B7029A, 0xDC133DE8, 0x859CD792, 0x669F1CDB) }, 
        { FName("SettingsContainer_2"), FGuid(0x166BDF30, 0xB550353E, 0x921CEBCA, 0x6317370A) }, 
        { FName("Shading"), FGuid(0x89BFF207, 0xE16F3F0B, 0x9048048D, 0x5E4C06D0) }, 
        { FName("Shadows"), FGuid(0x0F4881F1, 0xC35E333D, 0x844C08E1, 0x41D58BF2) }, 
        { FName("Sharpness"), FGuid(0x46415875, 0x1CC338FF, 0xBAA9158D, 0x1494050E) }, 
        { FName("TextureQuality"), FGuid(0xCD8B6194, 0x248C355F, 0x8B455C81, 0x9E6E092B) }, 
        { FName("UpscalingQuality"), FGuid(0x3AD3EDFA, 0x0734324F, 0x9386561C, 0xD40DB6DF) }, 
        { FName("ViewDistance"), FGuid(0x0AE107FC, 0x1D6D3064, 0xB8406AFB, 0x877C1A7E) }, 
        { FName("VisualEffects"), FGuid(0x518C2D73, 0xC1C83A8E, 0xBA0DFA5A, 0x258BD340) }, 
        { FName("VisualFidelity"), FGuid(0x65FABA69, 0x85BF31C9, 0x95102319, 0xF29D384D) }, 
        { FName("Vsync"), FGuid(0xBE94DE61, 0x3B8833EB, 0x8840544F, 0x1FB4E5C0) }, 
        { FName("W_InventorySection"), FGuid(0x2C03876A, 0x6E6C3E94, 0x9B8FBF8B, 0x885EFB18) }, 
        { FName("W_InventorySection_1"), FGuid(0x0B2B9810, 0x77A53FD4, 0xBC843042, 0x9C966B07) }, 
        { FName("W_InventorySection_2"), FGuid(0x8674062F, 0xA06C3BD0, 0x945AC483, 0xB4E18BF8) }, 
        { FName("W_InventorySection_3"), FGuid(0x55093CE9, 0x4D9236D1, 0x9F4A8231, 0x478B0AA4) }, 
        { FName("W_InventorySection_4"), FGuid(0x54BD4905, 0xEDAC37C1, 0xBC193970, 0xECA5EF5F) }, 
        { FName("W_InventorySection_5"), FGuid(0x7725BA4E, 0x496DC014, 0x9B1643A7, 0x791E81C2) }, 
        { FName("W_InventorySection_6"), FGuid(0xD0219E26, 0x38FE3F26, 0xA9E20E8F, 0x63D29A3B) }, 
        { FName("W_InventorySection_7"), FGuid(0x60443595, 0xF63B3800, 0x95EED0B5, 0x97ACDC9E) }, 
        { FName("W_IRR_HorizontalTabList"), FGuid(0x7BEF0C61, 0xAC6532BF, 0x9BE1A946, 0x18A76408) }, 
        { FName("WB_SettingInfo"), FGuid(0x9E42ED04, 0x47CC35A6, 0x9C5A7B1E, 0x8FF21077) }, 
        { FName("WidgetSwitcher_0"), FGuid(0xDF45CDF9, 0xF4C83668, 0x9006A9C1, 0xD0314E76) }, 
        { FName("WindowMode"), FGuid(0xEE60A1A2, 0x51233574, 0xBB475936, 0x24A22A6B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_VideoSave CurrentVideoSettings = {
        "MotionBlur_1_53A47823444B5F8C89C0E09232B28731": false,
        "Fullscreen_37_203FFF0E4CF4599D524C9CA892A7F59A": EWindowMode::Fullscreen,
        "Resolution_24_14BBD2C940DB5E2403C6B7876D027365": FName("1920x1080"),
        "VisualFideiltyQuality_66_3B7A09014FE06C18AEEB6896C8551340": 2,
        "AntiAliasingMethod_39_FE6AE93F4AB3C0A0EB92B0B4B3A5934F": Enum_AntiAliasingMethod::NewEnumerator2,
        "ScreenPercentage_25_3567E19246AA2DAF15EA37914D7055AA": 100,
        "UpscalingQuality_63_688676CD4760E57C1837F59FA687279C": 3,
        "RayReconstruction_77_4A5595B6483D793BA6028DAB0E5BB387": false,
        "MaxFPS_28_AD87DDEA4788A81104C1F787D03CFFD4": FName("60"),
        "Vsync_29_A5422A974A3090110B28CE82DAF96555": true,
        "FOV_36_1D0A14DD4DD611117F8E65A1C56AD2C9": 90,
        "GlobalIlluminationMethod_45_5E956F8F46424DEE74D27DAA805293B7": FName("DEFAULT"),
        "FrameGeneration_80_B3D20A0F4D3807851A4C2BBEB76B97BB": FName("OFF"),
        "NvidiaReflex_82_55DC47584D0EAEB9BCD24396AC1B35E8": FName("OFF"),
        "LumenScalability_57_7B280D2447D0D397CD4BAA8D60986ECE": FName("LOW"),
        "ColorVisionDeficiency_93_41F1AFD14EEBA203691F459D4082519A": FName("Standard"),
        "ColorVisionDeficiencyStrength_96_518ADDAB4BF9DF60C21E78854ED02E2C": 1,
        "Saturation_83_67136840405594AFBFBF90B5AD8BFF50": 1,
        "Gamma_4_C9EAC68848EB5D7D2B051595C3B0332C": 1,
        "Contrast_89_31918EAD4035E0602EADA481FC0A3C54": 1,
        "Sharpness_75_422306454C065875CDF61A8F3E6A36C8": 1
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SingleSettingBar_C* WindowMode;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UWB_SettingInfo_C* WB_SettingInfo;
    class UW_IRR_HorizontalTabList_C* W_IRR_HorizontalTabList;
    class UW_InventorySection_C* W_InventorySection_7;
    class UW_InventorySection_C* W_InventorySection_6;
    class UW_InventorySection_C* W_InventorySection_5;
    class UW_InventorySection_C* W_InventorySection_4;
    class UW_InventorySection_C* W_InventorySection_3;
    class UW_InventorySection_C* W_InventorySection_2;
    class UW_InventorySection_C* W_InventorySection_1;
    class UW_InventorySection_C* W_InventorySection;
    class UWB_SingleSettingBar_C* Vsync;
    class UWB_SingleSettingBar_C* VisualFidelity;
    class UWB_SingleSettingBar_C* VisualEffects;
    class UWB_SingleSettingBar_C* ViewDistance;
    class UWB_SingleSettingBar_C* UpscalingQuality;
    class UWB_SingleSettingBar_C* TextureQuality;
    class UWB_SingleSettingBar_C* Sharpness;
    class UWB_SingleSettingBar_C* Shadows;
    class UWB_SingleSettingBar_C* Shading;
    class UVerticalBox* SettingsContainer_2;
    class UVerticalBox* SettingsContainer_1;
    class UWB_SingleSettingBar_C* Saturation;
    class UWB_SingleSettingBar_C* ResolutionScale;
    class UWB_SingleSettingBar_C* Resolution;
    class UWB_SingleSettingBar_C* RayReconstruction;
    class UWB_SingleSettingBar_C* PostProcess;
    class UWB_SingleSettingBar_C* OverallQuality;
    class UWB_SingleSettingBar_C* NvidiaReflex;
    class UWB_SingleSettingBar_C* MotionBlur;
    class UWB_SingleSettingBar_C* LumenScalibility;
    class UWB_SingleSettingBar_C* Illumination;
    class UWB_SingleSettingBar_C* Gamma;
    class UWB_SingleSettingBar_C* FramGenType;
    class UWB_SingleSettingBar_C* FPSLimit;
    class UWB_SingleSettingBar_C* FOV_Slider;
    class UWB_SingleSettingBar_C* Foliage;
    class UVerticalBox* FilterBox;
    class UWB_SingleSettingBar_C* Contrast;
    class UWB_SingleSettingBar_C* ColorVisionDeficiencyType;
    class UWB_SingleSettingBar_C* ColorVisionDeficiencyStrength;
    class UWB_SingleSettingBar_C* antialiasing_Method;
    class UWB_SingleSettingBar_C* ADSFOVSettings;
    int TextureQualityLevel;
    int PPQualityLevel;
    int ShadingQualityLevel;
    int AAQualityLevel;
    int FoliageQualityLevel;
    int ShadowQualityLevel;
    int VisualEffectsQualityLevel;
    int ViewDistanceQualityLevel;
    int OverallQualityLevel;
    int VisualFidelityQualityLevel;

};