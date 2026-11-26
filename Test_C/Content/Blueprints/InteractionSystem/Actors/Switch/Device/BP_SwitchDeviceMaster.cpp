class ABP_SwitchDeviceMaster_C : public AActor
{
public:
    int32 NumReplicatedProperties = 1;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Device/BP_SwitchDeviceMaster.BP_SwitchDeviceMaster_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Device/BP_SwitchDeviceMaster.BP_SwitchDeviceMaster_C:ExecuteUbergraph_BP_SwitchDeviceMaster'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bReplicates = true;
    class UBP_GameplayTagsComponent_C* BP_GameplayTagsComponent;
    class UWidgetComponent* SwitchWidget;
    class UBP_InteractionTarget_C* BP_Switch;
    class USceneComponent* DefaultSceneRoot;
    TArray<TSoftObjectPtr<AActor>> TargetSwitchActor;
    bool Open?;

};