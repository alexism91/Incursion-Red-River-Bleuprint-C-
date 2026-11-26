class ABP_LooseLoot_C : public ALooseLoot
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot.BP_LooseLoot_C:SimpleConstructionScript_0'";
    float SpawnChance = 0.5;
    class ULootGenerationSettings* LootSettings = "LootGenerationSettings'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot.Default__BP_LooseLoot_C:LootGenerationSettings_0'";
    struct FGameplayTagContainer LooseLootTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Loot.LooseLoot.Generic"))
    });
    class USceneComponent* Root = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot.Default__BP_LooseLoot_C:Root'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/InventorySystem/BaseActors/LooseLoot/BP_LooseLoot.Default__BP_LooseLoot_C:Root'";
};