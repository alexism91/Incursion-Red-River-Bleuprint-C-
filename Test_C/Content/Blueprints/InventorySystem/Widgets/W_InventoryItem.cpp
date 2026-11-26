class UW_InventoryItem_C : public UItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryItem.W_InventoryItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "ItemHighlight",
            "PropertyName": FName("ToolTipWidget"),
            "FunctionName": FName("Get_ItemHighlight_ToolTipWidget"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_ItemHighlight_ToolTipWidget"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryItem.W_InventoryItem_C:ItemPendingAnim_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryItem.W_InventoryItem_C:ItemDiscovered_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventoryItem.W_InventoryItem_C:ExecuteUbergraph_W_InventoryItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Searched?"), FGuid(0x0CF85C2B, 0x499BF8EF, 0xE3953298, 0x9CCCEB83) }, 
        { FName("Tracked?"), FGuid(0xAE3BB897, 0x4A8F01CA, 0x181734AF, 0x5396F189) }, 
        { FName("ShowHideoutTooltip?"), FGuid(0x48B21E58, 0x47D43B7A, 0x409F49AC, 0xC83CDF8E) }, 
        { FName("Loupe"), FGuid(0x165809B9, 0x40814DC2, 0x1AED4E9C, 0x254B14F5) }, 
        { FName("HideoutUpgradeTooltip"), FGuid(0x3F19C462, 0x44B9303C, 0xE125ED8C, 0x54377DAF) }, 
        { FName("NeededForHideoutUnits"), FGuid(0x61D93D72, 0x44790982, 0xDC9DA68C, 0x61BBAC25) }, 
        { FName("Hovered?"), FGuid(0xAB379AA9, 0x4428A4C5, 0x40F26EAB, 0xEF67AEDA) }, 
        { FName("TooltipMessage"), FGuid(0x9AEA5BAB, 0x4071AC12, 0xDEC640AC, 0x6951F033) }, 
        { FName("bOverrideTooltipMessage"), FGuid(0x614615D8, 0x4D3D6BD5, 0x5C559D8B, 0x0FB7606B) }, 
        { FName("DragAndDropStarted"), FGuid(0x6FC72D98, 0x44A1E279, 0xD4F06492, 0x52B4B226) }, 
        { FName("Item State"), FGuid(0xED26E3A9, 0x4147D009, 0x1240C191, 0x2960675A) }, 
        { FName("InventoryItems"), FGuid(0xD14E6DE7, 0x4A2D9EA8, 0x318D90AF, 0x61FFEF9F) }, 
        { FName("OnHoverToolTip"), FGuid(0x39D01EA4, 0x475657A5, 0x86EF0BB1, 0x96C95239) }, 
        { FName("ItemDiscovered"), FGuid(0x716C49DD, 0x4763E96F, 0xC2AF60A7, 0xF7E0E5E3) }, 
        { FName("ItemPendingAnim"), FGuid(0x1C309E3C, 0x34853767, 0xB4217589, 0xD1C2A5A2) }, 
        { FName("BlackMarketTooltip"), FGuid(0x12287BD0, 0x4A5CC703, 0x72F6FBAB, 0xFD29CCA9) }, 
        { FName("BlackMarketTooltip_1"), FGuid(0x74123472, 0x48B75F60, 0x515EAE89, 0xF043AB9F) }, 
        { FName("CaliberBox"), FGuid(0x48E8336F, 0x9BCA3090, 0xBD2C4E31, 0x338723D6) }, 
        { FName("CaliberText"), FGuid(0x432A4A52, 0x9F773DC4, 0xBC5E1407, 0xFAA951CE) }, 
        { FName("DiscoveredOverlay"), FGuid(0x556342EF, 0x4C7F4035, 0x1C676286, 0x71E876E0) }, 
        { FName("Dollar"), FGuid(0x5B0BACCF, 0x4ED6D761, 0xAA33DE93, 0x9C9015AC) }, 
        { FName("Image_67"), FGuid(0x624A9B79, 0xE86E39C3, 0xB4CEB4F7, 0x115C3F0F) }, 
        { FName("ItemBox"), FGuid(0xCA64E920, 0xE3F33370, 0x995D6E58, 0xA77861E3) }, 
        { FName("ItemEligableBorder"), FGuid(0x3FCC6C55, 0x4F73F8BB, 0xE090BD97, 0xFE4B8863) }, 
        { FName("ItemOverlay"), FGuid(0xF349BFE9, 0x12C9352A, 0xADBA08FD, 0xC0476772) }, 
        { FName("ItemPending"), FGuid(0xF0D0DCA7, 0x42DB8A18, 0xBDE46A8C, 0x7CA22BF1) }, 
        { FName("OnHoveredHighlight"), FGuid(0xB60C0D01, 0xE5273AD3, 0xA79881D5, 0x5DEE95F8) }, 
        { FName("SearchOverlay"), FGuid(0xBCDA907C, 0x4E17530A, 0xD6EA6F95, 0xFDD22210) }, 
        { FName("ShoppingCart"), FGuid(0x0482D5DC, 0x433445BA, 0x73B37293, 0x2CA493A9) }, 
        { FName("ShoppingIconSwitcher"), FGuid(0x28CFA2B0, 0x466734D8, 0xA8608195, 0x2BD0320A) }, 
        { FName("Tooltip"), FGuid(0x607A8F0A, 0xF45F3787, 0xA3D60AC5, 0x0A1E8553) }, 
        { FName("Tooltip_1"), FGuid(0x6981FD13, 0x4E402ACB, 0xB6CD118A, 0x55D5FC47) }, 
        { FName("UpgradeTooltipIcon"), FGuid(0x0F4FC419, 0x41AC95E0, 0x75A407A3, 0xAB593F7A) }, 
        { FName("UpgradeTooltipIcon_1"), FGuid(0xAD488AC3, 0x48EDF187, 0x3A1C81A6, 0xA318530C) }, 
        { FName("VendorTooltipIcon"), FGuid(0xF8FBAE5E, 0x6CF334A6, 0xB75B92AA, 0x370B73BB) }, 
        { FName("VendorTooltipIcon_1"), FGuid(0x471F6CF5, 0x4AC6CE52, 0x7F48DA9C, 0x6BB22125) }, 
        { FName("W_ItemSearchLoop"), FGuid(0xA9C21EED, 0x44BC13D5, 0xB8E54595, 0x94E54279) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x0FE09499, 0x42838FE7, 0x57135884, 0xBCA8F1F4) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     DragAndDropStarted = ;
    FText TooltipMessage = FText("false");
    bool ShowHideoutTooltip? = true;
    TMap<float, struct FLinearColor> WeaponDurabilityBarColors = {
        { 30, FLinearColor(1, 1, 0, 1) }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Cursor = EMouseCursor::Hand;
    enum Visibility = ESlateVisibility::Visible;
    class UW_ItemSearchLoop_C* W_ItemSearchLoop;
    class UImage* VendorTooltipIcon;
    class UImage* UpgradeTooltipIcon;
    class UOverlay* Tooltip;
    class UWidgetSwitcher* ShoppingIconSwitcher;
    class UImage* ShoppingCart;
    class UOverlay* SearchOverlay;
    class UImage* OnlyInRaidTooltip;
    class UBorder* OnHoveredHighlight;
    class UBorder* ItemPending;
    class UOverlay* ItemOverlay;
    class UBorder* ItemEligableBorder;
    class UOverlay* ItemBox;
    class UImage* Image_67;
    class UImage* Dollar;
    class UOverlay* DiscoveredOverlay;
    class UTextBlock* CaliberText;
    class UOverlay* CaliberBox;
    class UImage* BlackMarketTooltip;
    class UWidgetAnimation* ItemPendingAnim;
    class UWidgetAnimation* ItemDiscovered;
    class UW_OnHoverToolTip_C* OnHoverToolTip;
    TArray<class UW_InventoryItem_C*>* InventoryItems;
    EPickupState Item State;
    bool bOverrideTooltipMessage;
    bool Hovered?;
    TArray<struct FGameplayTag> NeededForHideoutUnits;
    TArray<FString> HideoutUpgradeTooltip;
    class UW_ItemSearchLoop_C* Loupe;
    bool Tracked?;
    bool Searched?;

};