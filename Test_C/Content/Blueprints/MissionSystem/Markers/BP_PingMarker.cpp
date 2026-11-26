class ABP_PingMarker_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Markers/BP_PingMarker.BP_PingMarker_C:SimpleConstructionScript_0'";
    bool bAlwaysRelevant = true;
    bool bReplicates = true;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
    class USceneComponent* DefaultSceneRoot;
};