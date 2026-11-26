class UW_IRR_RaidSummaryItem_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummaryItem.W_IRR_RaidSummaryItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummaryItem.W_IRR_RaidSummaryItem_C:ExecuteUbergraph_W_IRR_RaidSummaryItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ValueFontB"), FGuid(0x3A92FAC8, 0x48A27F4A, 0xABADEE97, 0x4BD9841E) }, 
        { FName("TitelFontB"), FGuid(0xFB46DE12, 0x48F0E7ED, 0x4261A596, 0x5B524315) }, 
        { FName("ValueFontA"), FGuid(0x57B30430, 0x432A533A, 0x71DA8195, 0xB7C504A6) }, 
        { FName("TitelFontA"), FGuid(0x35FACCB8, 0x4C2870EB, 0xC3D194AE, 0xAC621A5E) }, 
        { FName("ColorA?"), FGuid(0x41A113DB, 0x4F10FB9B, 0xF95679A6, 0x5FA7B76C) }, 
        { FName("Identifier"), FGuid(0xC6CF09F2, 0x4C627266, 0xE2913392, 0xDBFEA748) }, 
        { FName("Title"), FGuid(0xDC77DF4A, 0xB555364B, 0x9E313B66, 0x65643A47) }, 
        { FName("Value"), FGuid(0x0805FEC5, 0xDF4D3643, 0xBE216FA8, 0x3285FEBF) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Identifier = {
        "TagName": FName("None")
    };
    bool ColorA? = true;
    struct FDataTableRowHandle TitelFontA = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailTitle")
    };
    struct FDataTableRowHandle ValueFontA = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailTitle_Bold")
    };
    struct FDataTableRowHandle TitelFontB = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailExtra")
    };
    struct FDataTableRowHandle ValueFontB = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("ReadabilityDetailExtra_Bold")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* Value;
    class UIRRTextBlock* Title;

};