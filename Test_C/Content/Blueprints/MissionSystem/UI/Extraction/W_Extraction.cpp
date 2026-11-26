class UW_Extraction_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Extraction/W_Extraction.W_Extraction_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Extraction/W_Extraction.W_Extraction_C:ExecuteUbergraph_W_Extraction'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WidgetSwitcher;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur;
    class UIRRTextBlock* PlayersAlive;
    class UIRRTextBlock* PlayerInZone;
    class UIRRScaledSizeBox* IRRScaledSizeBox;
    class UW_IRR_CurrencyText_C* Countdown;

};