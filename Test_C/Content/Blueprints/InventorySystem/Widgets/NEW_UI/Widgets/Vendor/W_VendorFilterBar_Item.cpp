class UW_VendorFilterBar_Item_C : public UW_IRR_Laptop_SearchFilter_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterBar_Item.W_VendorFilterBar_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterBar_Item.W_VendorFilterBar_Item_C:ExecuteUbergraph_W_VendorFilterBar_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FilterBarRef"), FGuid(0x088D6771, 0x4AE05114, 0xA613D293, 0x8958C531) }, 
        { FName("FilterTag"), FGuid(0x9D5B70A5, 0x4FD87350, 0x25C593A9, 0xF6DA8ED2) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag FilterTag = {
        "TagName": FName("None")
    };
    FText ToolTipContent = FText("Click to remove filter.");
    bool bUseMinSize = false;
    int32 MaxWidth = 200;
    int32 MaxHeight = 32;
    int32 MinWidth = 200;
    class UW_VendorFilterBar_C* FilterBarRef;

};