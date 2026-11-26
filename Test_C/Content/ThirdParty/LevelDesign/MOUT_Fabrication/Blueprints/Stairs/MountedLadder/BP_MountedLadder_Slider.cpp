class ABP_MountedLadder_Slider_C : public AStaticMeshActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.BP_MountedLadder_Slider_C:ComponentDelegateBinding_0'"
    };
    TArray<class UStaticMeshComponent*> ComponentTemplates = {
        "StaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.BP_MountedLadder_Slider_C:NODE_AddStaticMeshComponent-2'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.BP_MountedLadder_Slider_C:NODE_AddStaticMeshComponent-5'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.BP_MountedLadder_Slider_C:NODE_AddStaticMeshComponent-6'",
        "StaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.BP_MountedLadder_Slider_C:NODE_AddStaticMeshComponent-16'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.BP_MountedLadder_Slider_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.BP_MountedLadder_Slider_C:ExecuteUbergraph_BP_MountedLadder_Slider'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector LadderHeight = FVector(0, 0, 150);
    double HeightFloat = 90;
    double AdditionHeightFloat = 90;
    int32 NumberOfLadderSegments = -1;
    bool AddTopCover = true;
    bool AddRungs = true;
    struct FTransform Top Cover Transform = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, 0, -20),
        "Scale3D": FVector(1, 1, 1)
    };
    class UStaticMeshComponent* StaticMeshComponent = "StaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.Default__BP_MountedLadder_Slider_C:StaticMeshComponent0'";
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Blueprints/Stairs/MountedLadder/BP_MountedLadder_Slider.Default__BP_MountedLadder_Slider_C:StaticMeshComponent0'";
    class UStaticMeshComponent* TopLadder;
    class UStaticMeshComponent* BottomLadder;
    class UArrowComponent* BottomLadderBoundsRef;
    class UBoxComponent* Box;
    class UArrowComponent* TopLadderBoundsRef;
    TArray<class UStaticMeshComponent*>* AddedLadderSegments;
    bool LadderAdjusted;
    TArray<class UStaticMeshComponent*>* AddedCoverSegments;
    class UStaticMeshComponent* TopCover;

};