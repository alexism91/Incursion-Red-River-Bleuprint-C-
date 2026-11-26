class ABP_RadarTower_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Markers/BP_RadarTower.BP_RadarTower_C:SimpleConstructionScript_0'";
    bool bReplicates = true;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
    class USceneComponent* DefaultSceneRoot;
};