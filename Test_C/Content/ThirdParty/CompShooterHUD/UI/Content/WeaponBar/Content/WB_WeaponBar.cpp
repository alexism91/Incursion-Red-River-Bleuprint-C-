class UWB_WeaponBar_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_WeaponBar.WB_WeaponBar_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_WeaponBar.WB_WeaponBar_C:ShineLoop_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_WeaponBar.WB_WeaponBar_C:WeaponFadeAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_WeaponBar.WB_WeaponBar_C:WeaponNameFadeAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_WeaponBar.WB_WeaponBar_C:AmmoTextAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_WeaponBar.WB_WeaponBar_C:MaxAmmoTextAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_WeaponBar.WB_WeaponBar_C:InfiniteIconLoop_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_WeaponBar.WB_WeaponBar_C:ExecuteUbergraph_WB_WeaponBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ImpactColor"), FGuid(0xFD487EF6, 0x470C5376, 0x109A1D8C, 0x05CDFD20) }, 
        { FName("AmmoType"), FGuid(0x71DBE6EF, 0x404D2A69, 0xB9DAD089, 0x51028EDF) }, 
        { FName("bUseInfiniteAmmo"), FGuid(0x3C7FCC0E, 0x46A18B2B, 0x7A3218AC, 0xD1225D4E) }, 
        { FName("StackSize"), FGuid(0x9DD7AB26, 0x4F65E2F6, 0x5D220096, 0xF72DC993) }, 
        { FName("CurrentMaxAmmo"), FGuid(0xA1170106, 0x4ECD0DFD, 0x7A88248E, 0x142F8D8C) }, 
        { FName("CurrentAmmo"), FGuid(0xD2F3BB1E, 0x49D2EB05, 0x51AF4286, 0x0E955ED8) }, 
        { FName("WeaponTextVisible"), FGuid(0xAF441E7A, 0x44FC8B14, 0xA52259A3, 0x0629D74E) }, 
        { FName("WeaponName"), FGuid(0xA38F11D2, 0x4B312402, 0xD6F1ECBA, 0x92E7E2CE) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor ImpactColor = FLinearColor(1, 0, 0, 1);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WS_MaxAmmo;
    class UWidgetSwitcher* WS_Ammo;
    class UWB_AmmoProgress_C* WB_AmmoProgress;
    class UTextBlock* Text_WeaponName;
    class UTextBlock* Text_Value_Anim;
    class UTextBlock* Text_Value;
    class UTextBlock* Text_Slash;
    class UTextBlock* Text_MaxValue_Anim;
    class UTextBlock* Text_MaxValue;
    class USizeBox* SB_Icon3;
    class USizeBox* SB_Icon2;
    class USizeBox* SB_Icon1;
    class UOverlay* OV_Icon3;
    class UOverlay* OV_Icon2;
    class UOverlay* OV_Icon1;
    class UImage* InfiniteIcon2;
    class UImage* InfiniteAmmoIcon;
    class UImage* Img_Weapon;
    class UImage* Img_Frame_Shine;
    class UImage* Img_Frame_Base;
    class UHorizontalBox* HB_AmmoIcons;
    class UBorder* b_WeaponIcon;
    class UWidgetAnimation* ShineLoop;
    class UWidgetAnimation* WeaponFadeAnim;
    class UWidgetAnimation* WeaponNameFadeAnim;
    class UWidgetAnimation* AmmoTextAnim;
    class UWidgetAnimation* MaxAmmoTextAnim;
    class UWidgetAnimation* InfiniteIconLoop;
    FString WeaponName;
    bool WeaponTextVisible;
    int CurrentAmmo;
    int CurrentMaxAmmo;
    int StackSize;
    bool bUseInfiniteAmmo;
    E_AmmoType AmmoType;

};