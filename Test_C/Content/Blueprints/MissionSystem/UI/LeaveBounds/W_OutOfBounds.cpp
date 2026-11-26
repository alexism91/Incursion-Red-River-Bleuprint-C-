class UW_OutOfBounds_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/LeaveBounds/W_OutOfBounds.W_OutOfBounds_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/LeaveBounds/W_OutOfBounds.W_OutOfBounds_C:ExecuteUbergraph_W_OutOfBounds'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Countdown"), FGuid(0xD1672897, 0x260A352B, 0xA47E117A, 0xA0EB577B) }, 
        { FName("IRRScaledSizeBox"), FGuid(0xB20AB275, 0xBD7C3F00, 0xAF317E14, 0x99E66457) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRScaledSizeBox* IRRScaledSizeBox;
    class UImage* Image_106;
    class UImage* Image;
    class UW_IRR_CurrencyText_C* Countdown;

};