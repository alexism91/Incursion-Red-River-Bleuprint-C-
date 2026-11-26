class UW_LoadingScreenWidget_C : public UIRRLoadingScreenWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/LoadingScreen/W_LoadingScreenWidget.W_LoadingScreenWidget_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/LoadingScreen/W_LoadingScreenWidget.W_LoadingScreenWidget_C:BGAnim_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/LoadingScreen/W_LoadingScreenWidget.W_LoadingScreenWidget_C:FadeInOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/LoadingScreen/W_LoadingScreenWidget.W_LoadingScreenWidget_C:ExecuteUbergraph_W_LoadingScreenWidget'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("LoadingScreenData"), FGuid(0x4A581DC6, 0x4EC69640, 0x797C229D, 0x1CAA7344) }, 
        { FName("FirstTime?"), FGuid(0x506AA674, 0x4A50CC0F, 0x65B3408E, 0xEB32C9D4) }, 
        { FName("CycleTime"), FGuid(0x1D587B67, 0x45C2EBE4, 0x292048A8, 0x7851EB79) }, 
        { FName("HintIndex"), FGuid(0xCE5C8EDF, 0x4E2FE742, 0x0348FFA8, 0x901AD735) }, 
        { FName("BackgroundImageIndex"), FGuid(0xF1756D0B, 0x476805A5, 0xD6585AB0, 0x030CC812) }, 
        { FName("FadeInOut"), FGuid(0x0C83B239, 0xB6E23A5B, 0xB393B53E, 0x61FC7270) }, 
        { FName("BGAnim"), FGuid(0xBDF8EDBF, 0xD1D33F42, 0x9FA4BC4D, 0xEC69592E) }, 
        { FName("BGImage"), FGuid(0x2BF1D719, 0x42BD39E9, 0x946ABAFA, 0x05F672CA) }, 
        { FName("Container"), FGuid(0x2136D776, 0x86DD338F, 0xBFB13193, 0xE07576A6) }, 
        { FName("Content"), FGuid(0x8BB15D99, 0xE41A3D99, 0xA8D1581B, 0xD682E00A) }, 
        { FName("ContentFit"), FGuid(0xA71BD51A, 0x8FEB36B2, 0xB2CCA7F3, 0xC3B649C4) }, 
        { FName("ControlTutorialImage"), FGuid(0x0787269B, 0x9AEC3592, 0xA7F344F8, 0x96DD7B14) }, 
        { FName("HintDesc"), FGuid(0x053D0BC9, 0x49513C10, 0x92EC1438, 0xEF95E198) }, 
        { FName("HintTitle"), FGuid(0xF0554F0C, 0x1BD4347E, 0x9BAED3F1, 0xB67D0299) }, 
        { FName("Throbber_153"), FGuid(0x36266DFF, 0x30223FA7, 0xB4BC78CF, 0x944F8F51) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float CycleTime = 10;
    bool FirstTime? = true;
    struct FIRRLoadingScreenData LoadingScreenData = {
        "bWaitForManualStop": false,
        "bShowControlTutorial": true,
        "Backgrounds": {},
        "Hints": {}
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::Visible;
    class UThrobber* Throbber_153;
    class UIRRTextBlock* HintTitle;
    class UIRRTextBlock* HintDesc;
    class UImage* ControlTutorialImage;
    class UOverlay* ContentFit;
    class UBorder* Content;
    class UOverlay* Container;
    class UImage* BGImage;
    class UWidgetAnimation* BGAnim;
    class UWidgetAnimation* FadeInOut;
    int BackgroundImageIndex;
    int HintIndex;

};