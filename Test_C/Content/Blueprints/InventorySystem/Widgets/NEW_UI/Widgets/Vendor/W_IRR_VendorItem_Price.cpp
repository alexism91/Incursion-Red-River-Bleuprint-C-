class UW_IRR_VendorItem_Price_C : public UIRRVendorListItemPartWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_Price.W_IRR_VendorItem_Price_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_Price.W_IRR_VendorItem_Price_C:ExecuteUbergraph_W_IRR_VendorItem_Price'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("bUsePreset"), FGuid(0x1199A765, 0x4056E3E4, 0xEB061888, 0xDEA3CE47) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_CurrencyText_C* W_IRR_CurrencyText;
    class UBorder* BackgroundBorder;
    bool bUsePreset;

};