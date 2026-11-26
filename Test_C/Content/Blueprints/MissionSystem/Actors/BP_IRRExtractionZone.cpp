class ABP_IRRExtractionZone_C : public AIRRExtractionZoneActor
{
public:
    int32 NumReplicatedProperties = 1;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRExtractionZone.BP_IRRExtractionZone_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRExtractionZone.BP_IRRExtractionZone_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/BP_IRRExtractionZone.BP_IRRExtractionZone_C:ExecuteUbergraph_BP_IRRExtractionZone'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBlueprintGeneratedClass* FlareClass = "BlueprintGeneratedClass'Test_C/Content/Environment/Blueprints/Lights/BP_SignalFlare_Extract.BP_SignalFlare_Extract_C'";
    float FlareSearchRadius = 2000;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    class UBP_IRRExtractionComponent_C* BP_IRRExtractionComponent;
    class UBP_IRRMarkerComponent_C* BP_IRRMarkerComponent;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    class AActor* FlareRef;

};