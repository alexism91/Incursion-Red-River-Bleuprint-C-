class UW_OpenInventory_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Debug/W_OpenInventory.W_OpenInventory_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Debug/W_OpenInventory.W_OpenInventory_C:FadeInOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Debug/W_OpenInventory.W_OpenInventory_C:ExecuteUbergraph_W_OpenInventory'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedPaint = false;
    class UProgressBar* ProgressBar_65;
    class UWidgetAnimation* FadeInOut;

};