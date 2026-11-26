class ABP_RaidTrader_C : public ARaidTrader
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_RaidTrader.BP_RaidTrader_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_RaidTrader.BP_RaidTrader_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_RaidTrader.BP_RaidTrader_C:ExecuteUbergraph_BP_RaidTrader'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UAkAudioEvent* Interacting Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/UI/GUI_RaidTrader_Interact.GUI_RaidTrader_Interact'";
    class UAkAudioEvent* Trade Sound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/UI/GUI_RaidTrader_Trade.GUI_RaidTrader_Trade'";
    class USceneComponent* SceneRoot = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_RaidTrader.Default__BP_RaidTrader_C:Root'";
    class UObject* Billboard = nullptr;
    class UIRRItemsPreset* StockPreset = "IRRItemsPreset'Test_C/Content/Blueprints/InventorySystem/Presets/Container/DA_Stash.DA_Stash'";
    class UIRRDefaultContainerSettings* StockLayout = "IRRDefaultContainerSettings'Test_C/Content/Blueprints/InventorySystem/Objects/DefaultContainerSettings/DA_RaidTraderContainerSettings.DA_RaidTraderContainerSettings'";
    struct FGameplayTagContainer AcceptedPlayerItems = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Weapon Crate")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Data Storage Crate")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Quest.Chemical Crate")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Items.Barter"))
    });
    TMap<struct FGameplayTag, struct FRaidTraderPriceOverride> PriceOverrides = {
        { {
            "TagName": FName("Inventory.Items.Quest.Chemical Crate")
        }, {
            "bOverrideHandInPrice": true,
            "HandInPrice": 800,
            "bOverrideBuyPrice": false,
            "BuyPrice": 0
        } }, 
        { {
            "TagName": FName("Inventory.Items.Quest.Data Storage Crate")
        }, {
            "bOverrideHandInPrice": true,
            "HandInPrice": 760,
            "bOverrideBuyPrice": false,
            "BuyPrice": 0
        } }, 
        { {
            "TagName": FName("Inventory.Items.Quest.Weapon Crate")
        }, {
            "bOverrideHandInPrice": true,
            "HandInPrice": 690,
            "bOverrideBuyPrice": false,
            "BuyPrice": 0
        } }
    };
    class UWidgetBlueprintGeneratedClass* InventoryWidget = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/Widgets/W_RaidTrader.W_RaidTrader_C'";
    class UClass* SessionClass = "Class'/Script/Test_C.RaidTraderSession'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/Trader/BP_RaidTrader.Default__BP_RaidTrader_C:Root'";
    class UIRROutfitComponent* IRROutfit;
    class USkeletalMeshComponent* SkeletalMesh;
    class UBP_SignificanceComponent_C* BP_SignificanceComponent;
    class UCameraComponent* Camera;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
    class UWidgetComponent* Marker;
    class UBP_InteractionTarget_C* BP_InteractionTarget;

};