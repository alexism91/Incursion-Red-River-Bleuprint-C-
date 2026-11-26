class ABP_Office_FileCabinet1_C : public ABP_P_Furniture_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Office_FileCabinet1.BP_Office_FileCabinet1_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Office_FileCabinet1.BP_Office_FileCabinet1_C:InheritableComponentHandler'";
    TArray<class UStaticMesh*> DeskItemMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Folder6.SM_Folder6'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Folder3.SM_Folder3'"
    };
    TArray<class UStaticMesh*> DeskMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Furnitures/SM_Office_Table1_4X.SM_Office_Table1_4X'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Furnitures/SM_Office_Table2_4X.SM_Office_Table2_4X'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Furnitures/SM_Office_Table3_4X.SM_Office_Table3_4X'"
    };
    bool RandomRotation = false;
    bool IsInteractable = false;
    class UStaticMeshComponent* TrashCan;
    class UStaticMeshComponent* FurnitureMesh3;
    class UStaticMeshComponent* FurnitureMesh2;
    class UStaticMeshComponent* FurnitureMesh1;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* DeskItemHISMs;

};