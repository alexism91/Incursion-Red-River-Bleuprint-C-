class UBP_IRRObjectie_UpgradeHideoutUnit_C : public UIRRMissionObjective
{
public:
    bool bShared = true;
    FText Description = FText("Use {x} to upgrade {y}.");
    class UWidgetBlueprintGeneratedClass* ActionWidgetClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/UI/General/W_ObjectiveActionWidget_Continue.W_ObjectiveActionWidget_Continue_C'";
    struct FIRRMissionVariable TargetVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
    class UBP_TargetData_HideoutUnit_C* TargetData = "BP_TargetData_HideoutUnit_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_UpgradeHideoutUnit.Default__BP_IRRObjectie_UpgradeHideoutUnit_C:BP_TargetData_HideoutUnit_C_0'";
    TArray<class UBP_Service_UpdateProgress_HideoutUnitUpgraded_C*> Services = {
        "BP_Service_UpdateProgress_HideoutUnitUpgraded_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjectie_UpgradeHideoutUnit.Default__BP_IRRObjectie_UpgradeHideoutUnit_C:BP_Service_UpdateProgress_HideoutUnitUpgraded_C_0'"
    };
    struct FIRRMissionVariable ProgressVariable = {
        "Type": EIRRMissionVariableType::Bool
    };
};