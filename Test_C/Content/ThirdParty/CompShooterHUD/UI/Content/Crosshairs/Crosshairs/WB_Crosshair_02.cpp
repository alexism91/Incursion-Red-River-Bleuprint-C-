class UWB_Crosshair_02_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_02.WB_Crosshair_02_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_02.WB_Crosshair_02_C:Recoil1_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_02.WB_Crosshair_02_C:Activate_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_02.WB_Crosshair_02_C:Reaction_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_02.WB_Crosshair_02_C:Zoom_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Crosshairs/WB_Crosshair_02.WB_Crosshair_02_C:ExecuteUbergraph_WB_Crosshair_02'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IsMoving"), FGuid(0x92734342, 0x406027BD, 0x52A7B5B8, 0x120B936F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* Top;
    class USizeBox* Right;
    class USizeBox* Left;
    class UImage* Image_13;
    class UImage* Image_7;
    class UImage* Image_4;
    class UImage* Image_3;
    class UImage* Image_2;
    class USizeBox* Bottom;
    class UWidgetAnimation* Recoil1;
    class UWidgetAnimation* Activate;
    class UWidgetAnimation* Reaction;
    class UWidgetAnimation* Zoom;
    bool IsMoving;

};