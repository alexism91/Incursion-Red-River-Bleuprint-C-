class UW_TerminalResponse_RequestLogin_C : public UIRRTerminalResponseWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/Response/W_TerminalResponse_RequestLogin.W_TerminalResponse_RequestLogin_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/Response/W_TerminalResponse_RequestLogin.W_TerminalResponse_RequestLogin_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/Response/W_TerminalResponse_RequestLogin.W_TerminalResponse_RequestLogin_C:ExecuteUbergraph_W_TerminalResponse_RequestLogin'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("RequestLoginCommand"), FGuid(0xA239B17B, 0x4CD61BA3, 0xD274FF90, 0x0C35E918) }, 
        { FName("Terminal Comp"), FGuid(0x1C17E116, 0x4352778A, 0xE9496285, 0xF14C2C10) }, 
        { FName("bUserEntered"), FGuid(0xC42F5379, 0x4F2E352C, 0xE882D5A8, 0xEE7734B4) }, 
        { FName("User"), FGuid(0x7EB919B6, 0x40E82C35, 0x3D04EBAE, 0x19E9E9E8) }, 
        { FName("PrintString"), FGuid(0xA9C90A6A, 0x45B69569, 0xCDD46E9B, 0x3DB9123A) }, 
        { FName("ResponseStringArray"), FGuid(0x4BAC58B2, 0x46F7FA34, 0x0CA3F690, 0x6B567790) }, 
        { FName("Duration"), FGuid(0xBBB76D99, 0x47A51A25, 0xFF00CE8D, 0x9FF1CC13) }, 
        { FName("Counter"), FGuid(0x66308DFB, 0x4B8D6E0B, 0x96F9E1AA, 0xEC29F1B7) }, 
        { FName("ResponseString"), FGuid(0xB879A2E1, 0x461FF943, 0x52B99C96, 0x5FD62446) }, 
        { FName("Text"), FGuid(0xE6B8AE5A, 0x40F225F2, 0x86A8D897, 0xFD3DF89D) }, 
        { FName("PasswordTextField"), FGuid(0xD2137B18, 0xEC1A3810, 0xAE7D3408, 0x39083C14) }, 
        { FName("TextBlock"), FGuid(0x6DF89B15, 0x9A473D22, 0x814C40E0, 0x318C42A7) }, 
        { FName("TextBlock_94"), FGuid(0x73F32AF1, 0xE77637D7, 0xAF502926, 0x41ADAB7B) }, 
        { FName("UserTextField"), FGuid(0xA11696F4, 0x9C623273, 0x90BE3B02, 0x6961016F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRTerminalCommand RequestLoginCommand = {
        "Keyword": FName("None"),
        "Aliases": {},
        "CommandTag": {
            "TagName": FName("None")
        },
        "Command": FText(""),
        "Argument": nullptr,
        "OnSuccessSequences": {},
        "OnFailSequences": {}
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UEditableText* UserTextField;
    class UTextBlock* TextBlock_94;
    class UTextBlock* TextBlock;
    class UEditableText* PasswordTextField;
    FText Text;
    FString ResponseString;
    int Counter;
    double Duration;
    TArray<FString> ResponseStringArray;
    FString PrintString;
    FText User;
    bool bUserEntered;
    class UIRRTerminalComponent* Terminal Comp;

};