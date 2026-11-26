class ABP_LevelTrigger_GameplayEffectZone_C : public ABP_LevelTrigger_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_GameplayEffectZone.BP_LevelTrigger_GameplayEffectZone_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_GameplayEffectZone.BP_LevelTrigger_GameplayEffectZone_C:ExecuteUbergraph_BP_LevelTrigger_GameplayEffectZone'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FColor BrushColor = FColor(0, 0, 255, 255);
    float LineThickness = 100;
    FText DisplayLabel = FText("Gameplay Effect");
    class UTextRenderComponent* LabelComponent = "TextRenderComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_GameplayEffectZone.Default__BP_LevelTrigger_GameplayEffectZone_C:LabelComponent'";
    class UBoxComponent* CollisionComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_GameplayEffectZone.Default__BP_LevelTrigger_GameplayEffectZone_C:CollisionComp'";
    struct FActorTickFunction PrimaryActorTick = {
        "TickInterval": 20
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UBoxComponent* RootComponent = "BoxComponent'Test_C/Content/Blueprints/MissionSystem/Actors/Triggers/BP_LevelTrigger_GameplayEffectZone.Default__BP_LevelTrigger_GameplayEffectZone_C:CollisionComp'";
    class UBP_GameplayZoneEffectSourceComponent_C* BP_GameplayZoneEffectSourceComponent;

};