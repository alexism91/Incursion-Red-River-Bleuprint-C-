class UWB_PersonaKillCount_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/PersonaKillCount/WB_PersonaKillCount.WB_PersonaKillCount_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/PersonaKillCount/WB_PersonaKillCount.WB_PersonaKillCount_C:ExecuteUbergraph_WB_PersonaKillCount'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CurrentEntry"), FGuid(0x344E30AD, 0x4ACA9B61, 0x88924AB0, 0xE9641458) }, 
        { FName("AllEntries"), FGuid(0x49B0B902, 0x4C3BC055, 0x928FC68D, 0x222951FB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* VB_Entrys;
    TArray<class UWB_KillCountEntry_C*>* AllEntries;
    class UWB_KillCountEntry_C* CurrentEntry;

};