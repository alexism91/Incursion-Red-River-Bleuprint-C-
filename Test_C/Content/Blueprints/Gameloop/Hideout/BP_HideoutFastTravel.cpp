class ABP_HideoutFastTravel_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/Hideout/BP_HideoutFastTravel.BP_HideoutFastTravel_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Hideout/BP_HideoutFastTravel.BP_HideoutFastTravel_C:ExecuteUbergraph_BP_HideoutFastTravel'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float TravelTime = 0.6;
    class USceneComponent* DefaultSceneRoot;
    bool Traveling?;

};