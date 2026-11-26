class UWB_KillCountEntry_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/PersonaKillCount/WB_KillCountEntry.WB_KillCountEntry_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/PersonaKillCount/WB_KillCountEntry.WB_KillCountEntry_C:FadeInText_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/PersonaKillCount/WB_KillCountEntry.WB_KillCountEntry_C:FadeOutText_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/PersonaKillCount/WB_KillCountEntry.WB_KillCountEntry_C:ExecuteUbergraph_WB_KillCountEntry'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IsRemoved"), FGuid(0x0FF3C79C, 0x4BFD2540, 0x4C1B9489, 0x44CEDC6A) }, 
        { FName("DamagedName"), FGuid(0x01F4941A, 0x450C6283, 0x3F38FEA6, 0xBACC98F5) }, 
        { FName("CauserIcon"), FGuid(0xE8C5EB73, 0x455E144D, 0xEAC6138D, 0x02B3EDE9) }, 
        { FName("InstigatorName"), FGuid(0x75DFF7B0, 0x494155D2, 0x48C3B98D, 0x5BEEB827) }, 
        { FName("DisplayTime"), FGuid(0x0AAC3F1E, 0x42EFDD88, 0x94377386, 0x44C26510) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* InstigatorText_White;
    class UTextBlock* Instigator_Text;
    class UImage* Image_0;
    class UImage* Icon_White;
    class UImage* Icon;
    class UTextBlock* DamagedText_White;
    class UTextBlock* DamagedText;
    class UWidgetAnimation* FadeInText;
    class UWidgetAnimation* FadeOutText;
    double DisplayTime;
    FText InstigatorName;
    class UObject* CauserIcon;
    FText DamagedName;
    bool IsRemoved;

};