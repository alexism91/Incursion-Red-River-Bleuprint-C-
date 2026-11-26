class ABP_Gunsmith_C : public ABP_HideoutUnit_Master_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/Gunsmith/BP_Gunsmith.BP_Gunsmith_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/Gunsmith/BP_Gunsmith.BP_Gunsmith_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/Gunsmith/BP_Gunsmith.BP_Gunsmith_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Hideout/Gunsmith/BP_Gunsmith.BP_Gunsmith_C:ExecuteUbergraph_BP_Gunsmith'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector DefaultOverviewOffset = FVector(0, 0, 0);
    struct FVector TargetLocation = FVector(0, 0, 0);
    struct FVector CurrentLocation = FVector(0, 0, 0);
    struct FRotator DefaultGunRotation = FRotator(0, 0, 0);
    struct FRotator SetWeaponRotate = FRotator(0, 0, 0);
    struct FTimerHandle TimerHandle = {
        "Handle": 0
    };
    struct FRotator DefaultCameraRotation = FRotator(0, 90, 0);
    struct FVector DefaultWeaponOffset = FVector(0, 0, 0);
    struct FGuid LocPresetUID = FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000);
    TArray<FName> Tags = {
        FName("Gunsmith")
    };
    class UChildActorComponent* PreviewActor;
    class UWidgetComponent* Marker_Gunsmith;
    class UBP_InventoryComponent_C* BP_GunsmithStash;
    class UInventoryComponent_Gunsmith* BP_GunsmithInventory;
    class UBP_InteractionTarget_C* BP_InteractionTarget_Gunsmith;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UChildActorComponent* ChildActor;
    class UW_IRR_Gunsmith_C* Widget Ref;
    bool WeaponSelectionFlipFlop;
    double TargetFov;
    double CurrentFov;
    double DefaultFOV;
    bool bRotateWeaponOnClicked?;
    class ABP_ItemInspectActor_Gunsmith_C* PreviewRef;

};