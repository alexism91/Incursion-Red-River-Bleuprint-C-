class ABP_ItemInspectActor_C : public AItemInspectActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor.BP_ItemInspectActor_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor.BP_ItemInspectActor_C:InheritableComponentHandler'";
    class USceneComponent* SceneComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor.Default__BP_ItemInspectActor_C:SceneComponent'";
    class USceneComponent* ItemRootComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor.Default__BP_ItemInspectActor_C:ItemRootComponent'";
    class USpringArmComponent* SpringArm = "SpringArmComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor.Default__BP_ItemInspectActor_C:SpringArm'";
    class USceneCaptureComponent2D* CaptureComponent = "SceneCaptureComponent2D'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor.Default__BP_ItemInspectActor_C:Scene Capture Component'";
    float FOV_Offset = 3;
    float FinishCaptureDelay = 0.5;
    class UDuplicateItemComponent* DuplicateItemComp = "DuplicateItemComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor.Default__BP_ItemInspectActor_C:DuplicateItemComponent'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor.Default__BP_ItemInspectActor_C:SceneComponent'";
    class URectLightComponent* RightClose;
    class URectLightComponent* BackRim;
    class URectLightComponent* LeftFar;
    class URectLightComponent* RightFar;
    class URectLightComponent* Fill_Top;
    class URectLightComponent* LeftClose;
    class URectLightComponent* Fill_Bottom;
};