class UWB_AISettings_NEW_C : public UIRRBaseSettingPageWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_AISettings_NEW.WB_AISettings_NEW_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_AISettings_NEW.WB_AISettings_NEW_C:ExecuteUbergraph_WB_AISettings_NEW'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Box-AimShoot"), FGuid(0xABA9CDB0, 0x4A408F06, 0x1127E1AB, 0xD9CE14D7) }, 
        { FName("Box-CustomDifficulty"), FGuid(0xFFA84F48, 0x4C0D27CA, 0xBDCC6899, 0xB4F313F8) }, 
        { FName("Box-DamageMulti"), FGuid(0x8C8B5C79, 0x4565FDC9, 0x798A27B6, 0xAA546B70) }, 
        { FName("Box-Difficulty"), FGuid(0x6503DB44, 0x4CB1E48F, 0x41C1B28E, 0x3AD2F920) }, 
        { FName("Box-General"), FGuid(0xB8E44A59, 0x477CD673, 0x58ADFCA0, 0x80772C24) }, 
        { FName("Box-OptimizationRanges"), FGuid(0xA72D994C, 0x4CD98FBD, 0xC301939C, 0x49D4A064) }, 
        { FName("Box-Search"), FGuid(0xEC51F9AB, 0x4CDDB459, 0xF5092081, 0x18B29EF7) }, 
        { FName("Box-Senses"), FGuid(0x7A6EA845, 0x4F331930, 0xC482FC9B, 0x28EFD820) }, 
        { FName("Box-SimSettings"), FGuid(0x0B623AFE, 0x455E2F39, 0xE9525D9C, 0xEB672D31) }, 
        { FName("Box-Vision"), FGuid(0x73F6A476, 0x40BB5352, 0xCB30DABB, 0xD696F7E0) }, 
        { FName("SettingsList"), FGuid(0x2B5A38C3, 0x641E3833, 0x9AC17B27, 0xBDBD6FED) }, 
        { FName("W_IRR_ScrollBox"), FGuid(0x836B78C7, 0x1FC13492, 0x91171F05, 0xE921D42E) }, 
        { FName("WB_SettingInfo"), FGuid(0x7B8F7D6D, 0x4ED54C88, 0x0F58EBA4, 0x386C7958) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UIRRSettingCollection* SettingCollection = "IRRSettingCollection'Test_C/Content/Blueprints/Settings/DA_Settings_AI.DA_Settings_AI'";
    class UWidgetBlueprintGeneratedClass* DefaultRowClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SingleSettingBar.WB_SingleSettingBar_C'";
    class UWidgetBlueprintGeneratedClass* SectionHeaderClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventorySection.W_InventorySection_C'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SettingInfo_C* WB_SettingInfo;
    class UW_IRR_ScrollBox_C* W_IRR_ScrollBox;
    class UVerticalBox* SettingsList;
    class UVerticalBox* Box-Vision;
    class UVerticalBox* Box-SimSettings;
    class UVerticalBox* Box-Senses;
    class UVerticalBox* Box-Search;
    class UVerticalBox* Box-OptimizationRanges;
    class UVerticalBox* Box-General;
    class UVerticalBox* Box-Difficulty;
    class UVerticalBox* Box-DamageMulti;
    class UVerticalBox* Box-CustomDifficulty;
    class UVerticalBox* Box-AimShoot;

};