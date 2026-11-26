class UWB_AB_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ArmorBar/WB_AB_Base.WB_AB_Base_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ArmorBar/WB_AB_Base.WB_AB_Base_C:FadeInArmorBar_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ArmorBar/WB_AB_Base.WB_AB_Base_C:ExecuteUbergraph_WB_AB_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("DamageColor"), FGuid(0x2628A37B, 0x4248D966, 0x0540D283, 0xD625968E) }, 
        { FName("WB_DamageAnim"), FGuid(0x02228CFF, 0x42D35200, 0x1D169AB7, 0x8B159E47) }, 
        { FName("WB_ArmorAnim"), FGuid(0xD7DD5C6C, 0x47FF43D5, 0xE401108E, 0x6942748A) }, 
        { FName("WB_ArmorBar"), FGuid(0xB733C16C, 0x4BEAAC0F, 0x9C685597, 0xCA6A9651) }, 
        { FName("OnArmorBarFadedOut"), FGuid(0xEA41AE9D, 0x45C74B81, 0x60839C94, 0xE3E8CC46) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnArmorBarFadedOut = ;
    struct FLinearColor DamageColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_DamageAnim;
    class UOverlay* OV_ArmorBar;
    class UOverlay* OV_ArmorAnim;
    class UWidgetAnimation* FadeInArmorBar;
    class UWB_ArmorBar_C* WB_ArmorBar;
    class UWB_HealthAnim_C* WB_ArmorAnim;
    class UWB_DamageAnim_C* WB_DamageAnim;

};