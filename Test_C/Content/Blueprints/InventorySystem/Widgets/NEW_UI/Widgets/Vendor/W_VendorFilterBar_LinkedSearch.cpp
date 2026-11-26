class UW_VendorFilterBar_LinkedSearch_C : public UW_IRR_Laptop_SearchFilter_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterBar_LinkedSearch.W_VendorFilterBar_LinkedSearch_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorFilterBar_LinkedSearch.W_VendorFilterBar_LinkedSearch_C:ExecuteUbergraph_W_VendorFilterBar_LinkedSearch'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FilterBarRef"), FGuid(0xC65FDE06, 0x4CEFFEDD, 0x1D7703A6, 0x942EDA90) }, 
        { FName("FilterTag"), FGuid(0x10DE4118, 0x4D8ECE56, 0x194AD4BA, 0x6DA51835) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag FilterTag = {
        "TagName": FName("None")
    };
    FText ToolTipContent = FText("Click to remove filter.");
    bool bUseMinSize = false;
    int32 MaxHeight = 32;
    int32 MinWidth = 300;
    class UW_VendorFilterBar_C* FilterBarRef;

};