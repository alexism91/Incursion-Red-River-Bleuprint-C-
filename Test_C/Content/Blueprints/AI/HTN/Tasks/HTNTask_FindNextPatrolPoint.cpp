class UHTNTask_FindNextPatrolPoint_C : public UHTNTask_BlueprintBase
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/HTN/Tasks/HTNTask_FindNextPatrolPoint.HTNTask_FindNextPatrolPoint_C:ExecuteUbergraph_HTNTask_FindNextPatrolPoint'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UUPSPatrolComponent* PatrolComponent;
    class AUPSPatrolPoint* NextPoint;

};