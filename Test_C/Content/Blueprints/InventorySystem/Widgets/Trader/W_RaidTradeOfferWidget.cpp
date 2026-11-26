class UW_RaidTradeOfferWidget_C : public URaidTradeOfferWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/Trader/W_RaidTradeOfferWidget.W_RaidTradeOfferWidget_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/Trader/W_RaidTradeOfferWidget.W_RaidTradeOfferWidget_C:ExecuteUbergraph_W_RaidTradeOfferWidget'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Background"), FGuid(0xC4BBE123, 0x4964502D, 0xDB293890, 0x71B29487) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D ItemSlotSize = FVector2D(73, 73);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* Background;

};