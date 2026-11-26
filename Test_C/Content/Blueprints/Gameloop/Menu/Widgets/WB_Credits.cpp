class UWB_Credits_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/WB_Credits.WB_Credits_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/WB_Credits.WB_Credits_C:ExecuteUbergraph_WB_Credits'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("PatreonNames"), FGuid(0x3EECA4EA, 0x4FB5BAF4, 0x492A4FBF, 0x706C86E5) }, 
        { FName("Patreons"), FGuid(0xCCB06E9B, 0x43A59ADC, 0x55E600AF, 0xB27042E3) }, 
        { FName("Container"), FGuid(0x6E717E30, 0xD38C33B8, 0x8D8637B2, 0x10E31AC8) }, 
        { FName("PatreonsBox"), FGuid(0x1E8CA8D5, 0x2BFF3EA1, 0x9B9F9DD3, 0x90264BFF) }, 
        { FName("Scroller"), FGuid(0x0A186BA5, 0x499433CD, 0x95905FF4, 0x0459DE5B) }, 
        { FName("Sizer"), FGuid(0xD816E42E, 0x141635B2, 0xBA10B78A, 0xC9321B2F) }, 
        { FName("W_IRR_Background_Gradient"), FGuid(0x44280ABD, 0x363834B0, 0x9B2BF299, 0x14C7D854) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_Gradient_C* W_IRR_Background_Gradient;
    class USizeBox* Sizer;
    class UScrollBox* Scroller;
    class UVerticalBox* PatreonsBox;
    class UOverlay* Container;
    TArray<FString> Patreons;
    TArray<FName> PatreonNames;

};