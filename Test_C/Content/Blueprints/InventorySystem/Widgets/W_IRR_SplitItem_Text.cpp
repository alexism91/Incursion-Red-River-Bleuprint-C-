class UW_IRR_SplitItem_Text_C : public UIRRItemSplitWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_IRR_SplitItem_Text.W_IRR_SplitItem_Text_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/W_IRR_SplitItem_Text.W_IRR_SplitItem_Text_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_IRR_SplitItem_Text.W_IRR_SplitItem_Text_C:ExecuteUbergraph_W_IRR_SplitItem_Text'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnButtonClicked"), FGuid(0xAC6A48C7, 0x4715B065, 0xE83EE090, 0x76782B36) }, 
        { FName("HorizontalBox_1"), FGuid(0xB0C423C3, 0xD64E3CFD, 0x8AED4860, 0x41F2930D) }, 
        { FName("ProgressBar"), FGuid(0xC7EA3902, 0x419541C7, 0xFD8B48BE, 0xD16706D5) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnButtonClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UProgressBar* ProgressBar;
    class UHorizontalBox* HorizontalBox_1;

};