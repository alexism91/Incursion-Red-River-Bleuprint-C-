class ABP_OperationStartPoint_Interaction_C : public AIRROperationStartPoint_Interaction
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Operations/BP_OperationStartPoint_Interaction.BP_OperationStartPoint_Interaction_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Operations/BP_OperationStartPoint_Interaction.BP_OperationStartPoint_Interaction_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Operations/BP_OperationStartPoint_Interaction.BP_OperationStartPoint_Interaction_C:ExecuteUbergraph_BP_OperationStartPoint_Interaction'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<class UBlueprintGeneratedClass*> HookClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Actors/Operation/BP_OperationInteractionPoint_Master.BP_OperationInteractionPoint_Master_C'"
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    class USceneComponent* DefaultSceneRoot;

};