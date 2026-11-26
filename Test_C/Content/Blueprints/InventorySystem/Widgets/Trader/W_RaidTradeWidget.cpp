class UW_RaidTradeWidget_C : public URaidTradeWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/Trader/W_RaidTradeWidget.W_RaidTradeWidget_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/Trader/W_RaidTradeWidget.W_RaidTradeWidget_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/Trader/W_RaidTradeWidget.W_RaidTradeWidget_C:ExecuteUbergraph_W_RaidTradeWidget'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IRRTextBlock_55"), FGuid(0xD0690F1A, 0x493C9033, 0x73241F8A, 0x7E71574C) }, 
        { FName("Spacer_56"), FGuid(0x1C395442, 0x4FEF4377, 0xC41C2B82, 0x1F1DB4E5) }, 
        { FName("W_IRR_Button_Medium"), FGuid(0x8E5CFC2D, 0x4644C99E, 0x8CD6F8B3, 0x516F9A67) }, 
        { FName("W_IRR_ErrorMessage"), FGuid(0xE8D5138C, 0x4B430355, 0xD47F32AD, 0xCA53DF8B) }, 
        { FName("W_RaidTradeDropZone"), FGuid(0xA164D82E, 0x4C4D7258, 0x1A1A159C, 0x60084DC6) }, 
        { FName("WarningBox"), FGuid(0x6121AA08, 0x4D10D313, 0x014A9F8D, 0x8490E53F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UWidgetBlueprintGeneratedClass* OfferEntryClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/Trader/W_RaidTradeOfferWidget.W_RaidTradeOfferWidget_C'";
    struct FMargin EntryPadding = {
        "Top": 3,
        "Bottom": 3
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* WarningBox;
    class UW_RaidTradeDropZone_C* W_RaidTradeDropZone;
    class UW_IRR_ErrorMessage_C* W_IRR_ErrorMessage;
    class UW_IRR_Button_Medium_C* W_IRR_Button_Medium;
    class USpacer* Spacer_56;
    class UIRRTextBlock* IRRTextBlock_55;

};