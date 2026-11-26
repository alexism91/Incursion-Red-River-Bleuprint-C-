class UWB_Interaction_Widget_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_Interaction_Widget.WB_Interaction_Widget_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_Interaction_Widget.WB_Interaction_Widget_C:ExecuteUbergraph_WB_Interaction_Widget'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* InteractionText;

};