class UW_IRR_RaidSummaryFactionItem_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummaryFactionItem.W_IRR_RaidSummaryFactionItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummaryFactionItem.W_IRR_RaidSummaryFactionItem_C:ExecuteUbergraph_W_IRR_RaidSummaryFactionItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Old Value"), FGuid(0xEDF7A01C, 0x4FEDC58F, 0xA2251B86, 0xD47978BE) }, 
        { FName("Current Value"), FGuid(0x83DDAA7A, 0x41507B68, 0x34D2E994, 0x0FE224AD) }, 
        { FName("Faction Tag"), FGuid(0xB64F7AC0, 0x49DF842F, 0x4A795C93, 0x1EB4C284) }, 
        { FName("CurrentValue"), FGuid(0x20EE4FE7, 0xC28A3D45, 0xB8C9F3E1, 0x549C4EFA) }, 
        { FName("IRRTextBlock_0"), FGuid(0xDB000306, 0xA3CF3494, 0xA1EDBE7B, 0x3848A055) }, 
        { FName("ItemName_1"), FGuid(0xD9402FB4, 0xAFEF3538, 0x84629C07, 0x028AB77E) }, 
        { FName("W_DefaultBar"), FGuid(0xFDB4D218, 0x5C6C365D, 0x81C4D88B, 0x51421EFB) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0x3912495C, 0x33503369, 0x8E1BBA9F, 0x7527E525) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Faction Tag = {
        "TagName": FName("None")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UW_GeneralStatBar_C* W_DefaultBar;
    class UIRRTextBlock* ItemName_1;
    class UIRRTextBlock* IRRTextBlock_0;
    class UIRRTextBlock* CurrentValue;
    double Current Value;
    double Old Value;

};