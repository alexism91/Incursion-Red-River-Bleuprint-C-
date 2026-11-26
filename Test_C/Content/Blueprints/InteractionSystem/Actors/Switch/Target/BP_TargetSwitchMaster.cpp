class ABP_TargetSwitchMaster_C : public AActor
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Target/BP_TargetSwitchMaster.BP_TargetSwitchMaster_C:ComponentDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Target/BP_TargetSwitchMaster.BP_TargetSwitchMaster_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Target/BP_TargetSwitchMaster.BP_TargetSwitchMaster_C:ExecuteUbergraph_BP_TargetSwitchMaster'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bReplicates = true;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UBP_IRRMessageComponent_C* BP_IRRMessageComponent;
    class USceneComponent* DefaultSceneRoot;

};