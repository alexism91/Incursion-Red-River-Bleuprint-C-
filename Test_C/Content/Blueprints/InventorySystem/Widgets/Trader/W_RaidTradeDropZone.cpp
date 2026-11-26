class UW_RaidTradeDropZone_C : public URaidTradeDropZone
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/Trader/W_RaidTradeDropZone.W_RaidTradeDropZone_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/Trader/W_RaidTradeDropZone.W_RaidTradeDropZone_C:ExecuteUbergraph_W_RaidTradeDropZone'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("DragEnterHighlight"), FGuid(0x2A6F25F0, 0x49D90F76, 0xF4397A9C, 0x2E890C6C) }, 
        { FName("Highlight"), FGuid(0xB346B72F, 0x4B2F1098, 0x48E95A82, 0x23913BC1) }, 
        { FName("IRRTextBlock_58"), FGuid(0x9AF12E5F, 0x44773F71, 0x704F5998, 0x4791F54C) }, 
        { FName("W_IRR_Background_GridAndBlur"), FGuid(0x5E5BE728, 0x470CB522, 0x444EB091, 0xC2171D0E) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur;
    class UIRRTextBlock* IRRTextBlock_58;
    class UBorder* Highlight;
    class UBorder* DragEnterHighlight;

};