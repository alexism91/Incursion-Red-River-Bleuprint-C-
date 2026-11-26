class UW_IRR_RequestBoxText_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_RequestBoxText.W_IRR_RequestBoxText_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_RequestBoxText.W_IRR_RequestBoxText_C:ExecuteUbergraph_W_IRR_RequestBoxText'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("New Text Style Set"), FGuid(0xC417598F, 0x4B8F8A9E, 0xAD2ACFB3, 0xD4EC59F9) }, 
        { FName("In Text"), FGuid(0x7269A9A2, 0x421FF456, 0xCCF64DAD, 0xF75966B2) }, 
        { FName("RichTextBlock_29"), FGuid(0x02C1C3EA, 0x4EBFA708, 0xD6345ABC, 0xD71BF96D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class URichTextBlock* RichTextBlock_29;
    FText In Text;
    class UDataTable* New Text Style Set;

};