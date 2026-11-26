class UWB_RequestContainer_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/Overlays/WB_RequestContainer.WB_RequestContainer_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/Overlays/WB_RequestContainer.WB_RequestContainer_C:RequestBoxToggle_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/UltimateMenu/UserInterface/Examples/Overlays/WB_RequestContainer.WB_RequestContainer_C:ExecuteUbergraph_WB_RequestContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Button Padding"), FGuid(0x01322664, 0x4B8E09C8, 0x243D368B, 0xDE00B985) }, 
        { FName("Buttons"), FGuid(0xC608A65C, 0x43DE22CB, 0xED671FA4, 0xD1B98361) }, 
        { FName("OnButtonClicked"), FGuid(0xD5D8BED4, 0x40974AEE, 0x5E2DAA8F, 0xD499F95F) }, 
        { FName("RequestBoxVisible"), FGuid(0x00170675, 0x43FCE431, 0xA2A4228F, 0x33046589) }, 
        { FName("RequestBoxToggle"), FGuid(0x3484A056, 0xB62A30E7, 0xBDF92B02, 0xDF43286F) }, 
        { FName("ButtonBox"), FGuid(0x669167E3, 0xB57130B4, 0xAC433DF3, 0xA68ED196) }, 
        { FName("Container"), FGuid(0x90B82CEE, 0x29F83622, 0xB43FD697, 0x1A0EFC33) }, 
        { FName("Content"), FGuid(0x484CCF0E, 0xFFF83FA6, 0x9252518D, 0xBD29C23D) }, 
        { FName("ContentContainer"), FGuid(0x5C3E5B1D, 0x0A433833, 0x927B1D1E, 0xC70ADA1C) }, 
        { FName("IRRScaledSizeBox_0"), FGuid(0x459B394A, 0x81CE3F9B, 0x90E9792C, 0x01FE673B) }, 
        { FName("SizeBox_25"), FGuid(0xA59BE22C, 0x90863CCF, 0x9460C454, 0x99AA3A3F) }, 
        { FName("W_IRR_Background"), FGuid(0x5276509D, 0x6F203AC5, 0xBA2DED13, 0xBAE19A80) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x05B0243A, 0x486C309D, 0xB700CCCC, 0x862939D8) }, 
        { FName("W_WindowHeader"), FGuid(0x8DEF4632, 0xFE633E6B, 0xB90A9394, 0xBECD2550) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnButtonClicked = ;
    struct FMargin Button Padding = {
        "Left": 16,
        "Top": 16,
        "Right": 16,
        "Bottom": 16
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_WindowHeader_C* W_WindowHeader;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class UW_IRR_Background_C* W_IRR_Background;
    class USizeBox* SizeBox_25;
    class UIRRScaledSizeBox* IRRScaledSizeBox_0;
    class UOverlay* ContentContainer;
    class UOverlay* Content;
    class UOverlay* Container;
    class UHorizontalBox* ButtonBox;
    class UWidgetAnimation* RequestBoxToggle;
    bool RequestBoxVisible;
    TArray<class UIRRUserWidget*>* Buttons;

};