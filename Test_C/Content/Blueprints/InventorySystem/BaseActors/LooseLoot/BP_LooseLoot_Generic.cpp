class ABP_LooseLoot_Generic_C : public ALooseLoot
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot_Generic.BP_LooseLoot_Generic_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot_Generic.BP_LooseLoot_Generic_C:InheritableComponentHandler'";
    float SpawnChance = 0.5;
    class ULootGenerationSettings* LootSettings = "LootGenerationSettings'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot_Generic.Default__BP_LooseLoot_Generic_C:LootGenerationSettings_0'";
    struct FGameplayTagContainer LooseLootTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Loot.LooseLoot.Generic"))
    });
    class USceneComponent* Root = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot_Generic.Default__BP_LooseLoot_Generic_C:Root'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot_Generic.Default__BP_LooseLoot_Generic_C:Root'";
};