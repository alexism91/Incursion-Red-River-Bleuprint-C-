class UWB_Crosshair_05_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_05.WB_Crosshair_05_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_05.WB_Crosshair_05_C:Recoil1_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_05.WB_Crosshair_05_C:Activate_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_05.WB_Crosshair_05_C:Reaction_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_05.WB_Crosshair_05_C:Zoom_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_05.WB_Crosshair_05_C:ExecuteUbergraph_WB_Crosshair_05'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IsMoving"), FGuid(0x693C8F5C, 0x40AAEF5D, 0x331CFCB0, 0x8670423F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Zoom2;
    class UImage* Image_13;
    class UImage* I_Circle;
    class UImage* Circle2;
    class UWidgetAnimation* Recoil1;
    class UWidgetAnimation* Activate;
    class UWidgetAnimation* Reaction;
    class UWidgetAnimation* Zoom;
    bool IsMoving;

};