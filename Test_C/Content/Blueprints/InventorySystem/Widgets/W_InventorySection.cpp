class UW_InventorySection_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventorySection.W_InventorySection_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventorySection.W_InventorySection_C:ExecuteUbergraph_W_InventorySection'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Font Preset"), FGuid(0x3168DB25, 0x407E11DE, 0x06FFC5AC, 0x49F54F00) }, 
        { FName("Folded"), FGuid(0x9F31D230, 0x4FC033A0, 0xFF5DB2AD, 0x11619E65) }, 
        { FName("OnFoldPressed"), FGuid(0x2727AC48, 0x44558B78, 0x6E5ED8A6, 0x939B141F) }, 
        { FName("SectionName"), FGuid(0xB816B5CD, 0x4BB453E1, 0xE57E568B, 0xE189E334) }, 
        { FName("SectionNameText"), FGuid(0x0529DBF3, 0x1DFB385B, 0xA300783D, 0xBBF796FE) }, 
        { FName("W_IRR_Line"), FGuid(0xE34D0DE7, 0xE4DD3FD9, 0xAA74408F, 0xA9568C52) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName SectionName = FName("SectionName");
     OnFoldPressed = ;
    struct FDataTableRowHandle Font Preset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("SectionHeader")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Line_C* W_IRR_Line;
    class UIRRTextBlock* SectionNameText;
    bool Folded;

};