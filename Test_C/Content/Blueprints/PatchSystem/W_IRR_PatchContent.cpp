class UW_IRR_PatchContent_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/PatchSystem/W_IRR_PatchContent.W_IRR_PatchContent_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/PatchSystem/W_IRR_PatchContent.W_IRR_PatchContent_C:ExecuteUbergraph_W_IRR_PatchContent'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ResetText"), FGuid(0xABA199C2, 0x47026B24, 0xC3FF0588, 0x2FCBD55B) }, 
        { FName("Descriptions"), FGuid(0x8F75260B, 0x4A50AFA3, 0x159F829A, 0xFC77EE97) }, 
        { FName("OnButtonClicked"), FGuid(0xF4702936, 0x4D3BEFF7, 0x9F515282, 0x4DF82983) }, 
        { FName("Border_0"), FGuid(0x0B8767B5, 0x42901326, 0xAED53581, 0x0E018DF8) }, 
        { FName("IRRNotesTextBlock_94"), FGuid(0xFF1B29C8, 0x490D478B, 0xAF73188E, 0x7038633E) }, 
        { FName("IRRTextBlock_107"), FGuid(0x002B6F5C, 0x43C90C9B, 0xE61D91B1, 0x0DAF8B2A) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0x44D2A108, 0x4F075FAC, 0x2FB3B1BC, 0x151E00CC) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnButtonClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UIRRTextBlock* IRRTextBlock_107;
    class UIRRNotesTextBlock* IRRNotesTextBlock_94;
    class UBorder* Border_0;
    FText Descriptions;
    FText ResetText;

};