class UW_IRR_ErrorMessage_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_ErrorMessage.W_IRR_ErrorMessage_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_IRR_ErrorMessage.W_IRR_ErrorMessage_C:ExecuteUbergraph_W_IRR_ErrorMessage'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ErrorText"), FGuid(0x2D0DD796, 0x47500B09, 0xB46A76B7, 0x91D6DAE9) }, 
        { FName("IRRTextBlock_107"), FGuid(0x39411B55, 0x5EC93769, 0xB66B525D, 0xA7056C3B) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0x3F3F8FF8, 0xD0A332A8, 0xA1B3B667, 0xF2F0CF75) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ErrorText = FText("You have no map selected.");
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UIRRTextBlock* IRRTextBlock_107;

};