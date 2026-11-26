class UWB_DamageIndicator_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicator_Base.WB_DamageIndicator_Base_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicator_Base.WB_DamageIndicator_Base_C:ExecuteUbergraph_WB_DamageIndicator_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("AllArrows"), FGuid(0x6E5779B9, 0x431778FB, 0xB0827989, 0x6CCB388C) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Content;
    TMap<class AActor*, class UWB_DamageIndicatorArrow_C*>* AllArrows;

};