class UW_ContextCanvas_C : public UContextCanvasWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextCanvas.W_ContextCanvas_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ContextCreated"), FGuid(0x08DE3A87, 0x450F41CE, 0xAE85889A, 0x9C04DA41) }, 
        { FName("Canvas"), FGuid(0x6D8D63ED, 0xC8B032AE, 0xAD8D7D5C, 0xEF2FD30B) }
    };
    class UWidgetBlueprintGeneratedClass* ContextMenuClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContextMenu.W_ContextMenu_C'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UCanvasPanel* Canvas;
    bool ContextCreated;

};