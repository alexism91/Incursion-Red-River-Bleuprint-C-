class UWB_FrameBuilder_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_FrameBuilder.WB_FrameBuilder_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_FrameBuilder.WB_FrameBuilder_C:FlashAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/MenuElements/WB_FrameBuilder.WB_FrameBuilder_C:ExecuteUbergraph_WB_FrameBuilder'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NotConstructed"), FGuid(0x49EA1FE2, 0x4D4400BF, 0xB06C01A4, 0xDDF30C53) }, 
        { FName("TopColor"), FGuid(0x9FD1559C, 0x41848B71, 0x8E06C2B7, 0x89E82A91) }, 
        { FName("BottomColor"), FGuid(0xB45B4FCF, 0x4EFA78A5, 0x5C0FEF86, 0xE269FC81) }, 
        { FName("LeftColor"), FGuid(0xBC55559A, 0x4159AD3A, 0xA371DBA5, 0x39EC1CB5) }, 
        { FName("RightColor"), FGuid(0xF72E0601, 0x4FAC40BC, 0x5945D7AA, 0x7AC07C20) }, 
        { FName("VerticalSize"), FGuid(0x22079E19, 0x43809079, 0x2E136189, 0xFB171A59) }, 
        { FName("HorizontalSize"), FGuid(0xC536903D, 0x4FB45243, 0x20B257A9, 0x6E9FDEC8) }, 
        { FName("OverallSize"), FGuid(0xBFFA3F59, 0x4F617796, 0x5CFDC696, 0xA8E0D730) }, 
        { FName("DisplayShadows"), FGuid(0xF7DCC6D3, 0x4AEB5499, 0x6895019C, 0x622451C1) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool DisplayShadows = true;
    struct FVector2D OverallSize = FVector2D(150, 150);
    struct FVector2D HorizontalSize = FVector2D(1, 1);
    struct FVector2D VerticalSize = FVector2D(1, 1);
    struct FLinearColor RightColor = FLinearColor(1, 1, 1, 1);
    struct FLinearColor LeftColor = FLinearColor(1, 1, 1, 1);
    struct FLinearColor BottomColor = FLinearColor(1, 1, 1, 1);
    struct FLinearColor TopColor = FLinearColor(1, 1, 1, 1);
    bool NotConstructed = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* V_R_B;
    class USizeBox* V_R;
    class UBorder* V_L_B;
    class USizeBox* V_L;
    class UBorder* TopFade;
    class UOverlay* ShadowContainer;
    class UBorder* RightFade;
    class UBorder* LeftFade;
    class UBorder* H_T_B;
    class USizeBox* H_T;
    class UBorder* H_B_B;
    class USizeBox* H_B;
    class USizeBox* Container;
    class UBorder* BottomFade;
    class UWidgetAnimation* FlashAnim;

};