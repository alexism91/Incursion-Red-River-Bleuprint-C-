class ABP_Terminal_FANG_C : public ABP_TerminalMaster_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_Terminal_FANG.BP_Terminal_FANG_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_Terminal_FANG.BP_Terminal_FANG_C:InheritableComponentHandler'";
    class UObject* Alarm Start = nullptr;
    class UObject* Alarm Stop = nullptr;
    struct FIRRSpawnReinforcementSettings Reinforcement = {
        "bEnabled": false,
        "AllegianceId": FName("UICS")
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UChildActorComponent* ChildActor;
};