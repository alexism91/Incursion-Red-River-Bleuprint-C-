class UBP_IRRObjectie_Secure_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0x967D3629, 0x4B68F39C, 0xF281BFAE, 0xFDC7103D);
    FText Description = FText("Secure {item} inside the container at the marked position.");
    TArray<class UIRRSpawnData*> SpawnData = {
        "IRRSpawnData'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_Secure.Default__BP_IRRObjectie_Secure_C:IRRSpawnData_0'"
    };
    class UBP_TargetData_Tag_C* TargetData = "BP_TargetData_Tag_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_Secure.Default__BP_IRRObjectie_Secure_C:BP_TargetData_Tag_C_0'";
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_Secure.Default__BP_IRRObjectie_Secure_C:IRRMissionService_UpdateProgress_0'"
    };
};