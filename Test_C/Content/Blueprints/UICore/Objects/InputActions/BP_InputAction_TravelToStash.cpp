class UBP_InputAction_TravelToStash_C : public UIRRInputActionExecutable
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Objects/InputActions/BP_InputAction_TravelToStash.BP_InputAction_TravelToStash_C:ExecuteUbergraph_BP_InputAction_TravelToStash'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Tutorial = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/TutorialSystem/DT_Tutorials.DT_Tutorials'",
        "RowName": FName("Stash")
    };

};