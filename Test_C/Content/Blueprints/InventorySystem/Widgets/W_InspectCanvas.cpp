class UW_InspectCanvas_C : public UInspectCanvasWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InspectCanvas.W_InspectCanvas_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InspectCanvas.W_InspectCanvas_C:ExecuteUbergraph_W_InspectCanvas'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UWidgetBlueprintGeneratedClass* InspectWindowClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_InspectWindow.W_InspectWindow_C'";
    class UWidgetBlueprintGeneratedClass* ContainerWindowClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContainerWindow.W_ContainerWindow_C'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;

};