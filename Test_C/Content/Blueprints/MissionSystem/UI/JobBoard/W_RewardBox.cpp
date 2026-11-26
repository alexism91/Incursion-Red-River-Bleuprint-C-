class UW_RewardBox_C : public UIRRRewardListWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_RewardBox.W_RewardBox_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_RewardBox.W_RewardBox_C:ExecuteUbergraph_W_RewardBox'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Reward Alignment"), FGuid(0xD47012CD, 0x4DE2C249, 0x5E801599, 0xA441753C) }, 
        { FName("ShowHeader?"), FGuid(0x3C03FC4B, 0x492DC1FF, 0x9FD03D8A, 0x181431B8) }, 
        { FName("RewardBox"), FGuid(0x418A072D, 0x2D7B3B84, 0xA0DDE2F5, 0xF50CA62C) }, 
        { FName("Spacer_59"), FGuid(0xAEAE1261, 0x4A535A10, 0xD5EDA09A, 0x9ADCC6E6) }, 
        { FName("W_InventorySection"), FGuid(0x2B102CEB, 0x0B7C39D9, 0x9E645570, 0x52F3587B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool ShowHeader? = true;
    enum EHorizontalAlignment Reward Alignment = EHorizontalAlignment::HAlign_Center;
    class UWidgetBlueprintGeneratedClass* RewardEntryClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_RewardItem.W_RewardItem_C'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_InventorySection_C* W_InventorySection;
    class USpacer* Spacer_59;
    class UVerticalBox* RewardBox;

};