class UHTNTask_ExecutePatrolPointActions_C : public UHTNTask_BlueprintBase
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/HTN/Tasks/HTNTask_ExecutePatrolPointActions.HTNTask_ExecutePatrolPointActions_C:ExecuteUbergraph_HTNTask_ExecutePatrolPointActions'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FBlackboardKeySelector CurrentPatrolPoint = {
        "AllowedTypes": {},
        "SelectedKeyName": FName("None"),
        "SelectedKeyType": nullptr,
        "SelectedKeyID": 65535,
        "bNoneIsAllowedValue": false
    };
    class ACharacter* Character;
    class AUPSPatrolPoint* PatrolPoint;
    TArray<struct FEnemyActionSelector*>* Actions;
    int ActionIndex;
    class UUPSAITask_ExecuteEnemyAction* Task;
    bool WasAborted;

};