class UWB_HealthBar_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Content/WB_HealthBar.WB_HealthBar_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Content/WB_HealthBar.WB_HealthBar_C:ShineLoop_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Content/WB_HealthBar.WB_HealthBar_C:FullHealthTextAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Content/WB_HealthBar.WB_HealthBar_C:HealthTextAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Content/WB_HealthBar.WB_HealthBar_C:ExecuteUbergraph_WB_HealthBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("RemoveHealthColor"), FGuid(0xFC9354DA, 0x4A89D33C, 0x87C61598, 0x24A74EB6) }, 
        { FName("HealthTextColor"), FGuid(0x82F0510B, 0x4772D12B, 0x9230ECA9, 0xD2A2A096) }, 
        { FName("CurrentMaxHealthFValue"), FGuid(0x4FB1E019, 0x435A6CC7, 0x7B2FB998, 0xDD057222) }, 
        { FName("bMaxHealthSensitive"), FGuid(0xFBEF3EBF, 0x4864CCD9, 0xFDBEB695, 0x013E6C4F) }, 
        { FName("MaxHealthValue"), FGuid(0x8F58F254, 0x4DD5B551, 0xCAAA1FBD, 0x8CA3ADC8) }, 
        { FName("CurrentHealthFValue"), FGuid(0xAA58D040, 0x4A9555A9, 0xFEE7038C, 0xD72DB53B) }, 
        { FName("HealthValue"), FGuid(0xA9E70CD3, 0x4356E71B, 0x29F49795, 0xC65EFF64) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor HealthTextColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor RemoveHealthColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedPaint = false;
    class UWB_HealthProgress_C* WB_ValueProgress;
    class UWB_HealthIcon_C* WB_HealthIcon;
    class UTextBlock* Text_Value_Anim;
    class UTextBlock* Text_Value;
    class UTextBlock* Text_Slash;
    class UTextBlock* Text_FullValue_Anim;
    class UTextBlock* Text_FullValue;
    class UOverlay* OV_IconAnim;
    class UOverlay* OV_Icon;
    class UImage* Img_Frame_Shine;
    class UImage* Img_Frame_Base;
    class UImage* Image_0;
    class UWidgetAnimation* ShineLoop;
    class UWidgetAnimation* FullHealthTextAnim;
    class UWidgetAnimation* HealthTextAnim;
    int HealthValue;
    double CurrentHealthFValue;
    int MaxHealthValue;
    bool bMaxHealthSensitive;
    double CurrentMaxHealthFValue;

};