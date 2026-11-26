class ABP_Convoy_IGC_Boss_C : public ABP_Convoy_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy_IGC_Boss.BP_Convoy_IGC_Boss_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy_IGC_Boss.BP_Convoy_IGC_Boss_C:InheritableComponentHandler'";
    TArray<struct FConvoyVehicleSlot> Formation = {
        {
            "VehicleClass": "BlueprintGeneratedClass'Test_C/Content/Blueprints/Vehicle/T72/BP_T72.BP_T72_C'",
            "DistanceBehindLead": 0
        },
        {
            "VehicleClass": "BlueprintGeneratedClass'Test_C/Content/Blueprints/Vehicle/East_Command/BP_East_Command.BP_East_Command_C'",
            "DistanceBehindLead": 1350
        },
        {
            "VehicleClass": "BlueprintGeneratedClass'Test_C/Content/Blueprints/Vehicle/East_IMV_Tiger/BP_East_IMV_Tiger.BP_East_IMV_Tiger_C'",
            "DistanceBehindLead": 2500
        }
    };
    float Acceleration = 10;
    float Deceleration = 10;
    class UBlueprintGeneratedClass* EscortGroupClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_ConvoyEscortGroup_IGC_Boss.BP_ConvoyEscortGroup_IGC_Boss_C'";
    struct FConvoyEscortSpawnSettings EscortSpawn = {
        "BaseCount": 8,
        "FixedEscorts": {
            {
                "BotTypeId": FName("BossTorgovets"),
                "SlotIndex": 6
            }
        }
    };
    class UObject* Billboard = nullptr;
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy_IGC_Boss.Default__BP_Convoy_IGC_Boss_C:Root'";
    TArray<FName> Tags = {
        FName("QU_CONVOY_01")
    };
};