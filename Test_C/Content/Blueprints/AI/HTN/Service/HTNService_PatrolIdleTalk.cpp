class UHTNService_PatrolIdleTalk_C : public UHTNService_BlueprintBase
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/HTN/Service/HTNService_PatrolIdleTalk.HTNService_PatrolIdleTalk_C:ExecuteUbergraph_HTNService_PatrolIdleTalk'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Voice Line Tag = {
        "TagName": FName("AI.Bark.Idle")
    };
    double Close Friend Chance = 65;
    double Close Distance = 800;
    double Mid Friend Chance = 55;
    double Mid Distance = 1600;
    double Far Friend Chance = 40;
    float TickInterval = 1.5;
    float TickIntervalRandomDeviation = 0.5;
    FString NodeName = "Idle Talk";

};