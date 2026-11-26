class UW_TerminalResponse_Loading_C : public UIRRTerminalResponseWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/Response/W_TerminalResponse_Loading.W_TerminalResponse_Loading_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/Response/W_TerminalResponse_Loading.W_TerminalResponse_Loading_C:ExecuteUbergraph_W_TerminalResponse_Loading'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Fragmentation"), FGuid(0x90FAD699, 0x41DA8EF9, 0x7B953EA7, 0x83590217) }, 
        { FName("ProgressValue"), FGuid(0x5F26F237, 0x40E5906B, 0xDB79929D, 0x8F4492F7) }, 
        { FName("Finished"), FGuid(0x6D8FF85B, 0x4AE17EC1, 0xF8EB43AE, 0xEF30F075) }, 
        { FName("AddCharacter"), FGuid(0x1EA7B8D9, 0x4EE048E4, 0x048E95AA, 0x65414773) }, 
        { FName("LoadingText"), FGuid(0x5BAE8507, 0x487EF3A9, 0xA11E3190, 0x5948EAD4) }, 
        { FName("LoadedBars"), FGuid(0xFEB90729, 0x49307E7C, 0x1AB61298, 0xC8AC85B3) }, 
        { FName("Fail"), FGuid(0x56BBDFA9, 0x443F9DDB, 0x1A95CDBF, 0x9B722B6F) }, 
        { FName("PrintString"), FGuid(0x7D533AC7, 0x409648F6, 0xCE82C8B1, 0xB84F428F) }, 
        { FName("ResponseStringArray"), FGuid(0xD209E77E, 0x45B0E007, 0xB2CFFB94, 0xFA381EC0) }, 
        { FName("Duration"), FGuid(0x1753F3A6, 0x4F37015B, 0x85D34E88, 0x0D834EAB) }, 
        { FName("Counter"), FGuid(0xAA2DE244, 0x4CFA65E4, 0x88528E95, 0x36E7AA68) }, 
        { FName("ResponseString"), FGuid(0xEE13B159, 0x4DE360E4, 0xC3D62784, 0xF67CD1B5) }, 
        { FName("text"), FGuid(0x866B43F4, 0x2E31313F, 0xA480DF85, 0xE33E0913) }, 
        { FName("progress"), FGuid(0x4BB8EB2A, 0x86B63260, 0xA7C0220B, 0xFDF1B625) }, 
        { FName("progress_1"), FGuid(0xDB58A23D, 0x077335D1, 0x84211B29, 0x471F4F55) }, 
        { FName("ProgressBarWidget"), FGuid(0x5CF04C74, 0x0E793D22, 0x8895BA87, 0x8FF56758) }, 
        { FName("ProgressBarWidget_Loading"), FGuid(0x2FDE6B7D, 0xFFA438A9, 0xB7B60B64, 0x8ED74202) }, 
        { FName("text1"), FGuid(0x57592584, 0x3D1F35B3, 0x8A9B28F1, 0x04ECAE96) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FString LoadedBars = "████████████████████";
    int32 AddCharacter = 1;
    int32 Fragmentation = 50;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* text1;
    class UTextBlock* text;
    class UTextBlock* ProgressBarWidget_Loading;
    class UTextBlock* ProgressBarWidget;
    class UTextBlock* progress_1;
    class UTextBlock* progress;
    FText Text;
    FString ResponseString;
    int Counter;
    double Duration;
    TArray<FString> ResponseStringArray;
    FString PrintString;
    bool Fail;
    FString LoadingText;
    bool Finished;
    double ProgressValue;

};