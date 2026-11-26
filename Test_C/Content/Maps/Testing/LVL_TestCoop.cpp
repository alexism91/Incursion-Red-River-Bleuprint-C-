class ALVL_TestCoop_C : public ALevelScriptActor
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Maps/Testing/LVL_TestCoop.LVL_TestCoop_C:ExecuteUbergraph_LVL_TestCoop'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    TSubclassOf<AActor> Level;

};