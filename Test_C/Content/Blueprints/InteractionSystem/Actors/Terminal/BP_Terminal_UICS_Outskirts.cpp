class ABP_Terminal_UICS_Outskirts_C : public ABP_TerminalMaster_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_Terminal_UICS_Outskirts.BP_Terminal_UICS_Outskirts_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_Terminal_UICS_Outskirts.BP_Terminal_UICS_Outskirts_C:InheritableComponentHandler'";
    struct FIRRSpawnReinforcementSettings Reinforcement = {
        "AllegianceId": FName("UICS")
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};