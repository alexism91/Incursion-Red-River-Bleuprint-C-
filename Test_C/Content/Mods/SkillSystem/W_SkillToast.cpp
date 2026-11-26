class UW_SkillToast_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Mods/SkillSystem/W_SkillToast.W_SkillToast_C:WidgetTree'";
    TMap<, > CookedPropertyGuids = {
    
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* VB;
    class UIRRTextBlock* Title;
    class UCanvasPanel* Root;
    class UBorder* Card;
    class UIRRTextBlock* Body;
    class USizeBox* BarBox;
    class UProgressBar* Bar;
};