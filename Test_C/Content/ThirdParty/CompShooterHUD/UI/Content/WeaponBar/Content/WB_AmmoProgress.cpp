class UWB_AmmoProgress_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_AmmoProgress.WB_AmmoProgress_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/WeaponBar/Content/WB_AmmoProgress.WB_AmmoProgress_C:ExecuteUbergraph_WB_AmmoProgress'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ShineColor"), FGuid(0x5D5AF953, 0x48498EF2, 0xFA9B1299, 0x6C13C3CC) }, 
        { FName("ProgressColor"), FGuid(0x7B7B07C1, 0x4965CF87, 0x9CC8A597, 0xCD1FB14D) }, 
        { FName("FrameColor"), FGuid(0x86844EB6, 0x49D3C9ED, 0x183E519C, 0xDFAFB75F) }, 
        { FName("CurrentValue"), FGuid(0x280D3892, 0x4E8AA7C8, 0x8677EBB7, 0xF64FA702) }, 
        { FName("NewValue"), FGuid(0x980890F8, 0x4318E96C, 0x89D9B5AE, 0x29158AE6) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor FrameColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor ProgressColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor ShineColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedPaint = false;
    class USizeBox* SB_SliderBase;
    class USlider* S_Shine;
    class UImage* PB_Frame;
    class UProgressBar* PB_Base;
    class UImage* Image_195;
    class UBorder* b_Slider1;
    class UBorder* b_Shine;
    class UBorder* b_PBase;
    class UBorder* b_PB_Frame;
    double NewValue;
    double CurrentValue;

};