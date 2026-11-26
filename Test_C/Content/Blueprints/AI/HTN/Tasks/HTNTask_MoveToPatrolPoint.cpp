class UHTNTask_MoveToPatrolPoint_C : public UHTNTask_BlueprintBase
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/HTN/Tasks/HTNTask_MoveToPatrolPoint.HTNTask_MoveToPatrolPoint_C:ExecuteUbergraph_HTNTask_MoveToPatrolPoint'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FBlackboardKeySelector CurrentPatrolPoint = {
        "AllowedTypes": {},
        "SelectedKeyName": FName("None"),
        "SelectedKeyType": nullptr,
        "SelectedKeyID": 65535,
        "bNoneIsAllowedValue": false
    };
    class AUPSPatrolPoint* PatrolPoint;
    bool WasAborted;
    bool ReachPoint;
    class UUPSAITask_AIRotateToTarget* RotationTask;
    double AcceptanceRadius;
    class ACharacter* Character;
    TArray<class UUPSPatrolPointScript*> ScriptIntances;

};