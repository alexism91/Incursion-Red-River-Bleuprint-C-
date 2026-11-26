class UW_TerminalConsole_C : public UIRRTerminalConsoleWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/W_TerminalConsole.W_TerminalConsole_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/W_TerminalConsole.W_TerminalConsole_C:PowerOnOff_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/W_TerminalConsole.W_TerminalConsole_C:ExecuteUbergraph_W_TerminalConsole'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("AutoScrollTimer"), FGuid(0xBCD051E2, 0x49D3F38E, 0x0945F9BE, 0x5BF8F34D) }, 
        { FName("OnSequencesFinished"), FGuid(0xB56AFE9A, 0x4F6180E3, 0xFABA859C, 0x90119A8A) }, 
        { FName("ActiveSequence"), FGuid(0xDB7AD44E, 0x4D7DD4CC, 0x9DCC1FBA, 0x63BDC643) }, 
        { FName("SequenceIndex"), FGuid(0x57D29D3A, 0x4C0697A9, 0xD65C4CB9, 0x17B3A6E4) }, 
        { FName("Sequences"), FGuid(0xACDE0B28, 0x4073553A, 0xCA422C81, 0xB57FE010) }, 
        { FName("Terminal"), FGuid(0xC870ED3F, 0x4A683AA6, 0xC4EAF49E, 0x2FC1D2D1) }, 
        { FName("PowerOnOff"), FGuid(0x553CAFFC, 0xCAC735DB, 0x93E02478, 0x23FCA7D7) }, 
        { FName("Background"), FGuid(0x76153A64, 0x860A32FE, 0x97501C26, 0x8E2EB702) }, 
        { FName("BootContainer"), FGuid(0x68FD9F39, 0xC3B43ADE, 0x82EC9DDC, 0xCE865A62) }, 
        { FName("CommandLineCont"), FGuid(0xF1462C2D, 0xA7783E0C, 0x984F9F18, 0x90524102) }, 
        { FName("MainContainer"), FGuid(0xF934FBD2, 0x16203E14, 0xA9B7C034, 0x7FE4C42E) }, 
        { FName("ScrollBox"), FGuid(0x80FF93E6, 0x42843FC4, 0xBF753073, 0xBB5EC632) }, 
        { FName("ScrollBox_106"), FGuid(0xA0A572BF, 0x2D9A3CDD, 0x9F3D3085, 0x3119C367) }, 
        { FName("TGuideText"), FGuid(0x867D8482, 0x7B5C3127, 0x8B803F94, 0xC0B3D4CA) }, 
        { FName("TSystemArt"), FGuid(0xF19B9FFF, 0x52143B40, 0xB4FFE441, 0xF98BFEF2) }, 
        { FName("TVersionInfo"), FGuid(0x809FF4BE, 0xEA043B52, 0x83D60AD3, 0xD71EBFEB) }, 
        { FName("WidgetSwitcher_0"), FGuid(0x48518D20, 0x16073B46, 0x9C609E0A, 0xD89C7D24) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnSequencesFinished = ;
    struct FTimerHandle AutoScrollTimer = {
        "Handle": 0
    };
    bool bIsFocusable = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UTextBlock* TVersionInfo;
    class UTextBlock* TSystemArt;
    class UTextBlock* TGuideText;
    class UScrollBox* ScrollBox_106;
    class UScrollBox* ScrollBox;
    class UVerticalBox* MainContainer;
    class UVerticalBox* CommandLineCont;
    class UVerticalBox* BootContainer;
    class UImage* Background;
    class UWidgetAnimation* PowerOnOff;
    class UBP_IRRTerminalComponent_C* Terminal;
    TArray<class UIRRTerminalSequence*>* Sequences;
    int SequenceIndex;
    class UIRRTerminalSequence* ActiveSequence;

};