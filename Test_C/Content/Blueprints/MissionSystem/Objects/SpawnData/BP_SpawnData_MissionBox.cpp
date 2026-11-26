class UBP_SpawnData_MissionBox_C : public UIRRSpawnData
{
public:
    FName SpawnTag = FName("Mission Box");
    int32 SpawnAmount = 1;
    struct FColor SpawnColor = FColor(0, 255, 0, 255);
    TArray<class UBP_SpawnPayload_AddItemToMissionBox_C*> SpawnPayloads = {
        "BP_SpawnPayload_AddItemToMissionBox_C'Test_C/Content/Blueprints/MissionSystem/Objects/SpawnData/BP_SpawnData_MissionBox.Default__BP_SpawnData_MissionBox_C:BP_SpawnPayload_AddItemToMissionBox_C_0'"
    };
};