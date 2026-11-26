class UW_ConsoleCommand_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/W_ConsoleCommand.W_ConsoleCommand_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Gameloop/W_ConsoleCommand.W_ConsoleCommand_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/W_ConsoleCommand.W_ConsoleCommand_C:ExecuteUbergraph_W_ConsoleCommand'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* Title;
    class USizeBox* IconSizer_1;
    class UBorder* Icon_1;
    class UW_IRR_MenuButton_C* Execute;
    class UTextBlock* Disclaimer;
    class UVerticalBox* Content;
    class UBorder* Container;
    class UEditableText* ConsoleCommand;
    class UW_IRR_MenuButton_C* Close;
    class UVerticalBox* ButtonList;

};