class UW_TerminalInput_C : public UIRRTerminalWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/W_TerminalInput.W_TerminalInput_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/W_TerminalInput.W_TerminalInput_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Terminal/W_TerminalInput.W_TerminalInput_C:ExecuteUbergraph_W_TerminalInput'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Terminal"), FGuid(0xB4AFF0E0, 0x418F663C, 0x79B46B99, 0x8B90AD00) }, 
        { FName("Command"), FGuid(0x8291AEBD, 0x492FEEA8, 0xD6DF02B5, 0xB95FE6D4) }, 
        { FName("Border_0"), FGuid(0x4EED2E36, 0xD57437E5, 0xACD9CAD9, 0x06390CF2) }, 
        { FName("HB"), FGuid(0x652AF486, 0xBB673938, 0x83C717DA, 0x065854B7) }, 
        { FName("MainDir"), FGuid(0x3F90D883, 0x5E943004, 0xA0C112BD, 0x098A79DF) }, 
        { FName("symbols_1"), FGuid(0xC8C04921, 0xE07A3116, 0xA30F856F, 0xF781A821) }, 
        { FName("TextField"), FGuid(0xF9CC3627, 0x0D9B31AC, 0xAFA59842, 0x3F6DBB70) }, 
        { FName("User"), FGuid(0xFEC3639C, 0xF96531DB, 0xB6D89263, 0xDF62F84D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* User;
    class UEditableText* TextField;
    class UTextBlock* symbols_1;
    class UTextBlock* MainDir;
    class UHorizontalBox* HB;
    class UBorder* Border_0;
    FName Command;
    class UBP_IRRTerminalComponent_C* Terminal;

};