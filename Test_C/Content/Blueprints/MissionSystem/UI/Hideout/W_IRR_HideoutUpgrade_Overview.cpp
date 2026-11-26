class UW_IRR_HideoutUpgrade_Overview_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview.W_IRR_HideoutUpgrade_Overview_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview.W_IRR_HideoutUpgrade_Overview_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview.W_IRR_HideoutUpgrade_Overview_C:ExecuteUbergraph_W_IRR_HideoutUpgrade_Overview'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Items"), FGuid(0xF9570CE8, 0x4C57B5DA, 0xD0269CAB, 0x4D92EF4F) }, 
        { FName("Conditions"), FGuid(0x754E92D0, 0x442A4464, 0x44A761A7, 0xCC3B364B) }, 
        { FName("All Selected Items"), FGuid(0x670E976F, 0x429E44AB, 0x63646BB7, 0x6CA61BEA) }, 
        { FName("Resources"), FGuid(0x53BA5560, 0x4B2FED12, 0xFEDD5EAC, 0x1692B009) }, 
        { FName("New Level"), FGuid(0x8B5045FC, 0x455B266E, 0x5D854F9B, 0x6EA8697B) }, 
        { FName("Unit"), FGuid(0xE8DB9EB4, 0x43953FB8, 0xA507A2A0, 0x688A2D04) }, 
        { FName("ItemPadding"), FGuid(0xFDC0403C, 0x44F61533, 0xB16A5691, 0xD15A0264) }, 
        { FName("ActionsBox"), FGuid(0x5C8BEED2, 0x49CA3DE3, 0x3BC06397, 0x793CAE5C) }, 
        { FName("ConditionBox"), FGuid(0x67AFDCE8, 0x489D4E6D, 0xACFD10B5, 0x0B558AA0) }, 
        { FName("Description"), FGuid(0x43768B44, 0x43EBC50D, 0x40342AA4, 0x114D79B8) }, 
        { FName("ItemBox"), FGuid(0x67142DA9, 0x47E7E788, 0x01A0AE97, 0x2DA14FA3) }, 
        { FName("MissionName"), FGuid(0x75F64857, 0x426DC29D, 0x5BEE2792, 0x713CEC02) }, 
        { FName("PreconditionBox"), FGuid(0x033A277A, 0x44AE3034, 0x12E02C84, 0x633BCB48) }, 
        { FName("ResourceBox"), FGuid(0xD0F7771A, 0x4D61A093, 0xB3BA39A7, 0x7D2E1167) }, 
        { FName("UpgradeButton"), FGuid(0xAA64DC77, 0x4C1569ED, 0x1A19B8B2, 0xE635609D) }, 
        { FName("W_InventorySection"), FGuid(0x641E8CA1, 0x46B7CEFC, 0x881E889E, 0xEEBE8615) }, 
        { FName("W_InventorySection_1"), FGuid(0x3DAD867F, 0x4212BF9C, 0x2F5C139B, 0xE24880CD) }, 
        { FName("W_IRR_Background"), FGuid(0x7EF76463, 0x49694886, 0x441D42AD, 0x5ABC02CF) }, 
        { FName("W_IRR_HideoutUpgrade_Overview_Benefits"), FGuid(0x3AFA5AB3, 0x4B5DCAB5, 0x25A846B1, 0x6A9A9F62) }, 
        { FName("W_IRR_HideoutUpgrade_Overview_Benefits_1"), FGuid(0x9B21B61D, 0x4A6F56FC, 0xAE6BECA2, 0x3F9E028F) }, 
        { FName("W_IRR_HideoutUpgrade_Overview_Item_Container"), FGuid(0x0C64E959, 0x4C7B991E, 0x83CF218D, 0x89614B2D) }, 
        { FName("W_IRR_HideoutUpgrade_Overview_Preconditions"), FGuid(0x1526BC22, 0x413542F1, 0x5737BD8D, 0x96735F5B) }, 
        { FName("W_IRR_HideoutUpgrade_Overview_Resource"), FGuid(0x575F4D1F, 0x440D1ED6, 0x0C0D1783, 0x62902663) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FMargin ItemPadding = {
        "Left": 0,
        "Top": 0,
        "Right": 0,
        "Bottom": 6
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_HideoutUpgrade_Overview_Resource_C* W_IRR_HideoutUpgrade_Overview_Resource;
    class UW_IRR_HideoutUpgrade_Overview_Preconditions_C* W_IRR_HideoutUpgrade_Overview_Preconditions;
    class UW_IRR_HideoutUpgrade_Overview_Item_Container_C* W_IRR_HideoutUpgrade_Overview_Item_Container;
    class UW_IRR_HideoutUpgrade_Overview_Action_C* W_IRR_HideoutUpgrade_Overview_Benefits_1;
    class UW_IRR_HideoutUpgrade_Overview_Action_C* W_IRR_HideoutUpgrade_Overview_Benefits;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_InventorySection_C* W_InventorySection_1;
    class UW_InventorySection_C* W_InventorySection;
    class UW_IRR_BaseButton_C* UpgradeButton;
    class UW_IRR_BaseButton_C* TrackButton;
    class UVerticalBox* ResourceBox;
    class UVerticalBox* PreconditionBox;
    class UIRRTextBlock* MissionName;
    class UVerticalBox* ItemBox;
    class URichTextBlock* Description;
    class UVerticalBox* ConditionBox;
    class UVerticalBox* ActionsBox;
    class UIRRHideoutUnitComponent* Unit;
    int New Level;
    TArray<class UW_IRR_HideoutUpgrade_Overview_Resource_C*>* Resources;
    TMap<struct FGuid, int> All Selected Items;
    TArray<class UW_IRR_HideoutUpgrade_Overview_Preconditions_C*>* Conditions;
    class UW_IRR_HideoutUpgrade_Overview_Item_Container_C* Items;

};