class ABP_ConvoyEscortGroup_C : public AIRRMovementGroup
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_ConvoyEscortGroup.BP_ConvoyEscortGroup_C:SimpleConstructionScript_0'";
    struct FIRRFormationShape FormationShape = {
        "Slots": {
            {
                "AlongOffset": 200,
                "LateralOffset": 400
            },
            {
                "AlongOffset": 200,
                "LateralOffset": -400
            },
            {
                "AlongOffset": 1000,
                "LateralOffset": 400
            },
            {
                "AlongOffset": 1000,
                "LateralOffset": -400
            },
            {
                "AlongOffset": 2000,
                "LateralOffset": -400
            },
            {
                "AlongOffset": 2000,
                "LateralOffset": 400
            },
            {
                "AlongOffset": 3000,
                "LateralOffset": 400
            },
            {
                "AlongOffset": 3000,
                "LateralOffset": -400
            }
        },
        "ExtraMemberSpacing": 600
    };
    class UBillboardComponent* BillboardComponent = "BillboardComponent'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_ConvoyEscortGroup.Default__BP_ConvoyEscortGroup_C:BillboardComponent'";
    class UBillboardComponent* RootComponent = "BillboardComponent'Test_C/Content/Blueprints/MissionSystem/Convoy/BP_ConvoyEscortGroup.Default__BP_ConvoyEscortGroup_C:BillboardComponent'";
};