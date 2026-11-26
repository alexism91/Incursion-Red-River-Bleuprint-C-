class ABP_QuestStartPoint_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/Blueprints/BP_QuestStartPoint.BP_QuestStartPoint_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/Blueprints/BP_QuestStartPoint.BP_QuestStartPoint_C:ExecuteUbergraph_BP_QuestStartPoint'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UTextRenderComponent* TextRender;
    class UArrowComponent* Arrow;
    class USceneComponent* Scene;
    class UCapsuleComponent* Capsule;
    FName StartPointName;
    class ABP_QuestManager_C* QuestManager;

};