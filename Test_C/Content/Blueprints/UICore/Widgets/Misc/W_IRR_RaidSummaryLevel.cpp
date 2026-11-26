class UW_IRR_RaidSummaryLevel_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummaryLevel.W_IRR_RaidSummaryLevel_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_RaidSummaryLevel.W_IRR_RaidSummaryLevel_C:ExecuteUbergraph_W_IRR_RaidSummaryLevel'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Max XP"), FGuid(0x98B041ED, 0x46D17F54, 0x0DD2A591, 0x7662E016) }, 
        { FName("To XP"), FGuid(0x487765D7, 0x4D41F49A, 0x68A9ABBC, 0x7C5F67CF) }, 
        { FName("To Level"), FGuid(0x07DC6B31, 0x41E7EFC0, 0x13DEAA88, 0x4B114DDB) }, 
        { FName("Current XP"), FGuid(0x372E0868, 0x4F18C78F, 0x447F54A2, 0x6768E5FB) }, 
        { FName("Current Level"), FGuid(0x0FB9F2F1, 0x42DE8BE6, 0x92F6BB9D, 0x654A3D64) }, 
        { FName("AnimationDelay"), FGuid(0x30EE122F, 0x46A3601A, 0xDE859DB8, 0xA5230CF4) }, 
        { FName("Old XP"), FGuid(0x3E0338F1, 0x42BD7AE7, 0x7AFA59B2, 0x39893878) }, 
        { FName("Old Level"), FGuid(0x9B895682, 0x42BE1B35, 0x3B424F93, 0xCA30B5A2) }, 
        { FName("CurrentValue"), FGuid(0x20EE4FE7, 0xC28A3D45, 0xB8C9F3E1, 0x549C4EFA) }, 
        { FName("IRRTextBlock_0"), FGuid(0xDB000306, 0xA3CF3494, 0xA1EDBE7B, 0x3848A055) }, 
        { FName("ItemName_1"), FGuid(0xD9402FB4, 0xAFEF3538, 0x84629C07, 0x028AB77E) }, 
        { FName("MaxValue"), FGuid(0xD652CB11, 0x6C393344, 0xB62F1445, 0x53EA2BDC) }, 
        { FName("W_DefaultBar"), FGuid(0xAECDF0A8, 0x40EB1114, 0x9A603C9D, 0x0D8EA0BF) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float AnimationDelay = 0.02;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_GeneralStatBar_C* W_DefaultBar;
    class UIRRTextBlock* MaxValue;
    class UIRRTextBlock* ItemName_1;
    class UIRRTextBlock* IRRTextBlock_0;
    class UIRRTextBlock* CurrentValue;
    int Old Level;
    double Old XP;
    int Current Level;
    double Current XP;
    int To Level;
    float To XP;
    float Max XP;

};