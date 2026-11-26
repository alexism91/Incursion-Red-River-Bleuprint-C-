class UW_IRR_HideoutUpgrade_Overview_Item_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Item.W_IRR_HideoutUpgrade_Overview_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ExcludeItems"), FGuid(0xBAA8F8D6, 0x42D22DD6, 0xF402EEAA, 0x1CDDE295) }, 
        { FName("OnItemsSubmitted"), FGuid(0x7C4D4088, 0x4DCC8D3E, 0x1B67F98B, 0x784A1715) }, 
        { FName("MissionDeliverContainer"), FGuid(0xF53FC017, 0x482B04FA, 0x308F7C8B, 0x19A6C269) }, 
        { FName("ItemSize"), FGuid(0xC88EB4EF, 0x4E1A5BA8, 0x843D1FA5, 0x933E78F1) }, 
        { FName("RequiredAmount"), FGuid(0x90D8A79E, 0x46B88523, 0x2AC8D4B2, 0xB3259335) }, 
        { FName("ItemTag"), FGuid(0x809E86FF, 0x4A7DF721, 0x33AD7FA3, 0x85BFC23C) }, 
        { FName("Button"), FGuid(0xB760A6D3, 0x4A595F93, 0x784B6080, 0x30E8651C) }, 
        { FName("BUy"), FGuid(0xC4A905E3, 0x4363D09E, 0xD198B0AC, 0x16AEF15C) }, 
        { FName("EquipToBackground"), FGuid(0x71874DEA, 0x4DC5B2EA, 0x8202AAB2, 0xF476702F) }, 
        { FName("IconBox"), FGuid(0x1F07CB36, 0x4830469F, 0xFE5E108B, 0xC1562D9D) }, 
        { FName("Image_67"), FGuid(0xE8A6965C, 0x4610459D, 0xAE3DF594, 0xEC168B09) }, 
        { FName("Image_98"), FGuid(0xC25D480B, 0x4A8D1EC5, 0xDF0C8F80, 0xDBD5CF6E) }, 
        { FName("IRRTextBlock"), FGuid(0x972481DE, 0x4F79A825, 0x03A62C95, 0x33B485D9) }, 
        { FName("Overlay_17"), FGuid(0xFAF10212, 0x499C1E2B, 0x83A50DB3, 0x1618A742) }, 
        { FName("SizeBox_0"), FGuid(0x25FCA63D, 0x4BF179BD, 0x99B2209A, 0x26998FD6) }, 
        { FName("W_IRR_HideoutUpgrade_MinMaxText"), FGuid(0x44BDD564, 0x498E1573, 0x4DEB36A9, 0xC47D91D4) }
    };
    struct FGameplayTag ItemTag = {
        "TagName": FName("None")
    };
    struct FVector2D ItemSize = FVector2D(73, 73);
     OnItemsSubmitted = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_HideoutUpgrade_MinMaxText_C* W_IRR_HideoutUpgrade_MinMaxText;
    class USizeBox* SizeBox_0;
    class UOverlay* Overlay_17;
    class UIRRTextBlock* IRRTextBlock;
    class UImage* Image_98;
    class UImage* Image_67;
    class UOverlay* IconBox;
    class UBorder* EquipToBackground;
    class UW_IRR_TabButton_Medium_C* BUy;
    class UW_IRR_TabButton_Medium_C* Button;
    int RequiredAmount;
    class UW_IRR_Mission_Deliver_Container_C* MissionDeliverContainer;
    TArray<struct FGuid> ExcludeItems;

};