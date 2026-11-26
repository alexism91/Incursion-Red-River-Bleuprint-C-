class UW_InventoryHeadline_C : public UHeadlineWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryHeadline.W_InventoryHeadline_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryHeadline.W_InventoryHeadline_C:ExecuteUbergraph_W_InventoryHeadline'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Text"), FGuid(0xA239D202, 0xD5013513, 0x86F7D795, 0x0EF28587) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName Headline = FName("Test");
    bool bUseBorder = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* Text;

};