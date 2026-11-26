class UW_VendorTierFilter_C : public UIRRBaseButtonWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorTierFilter.W_VendorTierFilter_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorTierFilter.W_VendorTierFilter_C:ExecuteUbergraph_W_VendorTierFilter'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IsSelected2"), FGuid(0x898BBFFA, 0x44D376F7, 0x06A75981, 0x01F0E8A1) }, 
        { FName("TierTag"), FGuid(0x11FF2D78, 0x4F19A36F, 0xE7AF8DB7, 0x63647AD9) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag TierTag = {
        "TagName": FName("UI.Type.Laptop")
    };
    bool bUseOnHoverSound = false;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* Frame;
    class UTextBlock* CategoryText;
    bool IsSelected2;

};