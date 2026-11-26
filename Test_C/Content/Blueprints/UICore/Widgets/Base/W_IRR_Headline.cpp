class UW_IRR_Headline_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_Headline.W_IRR_Headline_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_Headline.W_IRR_Headline_C:ExecuteUbergraph_W_IRR_Headline'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("BorderTranslation"), FGuid(0xBDCD1A70, 0x4E944C28, 0xDF1E83B3, 0xE8C330FB) }, 
        { FName("Line Color"), FGuid(0x4C7C47E7, 0x465F5B50, 0xAB932681, 0xA03A5808) }, 
        { FName("Use Text Color"), FGuid(0xD81369CF, 0x4B9B8F15, 0x9CFD55BC, 0x170E132F) }, 
        { FName("Font Preset"), FGuid(0x77D4F5D9, 0x444A6D1B, 0x38835A90, 0x23C90D5A) }, 
        { FName("Text"), FGuid(0x86E5733C, 0x4189B45C, 0x9E6FA995, 0x7E0311B4) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText Text = FText("Headline");
    struct FDataTableRowHandle Font Preset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("MenuHeader")
    };
    bool Use Text Color = true;
    struct FLinearColor Line Color = FLinearColor(0, 0, 0, 0);
    struct FVector2D BorderTranslation = FVector2D(0, -18);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* Headline;
    class UHorizontalBox* BorderBox;
    class UBorder* Border;

};