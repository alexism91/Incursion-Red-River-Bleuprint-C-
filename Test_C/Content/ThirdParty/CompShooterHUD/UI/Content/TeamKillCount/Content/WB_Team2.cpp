class UWB_Team2_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/TeamKillCount/Content/WB_Team2.WB_Team2_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/TeamKillCount/Content/WB_Team2.WB_Team2_C:ExecuteUbergraph_WB_Team2'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MaxValue"), FGuid(0xDDA6CB92, 0x445A85D0, 0x050B0882, 0x5D6C7927) }, 
        { FName("Value"), FGuid(0x4F96F971, 0x4C6D8EF6, 0xB3606480, 0x664E15BD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedPaint = false;
    class UWB_TeamProgress_C* WB_TeamProgress;
    class UTextBlock* Text_Value;
    class UTextBlock* Text_Team;
    class UBorder* b_Background;
    int Value;
    int MaxValue;

};