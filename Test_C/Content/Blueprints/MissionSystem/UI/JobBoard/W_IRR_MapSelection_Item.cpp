class UW_IRR_MapSelection_Item_C : public UIRRMapSelector
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_MapSelection_Item.W_IRR_MapSelection_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_MapSelection_Item.W_IRR_MapSelection_Item_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_MapSelection_Item.W_IRR_MapSelection_Item_C:ExecuteUbergraph_W_IRR_MapSelection_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnMapClicked"), FGuid(0x5668EB74, 0x416F4500, 0x5B8E6AAC, 0x2985CAAC) }, 
        { FName("Tooltip"), FGuid(0x738E7298, 0x4B0BDFDD, 0x570ADDB6, 0x110E0C02) }, 
        { FName("BackgroundSelection"), FGuid(0x4C6B9FFC, 0x98B53523, 0x8DF79510, 0x05BEBD95) }, 
        { FName("ScaleBox"), FGuid(0x22C8C987, 0x41A12D96, 0x4843488E, 0xF2A8155B) }, 
        { FName("W_IRR_Button_Small"), FGuid(0x4794EE50, 0x44DA3FED, 0x8D45841E, 0x97D5D9B4) }, 
        { FName("W_IRR_Line"), FGuid(0x96C97D53, 0x4F7F33A8, 0x91EA38B1, 0xC0B40897) }, 
        { FName("W_IRR_TabButton_Small"), FGuid(0x4201975E, 0x09D234A5, 0xB879BFA4, 0x435AAA3B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnMapClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_TabButton_Small_C* W_IRR_TabButton_Small;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_IRR_Button_Small_C* W_IRR_Button_Small;
    class UOverlay* ScaleBox;
    class UImage* BackgroundSelection;
    class UW_MapToolTip_C* Tooltip;

};