class UBP_IRRMissionManager_C : public UIRRMissionManager
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Managers/BP_IRRMissionManager.BP_IRRMissionManager_C:ExecuteUbergraph_BP_IRRMissionManager'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false
    };
    TArray<class AActor*> LocActorsWithTag;
    class AActor* LocSpawnPos;
    int SpawnCount;

};