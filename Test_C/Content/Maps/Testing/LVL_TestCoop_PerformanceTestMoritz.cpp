class ALVL_TestCoop_PerformanceTestMoritz_C : public ALevelScriptActor
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Maps/Testing/LVL_TestCoop_PerformanceTestMoritz.LVL_TestCoop_PerformanceTestMoritz_C:ExecuteUbergraph_LVL_TestCoop_PerformanceTestMoritz'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    TSubclassOf<AActor> Level;

};