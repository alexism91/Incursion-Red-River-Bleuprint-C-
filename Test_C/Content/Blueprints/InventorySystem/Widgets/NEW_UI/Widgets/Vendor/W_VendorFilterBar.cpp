class UW_VendorFilterBar_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterBar.W_VendorFilterBar_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterBar.W_VendorFilterBar_C:ExecuteUbergraph_W_VendorFilterBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FilterLinkedSearch"), FGuid(0x8545825E, 0x4879D4D7, 0xD656498A, 0xC9046C7F) }, 
        { FName("FilterWidgets"), FGuid(0xA83BFDE5, 0x484EA42D, 0xBA731B9F, 0x571EFAF8) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UScrollBox* Box;
    TMap<struct FGameplayTag, class UUserWidget*>* FilterWidgets;
    class UW_VendorFilterBar_LinkedSearch_C* FilterLinkedSearch;

};