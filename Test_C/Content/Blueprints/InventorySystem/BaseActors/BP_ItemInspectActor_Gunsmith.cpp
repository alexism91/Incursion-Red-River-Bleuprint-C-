class ABP_ItemInspectActor_Gunsmith_C : public AGunsmithInspectActor
{
public:
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.BP_ItemInspectActor_Gunsmith_C:WeaponRotationTimeline_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.BP_ItemInspectActor_Gunsmith_C:CameraTransformAndFOVTimeline_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.BP_ItemInspectActor_Gunsmith_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.BP_ItemInspectActor_Gunsmith_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.BP_ItemInspectActor_Gunsmith_C:ExecuteUbergraph_BP_ItemInspectActor_Gunsmith'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D CurrentOffset = FVector2D(0, 0);
    struct FVector2D TargetOffset = FVector2D(0, 0);
    float CurrentFOV = 30;
    struct FRotator TargetWeaponRotate = FRotator(0, 0, 0);
     OnTransitionFinished = ;
     OnTransitionStarted = ;
    float RotationThreshold = 1;
    struct FRotator TargetCameraRotation = FRotator(0, 0, 0);
    struct FRotator CurrentCameraRotation = FRotator(0, 0, 0);
    struct FRotator CurrentWeaponRotation = FRotator(0, 0, 0);
    struct FTimerHandle WeaponRotate_TimerHandle = {
        "Handle": 0
    };
    bool Init? = true;
    class USceneComponent* PivotComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.Default__BP_ItemInspectActor_Gunsmith_C:PivotComponent'";
    struct FGunsmithSlotLayoutSettings SlotLayout = {
        "MarkerSize": FVector2D(73, 73),
        "EllipseScale": FVector2D(1, 0,8)
    };
    class USceneComponent* SceneComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.Default__BP_ItemInspectActor_Gunsmith_C:SceneComponent'";
    class USceneComponent* ItemRootComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.Default__BP_ItemInspectActor_Gunsmith_C:ItemRootComponent'";
    class USpringArmComponent* SpringArm = "SpringArmComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.Default__BP_ItemInspectActor_Gunsmith_C:SpringArm'";
    class USceneCaptureComponent2D* CaptureComponent = "SceneCaptureComponent2D'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.Default__BP_ItemInspectActor_Gunsmith_C:Scene Capture Component'";
    bool bUseCustomRenderTarget = true;
    class UTextureRenderTarget2D* RenderTarget = "TextureRenderTarget2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Gunsmith/T_IRR_Gunsmith_RenderTarget.T_IRR_Gunsmith_RenderTarget'";
    bool bShouldPrepareSnap = false;
    class UDuplicateItemComponent* DuplicateItemComp = "DuplicateItemComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.Default__BP_ItemInspectActor_Gunsmith_C:DuplicateItemComponent'";
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true,
        "bStartWithTickEnabled": true
    };
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/BP_ItemInspectActor_Gunsmith.Default__BP_ItemInspectActor_Gunsmith_C:SceneComponent'";
    class UCameraComponent* Camera;
    class UTimelineComponent* CameraTransformAndFOVTimeline;
    class UTimelineComponent* WeaponRotationTimeline;
    float TargetFOV;
    bool bOverviewScreen;
    bool bRotating?;
private:
    float CameraTransformAndFOVTimeline_Alpha_E407AE5840AB64CB2C9418B2350369E7;
    byte CameraTransformAndFOVTimeline__Direction_E407AE5840AB64CB2C9418B2350369E7;
    float WeaponRotationTimeline_Alpha_95BBC9EA41FB1572762B36B06BEF4C76;
    byte WeaponRotationTimeline__Direction_95BBC9EA41FB1572762B36B06BEF4C76;

};