class UW_ContextItem_Content_C : public UContextItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextItem_Content.W_ContextItem_Content_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextItem_Content.W_ContextItem_Content_C:ExecuteUbergraph_W_ContextItem_Content'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ContextIconImage"), FGuid(0x30F57EFA, 0xDA8735CC, 0xB9FF1257, 0x695AB69D) }, 
        { FName("ContextNameText"), FGuid(0x8A7E144C, 0xA7F73D29, 0xAB373DC1, 0xC8F6CB51) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* ContextNameText;
    class UImage* ContextIconImage;

};