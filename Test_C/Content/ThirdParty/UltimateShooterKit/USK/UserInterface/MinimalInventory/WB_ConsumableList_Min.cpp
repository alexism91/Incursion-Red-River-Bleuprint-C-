class UWB_ConsumableList_Min_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_ConsumableList_Min.WB_ConsumableList_Min_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_ConsumableList_Min.WB_ConsumableList_Min_C:ExecuteUbergraph_WB_ConsumableList_Min'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("DropCount"), FGuid(0xE6DA91B8, 0x47C432D8, 0x9792EF9C, 0x3356FA48) }, 
        { FName("ItemToDrop"), FGuid(0x43123903, 0x4B9BBC2E, 0x6B90ED94, 0xDD296D71) }, 
        { FName("ConsumableWidgets"), FGuid(0x3B55CE53, 0x47ADAA83, 0xC0CD529E, 0xE4190AFD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_SingleConsumable_Min_C* WB_SingleConsumable_Min_2;
    class UWB_SingleConsumable_Min_C* WB_SingleConsumable_Min_1;
    class UWB_SingleConsumable_Min_C* WB_SingleConsumable_Min;
    class UWB_DropContainer_Min_C* DropContainer;
    class UUniformGridPanel* ConsumableGrid;
    TArray<class UWB_SingleConsumable_Min_C*>* ConsumableWidgets;
    class AActor* ItemToDrop;
    int DropCount;

};