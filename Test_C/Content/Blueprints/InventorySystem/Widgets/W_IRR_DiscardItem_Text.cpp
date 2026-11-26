class UW_IRR_DiscardItem_Text_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_IRR_DiscardItem_Text.W_IRR_DiscardItem_Text_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnButtonClicked"), FGuid(0x82733FE8, 0x4F7BCD13, 0x5DE3F683, 0xEC2B5DE1) }, 
        { FName("HorizontalBox_1"), FGuid(0xB0C423C3, 0xD64E3CFD, 0x8AED4860, 0x41F2930D) }, 
        { FName("IRRTextBlock"), FGuid(0x7F8D4D64, 0xEB63379D, 0x8901FAFE, 0xFF2CD371) }
    };
     OnButtonClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* IRRTextBlock;
    class UHorizontalBox* HorizontalBox_1;

};