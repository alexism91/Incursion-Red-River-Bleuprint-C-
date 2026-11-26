class UW_IRR_Mission_Deliver_Progress_Item_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_Mission_Deliver_Progress_Item.W_IRR_Mission_Deliver_Progress_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_IRR_Mission_Deliver_Progress_Item.W_IRR_Mission_Deliver_Progress_Item_C:ExecuteUbergraph_W_IRR_Mission_Deliver_Progress_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CurrentAmount"), FGuid(0x0A96BAA6, 0x43581192, 0x25A8AC96, 0x563192BE) }, 
        { FName("Exceeded?"), FGuid(0xE597A718, 0x46F510FC, 0x8E5BD7AB, 0xF09CAF10) }, 
        { FName("ToDeliverAmount"), FGuid(0x0AD79913, 0x4F1E85D5, 0x1CA0EFA4, 0x7F0114D2) }, 
        { FName("ItemTag"), FGuid(0xDF5B6120, 0x45DE43B5, 0x98DD51BA, 0xDD688406) }, 
        { FName("CurrentQuantity"), FGuid(0xF3EF19A7, 0x4E2E1068, 0xF34719AD, 0x1E5CE3CB) }, 
        { FName("Exceed"), FGuid(0x24674E0F, 0x40B179AE, 0x72E93297, 0xFDDEBEA0) }, 
        { FName("MaxQuantity"), FGuid(0x32EAA3DA, 0x43FB9515, 0xF8FBA88B, 0x9F30104F) }, 
        { FName("Progress"), FGuid(0xACF6E4C9, 0x4727B909, 0x407A1EA0, 0x9367CC07) }, 
        { FName("W_IRR_HideoutUpgrade_MinMaxText"), FGuid(0x92891935, 0x4399F45C, 0x1E1E4B8D, 0xCBF2A3C2) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag ItemTag = {
        "TagName": FName("None")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_HideoutUpgrade_MinMaxText_C* W_IRR_HideoutUpgrade_MinMaxText;
    class UIRRTextBlock* Progress;
    class UIRRTextBlock* Exceed;
    int ToDeliverAmount;
    bool Exceeded?;
    int CurrentAmount;

};