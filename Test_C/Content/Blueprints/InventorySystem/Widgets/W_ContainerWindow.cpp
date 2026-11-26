class UW_ContainerWindow_C : public UInventoryWindowWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContainerWindow.W_ContainerWindow_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_ContainerWindow.W_ContainerWindow_C:ExecuteUbergraph_W_ContainerWindow'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_WindowHeader_C* W_WindowHeader;
    class UVerticalBox* VBox;
    class UIRRScaledSizeBox* IRRScaledSizeBox;
    class UBorder* ContainerBox;

};