class UW_InventorySlot_C : public USlotWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventorySlot.W_InventorySlot_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InventorySlot.W_InventorySlot_C:ExecuteUbergraph_W_InventorySlot'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("PointerEvent"), FGuid(0xADE38E07, 0x47313AD1, 0x3FC96480, 0x25C652CC) }, 
        { FName("SlotOffset"), FGuid(0x15BC7BBB, 0x4639FC42, 0x6DD3C0B8, 0x6389515E) }, 
        { FName("Enable"), FGuid(0x83EEA297, 0x4BD3E56A, 0xCBBD0389, 0xA7A0C445) }, 
        { FName("Disabled"), FGuid(0x4199B0E2, 0x7E763BDC, 0x978C9F57, 0xE7E5033F) }, 
        { FName("Highlight"), FGuid(0x48E62259, 0x59383A8B, 0x84183073, 0xF8EF17D8) }, 
        { FName("SlotBackground"), FGuid(0x87284035, 0xB8D23E58, 0xB3A60890, 0xA277AAC9) }, 
        { FName("SlotSize"), FGuid(0x412255F2, 0xE7D03FAF, 0x833E82C0, 0x7B905707) }, 
        { FName("TextBlock_48"), FGuid(0xE66E795A, 0x7A853FA0, 0xA625EA5F, 0x8E925DDB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D SlotOffset = FVector2D(-1, 0);
    struct FPointerEvent PointerEvent = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Cursor = EMouseCursor::Hand;
    class UTextBlock* TextBlock_48;
    class USizeBox* SlotSize;
    class UBorder* SlotBackground;
    class UBorder* Highlight;
    class UBorder* Disabled;
    bool Enable;

};