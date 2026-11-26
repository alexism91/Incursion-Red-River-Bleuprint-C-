class UWB_ShooterHUD_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/WB_ShooterHUD.WB_ShooterHUD_C:WidgetTree'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UWB_WeaponBar_Container_C* WB_WeaponBar_Container_625;
    class UWB_TKC_Base_C* WB_TKC_Base;
    class UWB_Timer_C* WB_Timer;
    class UWB_PersonaKillCount_C* WB_PersonaKillCount;
    class UWB_Medals_Base_C* WB_Medals_Base;
    class UWB_KillMessage_C* WB_KillMessage;
    class UWB_IntPoints_Base_C* WB_IntPoints_Base;
    class UWB_HB_Container_C* WB_HB_Container;
    class UWB_DamageIndicator_Base_C* WB_DamageIndicator_Base;
    class UWB_DamageFeedback_C* WB_DamageFeedback;
    class UWB_ActionBar_Base_C* WB_ActionBar_Base;
    class UWB_Achievement_Base_C* WB_Achievement_Base;
    class UWB_AB_Container_C* WB_AB_Container;

};