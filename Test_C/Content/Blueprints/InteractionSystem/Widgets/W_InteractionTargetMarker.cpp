class UW_InteractionTargetMarker_C : public UInteractionWidgetIcon
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InteractionSystem/Widgets/W_InteractionTargetMarker.W_InteractionTargetMarker_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/InteractionSystem/Widgets/W_InteractionTargetMarker.W_InteractionTargetMarker_C:Transition_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/InteractionSystem/Widgets/W_InteractionTargetMarker.W_InteractionTargetMarker_C:Blink_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Widgets/W_InteractionTargetMarker.W_InteractionTargetMarker_C:ExecuteUbergraph_W_InteractionTargetMarker'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FInteractionMarkerDisplaySetting InteractionMarkerDisplaySetting = {
        "MarkerSize": 0
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::Collapsed;
    class UImage* ProgressCircle;
    class USizeBox* ProgressButtonBox;
    class UImage* Icon;
    class UImage* Background_Fade;
    class UImage* Background;
    class UWidgetAnimation* Transition;
    class UWidgetAnimation* Blink;

};