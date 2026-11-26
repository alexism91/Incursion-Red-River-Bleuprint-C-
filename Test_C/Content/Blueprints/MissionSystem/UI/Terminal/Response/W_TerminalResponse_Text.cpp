class UW_TerminalResponse_Text_C : public UIRRTerminalResponseWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/Response/W_TerminalResponse_Text.W_TerminalResponse_Text_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/Response/W_TerminalResponse_Text.W_TerminalResponse_Text_C:ExecuteUbergraph_W_TerminalResponse_Text'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("PrintString"), FGuid(0xB53682B1, 0x4B97BDE7, 0x726D8881, 0xA84FD281) }, 
        { FName("ResponseStringArray"), FGuid(0x6155028C, 0x4D9F8FA1, 0xA803AF90, 0x1978D495) }, 
        { FName("Duration"), FGuid(0xEA99C84E, 0x4EFC7496, 0x28C659B9, 0x82B2A66C) }, 
        { FName("Counter"), FGuid(0x3F346837, 0x4B632F9A, 0xC2B49DAE, 0xC6629EF6) }, 
        { FName("ResponseString"), FGuid(0x7EB034EF, 0x4123B815, 0x3FD4DA8F, 0x86E559E7) }, 
        { FName("Text"), FGuid(0x758F33D1, 0x469ED2F1, 0xFF038C9A, 0xB178C4C4) }, 
        { FName("TextBlock_94"), FGuid(0x9BF7F447, 0x617A310A, 0x9C8E13B9, 0x17BF7867) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* TextBlock_94;
    FText Text;
    FString ResponseString;
    int Counter;
    double Duration;
    TArray<FString> ResponseStringArray;
    FString PrintString;

};