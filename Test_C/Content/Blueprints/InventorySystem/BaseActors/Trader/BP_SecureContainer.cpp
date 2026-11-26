class ABP_SecureContainer_C : public ASecureContainer
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_SecureContainer.BP_SecureContainer_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_SecureContainer.BP_SecureContainer_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_SecureContainer.BP_SecureContainer_C:ExecuteUbergraph_BP_SecureContainer'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UAkAudioEvent* Opening Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/Player/Player_Footsteps/Player_Open_Chest.Player_Open_Chest'";
    class UAkAudioEvent* Fee Paid Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/UI/GUI_SecureContainer_FeePaid.GUI_SecureContainer_FeePaid'";
    class USceneComponent* SceneRoot = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_SecureContainer.Default__BP_SecureContainer_C:Root'";
    class UObject* Billboard = nullptr;
    int32 FeeAmount = 1000;
    struct FGameplayTag FeeItemTag = {
        "TagName": FName("Inventory.Items.Currency.Cash")
    };
    class UIRRDefaultContainerSettings* ContainerLayout = "IRRDefaultContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/DefaultContainerSettings/DA_SecureContainerSettings.DA_SecureContainerSettings'";
    class UWidgetBlueprintGeneratedClass* InventoryWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_SecureContainer.W_SecureContainer_C'";
    class UClass* SessionClass = "Class'/Script/Test_C.SecureContainerSession'";
    FSoftObjectPath InboxAuthor = FSoftObjectPath("/Game/Blueprints/MissionSystem/DataAssets/Factions/FANG/DAWN/DA_FANG_OBSERVER.DA_FANG_OBSERVER");
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_SecureContainer.Default__BP_SecureContainer_C:Root'";
    class UStaticMeshComponent* Cube;
    class UBP_InteractionTarget_C* BP_InteractionTarget;
    class UWidgetComponent* Marker;

};