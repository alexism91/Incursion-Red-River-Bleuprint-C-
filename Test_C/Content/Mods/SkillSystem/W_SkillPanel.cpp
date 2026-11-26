class UW_SkillPanel_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Mods/SkillSystem/W_SkillPanel.W_SkillPanel_C:WidgetTree'";
    TMap<, > CookedPropertyGuids = {
    
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* Window;
    class UVerticalBox* Rows;
    class UCanvasPanel* Root;
    class UIRRTextBlock* Header;
};