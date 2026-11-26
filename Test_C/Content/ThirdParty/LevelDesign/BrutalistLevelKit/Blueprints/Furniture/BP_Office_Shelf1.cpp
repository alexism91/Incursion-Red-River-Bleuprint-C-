class ABP_Office_Shelf1_C : public ABP_P_Furniture_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Office_Shelf1.BP_Office_Shelf1_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Blueprints/Furniture/BP_Office_Shelf1.BP_Office_Shelf1_C:InheritableComponentHandler'";
    TArray<class UStaticMesh*> DeskItemMeshes = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Folder6.SM_Folder6'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_File_Pocket7.SM_File_Pocket7'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_Folder7.SM_Folder7'"
    };
    bool RandomRotation = false;
    double SocketMeshRndMinRotation = -5;
    double SocketMeshRndMaxRotation = 5;
    bool IsInteractable = false;
    TArray<class UHierarchicalInstancedStaticMeshComponent*>* DeskItemHISMs;

};