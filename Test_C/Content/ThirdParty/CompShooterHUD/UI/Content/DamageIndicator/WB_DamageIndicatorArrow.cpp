class UWB_DamageIndicatorArrow_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicatorArrow.WB_DamageIndicatorArrow_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicatorArrow.WB_DamageIndicatorArrow_C:Loopo_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicatorArrow.WB_DamageIndicatorArrow_C:Fade_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicatorArrow.WB_DamageIndicatorArrow_C:TempFade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicatorArrow.WB_DamageIndicatorArrow_C:ExecuteUbergraph_WB_DamageIndicatorArrow'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SelfRef"), FGuid(0x858EF7A5, 0x410ED8B1, 0x707B35AA, 0x4070FD26) }, 
        { FName("bUseViewportSensitive"), FGuid(0x565AB4F7, 0x40BF5372, 0xBF5712B1, 0x426C0604) }, 
        { FName("DeltaTime"), FGuid(0x8893712E, 0x44DAB3DB, 0xDEB7BEB8, 0x4320AAC9) }, 
        { FName("FacingValue"), FGuid(0x3FC40477, 0x41A97900, 0xF97D9790, 0x5E34F399) }, 
        { FName("DamageInstigator"), FGuid(0x48DC1187, 0x4D919639, 0x6DBC7CB0, 0xCFEE91A0) }, 
        { FName("OwnersCamera"), FGuid(0x9B555163, 0x4B03FF55, 0xEFD0FD97, 0x639FDF2B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedPaint = false;
    class UWB_DamageIndicatorAnim_C* WB_DamageAnim;
    class UOverlay* OV_Circle;
    class UImage* Img_Arrow;
    class UImage* Image_1;
    class UBorder* b_Content;
    class UBorder* b_Color;
    class UWidgetAnimation* Loopo;
    class UWidgetAnimation* Fade;
    class UWidgetAnimation* TempFade;
    class UCameraComponent* OwnersCamera;
    class AActor* DamageInstigator;
    double FacingValue;
    double DeltaTime;
    bool bUseViewportSensitive;
    class UWB_DamageIndicatorArrow_C* SelfRef;

};