class UW_IRR_HideoutUpgrade_MinMaxText_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_MinMaxText.W_IRR_HideoutUpgrade_MinMaxText_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_MinMaxText.W_IRR_HideoutUpgrade_MinMaxText_C:ExecuteUbergraph_W_IRR_HideoutUpgrade_MinMaxText'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ReachedFontPreset"), FGuid(0xA30EC6F0, 0x43D909D5, 0xFE45479E, 0x025EA79D) }, 
        { FName("MaxFontPreset"), FGuid(0x9446A676, 0x4EAB2B5D, 0x44E14198, 0xE0170D08) }, 
        { FName("MinFontPreset"), FGuid(0xDA9668F0, 0x43B3B5F1, 0x313EEFB2, 0xB5C616C3) }, 
        { FName("Max"), FGuid(0x8C43D2F6, 0x4EF9AF80, 0xC4E5CAB4, 0x9AA22BDF) }, 
        { FName("Min"), FGuid(0x014863A1, 0x4829B58B, 0x2207D788, 0x72F56B32) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle MinFontPreset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailExtra")
    };
    struct FDataTableRowHandle MaxFontPreset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailTitle")
    };
    struct FDataTableRowHandle ReachedFontPreset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("SmallTitle")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* Min;
    class UIRRTextBlock* Max;

};