class ABP_Convoy_UICS_C : public ABP_Convoy_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy_UICS.BP_Convoy_UICS_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy_UICS.BP_Convoy_UICS_C:InheritableComponentHandler'";
    TArray<struct FConvoyVehicleSlot> Formation = {
        {
            "VehicleClass": "BlueprintGeneratedClass'Test_C/Content/Blueprints/Vehicle/West_APC_Stryker/BP_West_APC_Stryker.BP_West_APC_Stryker_C'",
            "DistanceBehindLead": 0
        },
        {
            "VehicleClass": "BlueprintGeneratedClass'Test_C/Content/Blueprints/Vehicle/Truck_Semi_01/BP_Truck_Semi_01.BP_Truck_Semi_01_C'",
            "DistanceBehindLead": 1150
        },
        {
            "VehicleClass": "BlueprintGeneratedClass'Test_C/Content/Blueprints/Vehicle/West_Truck_M923/BP_West_Truck_M923.BP_West_Truck_M923_C'",
            "DistanceBehindLead": 3200
        }
    };
    float Acceleration = 10;
    float Deceleration = 10;
    bool bAutoStart = true;
    struct FConvoyEscortSpawnSettings EscortSpawn = {
        "AllegianceId": FName("UICS")
    };
    class UObject* Billboard = nullptr;
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_Convoy_UICS.Default__BP_Convoy_UICS_C:Root'";
    TArray<FName> Tags = {
        FName("QU_CONVOY_01")
    };
};