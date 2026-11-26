class UBP_InventoryDragDropOperation_C : public UItemDragDropOperation
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/BP_InventoryDragDropOperation.BP_InventoryDragDropOperation_C:ExecuteUbergraph_BP_InventoryDragDropOperation'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UAkAudioEvent* DefaultDropSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/UI/GUI_Inventory_Drop.GUI_Inventory_Drop'";
    class UAkAudioEvent* DefaultDragSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/UI/GUI_Inventory_Drag.GUI_Inventory_Drag'";

};