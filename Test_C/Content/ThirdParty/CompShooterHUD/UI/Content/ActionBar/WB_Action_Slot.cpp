class UWB_Action_Slot_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ActionBar/WB_Action_Slot.WB_Action_Slot_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ActionBar/WB_Action_Slot.WB_Action_Slot_C:Anim_FrameShine_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ActionBar/WB_Action_Slot.WB_Action_Slot_C:Anim_IconTransform_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ActionBar/WB_Action_Slot.WB_Action_Slot_C:Anim_Impact_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/ActionBar/WB_Action_Slot.WB_Action_Slot_C:ExecuteUbergraph_WB_Action_Slot'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* Text_SlotKey;
    class UImage* Image_0;
    class UImage* Icon;
    class UImage* FrameShineAnim;
    class UImage* FrameShine;
    class UImage* Frame;
    class UBorder* b_Text;
    class UBorder* b_Icon;
    class UBorder* b_FrameShineAnim;
    class UBorder* b_FrameShine;
    class UBorder* b_Frame;
    class UBorder* b_Fill;
    class UWidgetAnimation* Anim_FrameShine;
    class UWidgetAnimation* Anim_IconTransform;
    class UWidgetAnimation* Anim_Impact;

};