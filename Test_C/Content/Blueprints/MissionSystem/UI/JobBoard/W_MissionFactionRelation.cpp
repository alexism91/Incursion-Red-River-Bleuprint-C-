class UW_MissionFactionRelation_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionFactionRelation.W_MissionFactionRelation_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MissionFactionRelation.W_MissionFactionRelation_C:ExecuteUbergraph_W_MissionFactionRelation'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Faction"), FGuid(0x88BF571B, 0x4C421754, 0x7388E4B0, 0x75B81D6E) }, 
        { FName("FactionLevel"), FGuid(0x0D6E16D4, 0x48E41C47, 0x944681AA, 0xCB5E912C) }, 
        { FName("FactionName"), FGuid(0x988E266D, 0x4811F2E8, 0x4DAAC0A8, 0xAEAE46ED) }, 
        { FName("ProgressBarLinear"), FGuid(0x3EA166D4, 0xEE8D303A, 0x8E0F500E, 0x9440F6B4) }, 
        { FName("Tier_1"), FGuid(0x714BB239, 0x8A803916, 0xBF7EF558, 0x58BFCBDC) }, 
        { FName("Tier_2"), FGuid(0xE7304AE7, 0x4B1D3347, 0xB8BB85A0, 0x7D0F2477) }, 
        { FName("Tier_3"), FGuid(0x8DF39750, 0x15B03821, 0xBBE9DE41, 0xB5B78776) }, 
        { FName("Tier_4"), FGuid(0xA3C5BD2C, 0x59603BF7, 0xA480FE06, 0xD1004E6D) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0x11835C82, 0x51933E18, 0xB94AF9CB, 0xE2111573) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Faction = {
        "TagName": FName("UI.Type.Laptop")
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UProgressBar* Tier_4;
    class UProgressBar* Tier_3;
    class UProgressBar* Tier_2;
    class UProgressBar* Tier_1;
    class UProgressBarLinear_C* ProgressBarLinear;
    class UIRRTextBlock* FactionName;
    class UIRRTextBlock* FactionLevel;

};