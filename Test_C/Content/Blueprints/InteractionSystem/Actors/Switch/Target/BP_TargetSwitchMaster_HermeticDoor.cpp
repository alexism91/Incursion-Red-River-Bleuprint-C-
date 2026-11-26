class ABP_TargetSwitchMaster_HermeticDoor_C : public ABP_TargetSwitchMaster_C
{
public:
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Target/BP_TargetSwitchMaster_HermeticDoor.BP_TargetSwitchMaster_HermeticDoor_C:ComponentDelegateBinding_0'"
    };
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Target/BP_TargetSwitchMaster_HermeticDoor.BP_TargetSwitchMaster_HermeticDoor_C:Timeline_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Target/BP_TargetSwitchMaster_HermeticDoor.BP_TargetSwitchMaster_HermeticDoor_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Target/BP_TargetSwitchMaster_HermeticDoor.BP_TargetSwitchMaster_HermeticDoor_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Actors/Switch/Target/BP_TargetSwitchMaster_HermeticDoor.BP_TargetSwitchMaster_HermeticDoor_C:ExecuteUbergraph_BP_TargetSwitchMaster_HermeticDoor'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    float OpenTime = 10;
    double ClosedOffset = 20;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UNavModifierComponent* NavModifier;
    class UBP_NavLinkComponent_C* BP_NavLinkComponent;
    class UStaticMeshComponent* StaticMesh;
    class UTimelineComponent* Timeline;
    bool Open?;
    double StartingPosition;
private:
    float Timeline_NewTrack_0_439D4EBF4160731FB3DDCDBD8F8AB72F;
    byte Timeline__Direction_439D4EBF4160731FB3DDCDBD8F8AB72F;

};