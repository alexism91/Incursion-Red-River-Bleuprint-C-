class UW_NightVision_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/SKGShooterFramework/Assets/W_NightVision.W_NightVision_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/SKGShooterFramework/Assets/W_NightVision.W_NightVision_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/SKGShooterFramework/Assets/W_NightVision.W_NightVision_C:ExecuteUbergraph_W_NightVision'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Enabled?"), FGuid(0x6A182BC8, 0x4EC37CA1, 0xC252C482, 0x44171ABC) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* SB_Size;
    class UImage* I_Overlay;
    class UWidgetAnimation* Fade;
    bool Enabled?;

};