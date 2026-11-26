class UW_InteractionText_C : public UInteractionWidgetText
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InteractionSystem/Widgets/W_InteractionText.W_InteractionText_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InteractionSystem/Widgets/W_InteractionText.W_InteractionText_C:FadeInOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Widgets/W_InteractionText.W_InteractionText_C:ExecuteUbergraph_W_InteractionText'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FadeInOut"), FGuid(0x355F162C, 0x32A03B08, 0xA78BE491, 0x4F911CE5) }, 
        { FName("IRRScaledSizeBox_0"), FGuid(0x7C0E85DA, 0x413A33F3, 0xD8016288, 0x3136766A) }, 
        { FName("Text"), FGuid(0x4126FEDB, 0x761130F9, 0x87E3B811, 0xA8DCEF20) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class URichTextBlock* Text;
    class UIRRScaledSizeBox* IRRScaledSizeBox_0;
    class UWidgetAnimation* FadeInOut;

};