class UBP_InputAction_TravelToGunsmith_C : public UIRRInputActionExecutable
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Objects/InputActions/BP_InputAction_TravelToGunsmith.BP_InputAction_TravelToGunsmith_C:ExecuteUbergraph_BP_InputAction_TravelToGunsmith'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Tutorial = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/TutorialSystem/DT_Tutorials.DT_Tutorials'",
        "RowName": FName("WeaponBench")
    };
    struct FGameplayTag HideoutUnitTag = {
        "TagName": FName("Mission.Hideout Unit.Gunsmith")
    };
    int32 MinLevel = 1;

};