class ABP_TactiNav_Communicator_X-7_C : public ABP_SkeletalMasterPickup_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    TArray<class UInputAxisKeyDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.BP_TactiNav_Communicator_X-7_C:ComponentDelegateBinding_0'",
        "InputKeyDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.BP_TactiNav_Communicator_X-7_C:InputKeyDelegateBinding_0'",
        "InputAxisDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.BP_TactiNav_Communicator_X-7_C:InputAxisDelegateBinding_0'",
        "InputAxisKeyDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.BP_TactiNav_Communicator_X-7_C:InputAxisKeyDelegateBinding_0'"
    };
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.BP_TactiNav_Communicator_X-7_C:Beep_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.BP_TactiNav_Communicator_X-7_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.BP_TactiNav_Communicator_X-7_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.BP_TactiNav_Communicator_X-7_C:ExecuteUbergraph_BP_TactiNav_Communicator_X-7'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Sensitivity = 0.25;
    bool CanMoveMouseUp = true;
    bool CanMoveMouseDown = true;
    TMap<double, int32> LEDsMap = {
        { 500, 5 }, 
        { 1000, 4 }, 
        { 1500, 3 }, 
        { 2000, 2 }, 
        { 2500, 1 }
    };
    struct FTimerHandle UpdateObjectiveFinderTimer = {
        "Handle": 0
    };
    struct FGameplayTag Inventory Tag = {
        "TagName": FName("Character.Abilities.Allowed.Interact")
    };
    struct FGameplayTag Interact Tag = {
        "TagName": FName("Character.Abilities.Active.Inventory Open")
    };
    bool SupportHiddenShadows = false;
    class UInventoryComponent* InventoryComponent = "InventoryComponent'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.Default__BP_TactiNav_Communicator_X-7_C:InventoryComponent'";
    class UPickUpComponent* PickUpComponent = "PickUpComponent'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/BP_TactiNav_Communicator_X-7.Default__BP_TactiNav_Communicator_X-7_C:PickupComponent'";
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true
    };
    class UAkComponent* Ak;
    class UStaticMeshComponent* LED_05;
    class UStaticMeshComponent* LED_04;
    class UStaticMeshComponent* LED_03;
    class UStaticMeshComponent* LED_02;
    class UStaticMeshComponent* LED_01;
    class UBoxComponent* ExtendedWidgetCollision;
    class UWidgetComponent* Widget;
    class USceneComponent* Z_Gimbal;
    class UWidgetInteractionComponent* WidgetInteraction;
    class UBP_GCPSComponent_C* BP_GCPSComponent;
    class UTimelineComponent* Beep;
    bool CanMoveMouseLeft;
    bool CanMoveMouseRight;
    TArray<class UMaterialInstanceDynamic*> LEDMaterials;
    TArray<class ABP_ResourceActor_C*> Resources;
    int LEDCount;
    bool Play Resource Sound;
private:
    float Beep_NewTrack_0_E89623E34405E13377D3A19A22034EAC;
    byte Beep__Direction_E89623E34405E13377D3A19A22034EAC;

};