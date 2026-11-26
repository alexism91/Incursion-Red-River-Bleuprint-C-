class UWB_HitIndicator_04_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/HitIndicators/WB_HitIndicator_04.WB_HitIndicator_04_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/HitIndicators/WB_HitIndicator_04.WB_HitIndicator_04_C:IndicatorAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/HitIndicators/WB_HitIndicator_04.WB_HitIndicator_04_C:ExecuteUbergraph_WB_HitIndicator_04'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Color"), FGuid(0x5BC4F254, 0x48D6D52F, 0x5EEBEC9E, 0x794BEF4A) }, 
        { FName("IsMoving"), FGuid(0x693C8F5C, 0x40AAEF5D, 0x331CFCB0, 0x8670423F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor Color = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Image_16;
    class UImage* Image_15;
    class UImage* Image_14;
    class UImage* Image_13;
    class UImage* Image_12;
    class UImage* Image_11;
    class UImage* Image_9;
    class UImage* HI1;
    class UBorder* b_Content;
    class UWidgetAnimation* IndicatorAnim;
    bool IsMoving;

};