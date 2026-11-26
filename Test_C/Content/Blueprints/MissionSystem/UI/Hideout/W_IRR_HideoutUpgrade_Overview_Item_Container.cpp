class UW_IRR_HideoutUpgrade_Overview_Item_Container_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item_Container.W_IRR_HideoutUpgrade_Overview_Item_Container_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item_Container.W_IRR_HideoutUpgrade_Overview_Item_Container_C:ExecuteUbergraph_W_IRR_HideoutUpgrade_Overview_Item_Container'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("AllSelectedItems"), FGuid(0x0B932157, 0x4A0A9C41, 0x7FF31D87, 0x54B13395) }, 
        { FName("Exclude Items"), FGuid(0xC1D38E11, 0x4C89AA58, 0x606A30B9, 0x471F2925) }, 
        { FName("Unit"), FGuid(0xD484F97B, 0x47755C82, 0xAC45198C, 0x7C7F9774) }, 
        { FName("OnAllItemsSubmitted"), FGuid(0x34D2EB68, 0x45A256E7, 0x910B2E99, 0x9001B7C5) }, 
        { FName("ItemWidgets"), FGuid(0x927CC3C8, 0x442949A1, 0xDC674A91, 0xD40AB6AF) }, 
        { FName("ItemPadding"), FGuid(0xD41155A4, 0x483D1661, 0x5CD77DA4, 0xDADAB26A) }, 
        { FName("Items"), FGuid(0xC6DE0FDD, 0x476C79B3, 0xC9A2799C, 0xCD75F199) }, 
        { FName("ItemBox"), FGuid(0xD0C55C1D, 0x4A0E8005, 0xE08AE691, 0x3143FC83) }, 
        { FName("W_IRR_HideoutUpgrade_Overview_Item"), FGuid(0x0E0078B3, 0x443A78DB, 0xE0276090, 0x5D4924BB) }, 
        { FName("W_IRR_HideoutUpgrade_Overview_Item_1"), FGuid(0x19B1BD4A, 0x45B8D521, 0xED270C9F, 0x07F4ED58) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FMargin ItemPadding = {
        "Left": 0,
        "Top": 0,
        "Right": 0,
        "Bottom": 0
    };
     OnAllItemsSubmitted = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_HideoutUpgrade_Overview_Item_Select_C* W_IRR_HideoutUpgrade_Overview_Item_1;
    class UW_IRR_HideoutUpgrade_Overview_Item_Select_C* W_IRR_HideoutUpgrade_Overview_Item;
    class UVerticalBox* ItemBox;
    TMap<struct FGameplayTag, int> Items;
    TArray<class UW_IRR_HideoutUpgrade_Overview_Item_C*>* ItemWidgets;
    class UIRRHideoutUnitComponent* Unit;
    TArray<struct FGuid> Exclude Items;
    TMap<struct FGuid, int> AllSelectedItems;

};