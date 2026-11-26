class ABP_QuestManager_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/Blueprints/BP_QuestManager.BP_QuestManager_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/Blueprints/BP_QuestManager.BP_QuestManager_C:ExecuteUbergraph_BP_QuestManager'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UBillboardComponent* Billboard;
    TArray<class UManager_QuestTarget_C*>* CurrentTargets;
    TArray<class ABP_QuestStartPoint_C*> StartPoints;

};