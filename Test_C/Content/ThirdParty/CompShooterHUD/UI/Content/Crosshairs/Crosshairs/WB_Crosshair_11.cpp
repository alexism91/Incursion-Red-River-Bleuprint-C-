class UWB_Crosshair_11_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_11.WB_Crosshair_11_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_11.WB_Crosshair_11_C:Recoil1_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_11.WB_Crosshair_11_C:Activate_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_11.WB_Crosshair_11_C:Reaction_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_11.WB_Crosshair_11_C:Zoom_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_11.WB_Crosshair_11_C:ExecuteUbergraph_WB_Crosshair_11'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IsMoving"), FGuid(0x693C8F5C, 0x40AAEF5D, 0x331CFCB0, 0x8670423F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* I_TR;
    class UImage* I_TL;
    class UImage* I_DR;
    class UImage* I_DL;
    class UImage* I_Circle;
    class UWidgetAnimation* Recoil1;
    class UWidgetAnimation* Activate;
    class UWidgetAnimation* Reaction;
    class UWidgetAnimation* Zoom;
    bool IsMoving;

};