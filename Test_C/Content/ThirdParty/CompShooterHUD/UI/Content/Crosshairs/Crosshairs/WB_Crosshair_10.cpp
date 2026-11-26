class UWB_Crosshair_10_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_10.WB_Crosshair_10_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_10.WB_Crosshair_10_C:Recoil1_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_10.WB_Crosshair_10_C:Activate_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_10.WB_Crosshair_10_C:Reaction_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_10.WB_Crosshair_10_C:Zoom_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_10.WB_Crosshair_10_C:ExecuteUbergraph_WB_Crosshair_10'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IsMoving"), FGuid(0x693C8F5C, 0x40AAEF5D, 0x331CFCB0, 0x8670423F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Top;
    class UImage* Right;
    class UImage* Left;
    class UImage* Image_13;
    class UImage* Bottom;
    class UWidgetAnimation* Recoil1;
    class UWidgetAnimation* Activate;
    class UWidgetAnimation* Reaction;
    class UWidgetAnimation* Zoom;
    bool IsMoving;

};