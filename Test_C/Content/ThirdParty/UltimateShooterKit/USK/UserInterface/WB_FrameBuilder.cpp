class UWB_FrameBuilder_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_FrameBuilder.WB_FrameBuilder_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_FrameBuilder.WB_FrameBuilder_C:FlashAnimation_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_FrameBuilder.WB_FrameBuilder_C:ExecuteUbergraph_WB_FrameBuilder'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("DotColor"), FGuid(0x3C910398, 0x4C860479, 0xAE176980, 0x69263421) }, 
        { FName("DotSize"), FGuid(0x1A98AE8A, 0x4D7D554D, 0xB9A7BD9A, 0x673FEC1B) }, 
        { FName("AddPaddingToDots"), FGuid(0x9D7FC153, 0x4F9B3CF6, 0xCEBE49BC, 0x13BBD0CB) }, 
        { FName("Use Dots"), FGuid(0xCCC7433B, 0x41F40D5B, 0x515CEFA6, 0xAB15E51C) }, 
        { FName("Color"), FGuid(0x77455FE8, 0x4230C6E3, 0x94049194, 0xA2F45EB1) }, 
        { FName("Margin"), FGuid(0xAF775A00, 0x417FE0C4, 0x9AF0C38B, 0x55581765) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FMargin Margin = {
        "Left": 2,
        "Top": 2,
        "Right": 2,
        "Bottom": 2
    };
    struct FLinearColor Color = FLinearColor(1, 1, 1, 1);
    bool Use Dots = true;
    bool AddPaddingToDots = true;
    struct FVector2D DotSize = FVector2D(2, 2);
    struct FLinearColor DotColor = FLinearColor(1, 1, 1, 1);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class USizeBox* TopSizeBox;
    class USizeBox* TopCRightSizeBox;
    class UBorder* TopCRightBorder;
    class USizeBox* TopCLeftSizeBox;
    class UBorder* TopCLeftBorder;
    class UBorder* TopBorder;
    class USizeBox* RightSizeBox;
    class UBorder* RightBorder;
    class USizeBox* LeftSizeBox;
    class UBorder* LeftBorder;
    class UOverlay* Dots;
    class USizeBox* BottomSizeBox;
    class USizeBox* BottomCRightSizeBox;
    class UBorder* BottomCRightBorder;
    class USizeBox* BottomCLeftSizeBox;
    class UBorder* BottomCLeftBorder;
    class UBorder* BottomBorder;
    class UWidgetAnimation* FlashAnimation;

};