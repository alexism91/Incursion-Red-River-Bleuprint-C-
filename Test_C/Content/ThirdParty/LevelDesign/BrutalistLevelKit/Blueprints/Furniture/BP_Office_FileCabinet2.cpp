class ABP_Office_FileCabinet2_C : public ABP_P_Furniture_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Office_FileCabinet2.BP_Office_FileCabinet2_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Office_FileCabinet2.BP_Office_FileCabinet2_C:InheritableComponentHandler'";
    TArray<class UStaticMesh*> DeskItemMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Folder6.SM_Folder6'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Folder3.SM_Folder3'"
    };
    bool RandomRotation = false;
    bool IsInteractable = false;
    class UStaticMeshComponent* FurnitureMesh4;
    class UStaticMeshComponent* FurnitureMesh3;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* DeskItemHISMs;

};