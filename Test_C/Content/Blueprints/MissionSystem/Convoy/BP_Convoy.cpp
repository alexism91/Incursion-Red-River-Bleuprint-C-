class ABP_Convoy_C : public AConvoy
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy.BP_Convoy_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy.BP_Convoy_C:ExecuteUbergraph_BP_Convoy'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float CruiseSpeed = 100;
    bool bDebugEscortFormation = true;
    class UBlueprintGeneratedClass* EscortGroupClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_ConvoyEscortGroup.BP_ConvoyEscortGroup_C'";
    struct FConvoyEscortSpawnSettings EscortSpawn = {
        "AllegianceId": FName("IGC"),
        "BotTypes": {
            {
                "BotTypeId": FName("Patrol"),
                "Weight": 1
            }
        },
        "BaseCount": 6
    };
    bool bSpawnEscortsOnStart = true;
    class UObject* Billboard = nullptr;
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy.Default__BP_Convoy_C:Root'";
    class UBP_IRRObjectiveComponent_C* BP_IRRObjectiveComponent;
    class UBP_DesignationComp_C* BP_DesignationComp;
    class UBP_IRRMarkerComponent_Mission_C* BP_IRRMarkerComponent_Mission;

};