class ABP_ItemPlacement_Jammer_C : public ABP_ItemPlacement_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement_Jammer.BP_ItemPlacement_Jammer_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemPlacement/BP_ItemPlacement_Jammer.BP_ItemPlacement_Jammer_C:InheritableComponentHandler'";
    struct FGameplayTag ItemTag = {
        "TagName": FName("Inventory.Items.Quest.Jammer")
    };
    class UAkAudioEvent* PlacingEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Reload_Shared_ClothFoley_Long.Reload_Shared_ClothFoley_Long'";
    class UAkAudioEvent* PlacedEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Jammer_Loop.Jammer_Loop'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};