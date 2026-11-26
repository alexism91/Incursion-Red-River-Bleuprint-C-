class ABP_TutorialTrigger_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/TutorialSystem/BP_TutorialTrigger.BP_TutorialTrigger_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/TutorialSystem/BP_TutorialTrigger.BP_TutorialTrigger_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/TutorialSystem/BP_TutorialTrigger.BP_TutorialTrigger_C:ExecuteUbergraph_BP_TutorialTrigger'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Tutorial = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/TutorialSystem/DT_Tutorials.DT_Tutorials'",
        "RowName": FName("Laptop")
    };
    class UWidgetComponent* Widget;
    class UBillboardComponent* Billboard;
    class UBoxComponent* Box;

};