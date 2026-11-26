class ABP_VendingMachine_C : public ABP_P_Furniture_C
{
public:
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C:DoorOpening_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_VendingMachine.BP_VendingMachine_C:ExecuteUbergraph_BP_VendingMachine'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor MachineColor = FLinearColor(0,156471, 0,352258, 0,395833, 1);
    TArray<class UStaticMesh*> PlanarItemMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Drink_Can1.SM_Drink_Can1'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Drink_Can2.SM_Drink_Can2'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Drink_Cup1.SM_Drink_Cup1'"
    };
    TArray<class UStaticMesh*> HangingItemMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Snack_Pack1.SM_Snack_Pack1'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Snack_Pack2.SM_Snack_Pack2'"
    };
    bool Activated = true;
    struct FLinearColor Color = FLinearColor(0,068713, 0,435683, 1, 1);
    class UStaticMeshComponent* SM_Vending_Machine_Door;
    class UTimelineComponent* DoorOpening;
    class UMaterialInstanceDynamic* LightMatInst;
    class UMaterialInstanceDynamic* MachineMatInst;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* PlanarItemHISMs;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* HangingItemHISMs;
private:
    float DoorOpening_DoorOpening_04209B76411FA5B036E5C0936AEC7029;
    byte DoorOpening__Direction_04209B76411FA5B036E5C0936AEC7029;

};