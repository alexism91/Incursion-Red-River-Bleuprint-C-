class UBP_IRRObjective_DeliverItem_C : public UIRRMissionObjective
{
public:
    struct FGuid ObjectiveId = FGuid(0xBD670254, 0x42AA703B, 0x8EBCBF85, 0x802BA441);
    FText Description = FText("Deliver {count} {targetdata}.");
    class UWidgetBlueprintGeneratedClass* ActionWidgetClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/UI/General/W_ObjectiveActionWidget_Deliver.W_ObjectiveActionWidget_Deliver_C'";
    class UBP_TargetData_Tag_C* TargetData = "BP_TargetData_Tag_C'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_DeliverItem.Default__BP_IRRObjective_DeliverItem_C:BP_TargetData_Item_C_0'";
    TArray<class UIRRMissionService_UpdateProgress*> Services = {
        "IRRMissionService_UpdateProgress'Test_C/Content/Blueprints/MissionSystem/Objects/Objectives/SubClasses/BP_IRRObjective_DeliverItem.Default__BP_IRRObjective_DeliverItem_C:IRRMissionService_UpdateProgress_0'"
    };
};