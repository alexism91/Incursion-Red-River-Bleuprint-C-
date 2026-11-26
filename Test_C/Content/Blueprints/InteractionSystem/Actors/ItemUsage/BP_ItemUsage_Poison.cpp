class ABP_ItemUsage_Poison_C : public ABP_ItemUsage_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemUsage/BP_ItemUsage_Poison.BP_ItemUsage_Poison_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/ItemUsage/BP_ItemUsage_Poison.BP_ItemUsage_Poison_C:InheritableComponentHandler'";
    struct FGameplayTag ItemTag = {
        "TagName": FName("Inventory.Items.Quest.Poison")
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};