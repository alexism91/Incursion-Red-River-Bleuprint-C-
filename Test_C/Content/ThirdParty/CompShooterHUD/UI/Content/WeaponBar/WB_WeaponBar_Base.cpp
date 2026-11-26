class UWB_WeaponBar_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/WB_WeaponBar_Base.WB_WeaponBar_Base_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/WB_WeaponBar_Base.WB_WeaponBar_Base_C:FadeInWeaponBar_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/WB_WeaponBar_Base.WB_WeaponBar_Base_C:ExecuteUbergraph_WB_WeaponBar_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("AnimColor"), FGuid(0xDAAEA64A, 0x42AF5B35, 0x84417FB2, 0x52BA0AC7) }, 
        { FName("DamageColor"), FGuid(0x2628A37B, 0x4248D966, 0x0540D283, 0xD625968E) }, 
        { FName("WB_WeaponBarAnim"), FGuid(0xD7DD5C6C, 0x47FF43D5, 0xE401108E, 0x6942748A) }, 
        { FName("WB_WeaponBar"), FGuid(0xB733C16C, 0x4BEAAC0F, 0x9C685597, 0xCA6A9651) }, 
        { FName("OnWeaponBarFadedOut"), FGuid(0xEA41AE9D, 0x45C74B81, 0x60839C94, 0xE3E8CC46) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnWeaponBarFadedOut = ;
    struct FLinearColor DamageColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor AnimColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_WeaponBarAnim;
    class UOverlay* OV_WeaponBar;
    class UWidgetAnimation* FadeInWeaponBar;
    class UWB_WeaponBar_C* WB_WeaponBar;
    class UWB_WeaponBarAnim_C* WB_WeaponBarAnim;

};