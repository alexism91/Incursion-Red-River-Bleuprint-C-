class UW_VendorSortArrow_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorSortArrow.W_VendorSortArrow_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorSortArrow.W_VendorSortArrow_C:ExecuteUbergraph_W_VendorSortArrow'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Descendant"), FGuid(0x8A17769D, 0x46974F69, 0x6ED8A995, 0x73520C4D) }, 
        { FName("Arrow"), FGuid(0xD7360AB0, 0x4252A216, 0x4D4B358A, 0xD77C6F44) }, 
        { FName("CircularThrobber_81"), FGuid(0x2D2E3CD4, 0xC520344E, 0x82173680, 0x7FC92693) }, 
        { FName("SortSwitcher"), FGuid(0xC9DC8597, 0x081C3EA8, 0x8E414D43, 0xEB424AEE) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* SortSwitcher;
    class UCircularThrobber* CircularThrobber_81;
    class UImage* Arrow;
    bool Descendant;

};