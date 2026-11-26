class ABP_Terminal_VLF_B_C : public ABP_TerminalMaster_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_Terminal_VLF_B.BP_Terminal_VLF_B_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InteractionSystem/Actors/Terminal/BP_Terminal_VLF_B.BP_Terminal_VLF_B_C:InheritableComponentHandler'";
    FName Reinforcemnt Spawner Tag = FName("Reinforcement B");
    struct FIRRSpawnReinforcementSettings Reinforcement = {
        "AllegianceId": FName("VLF")
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};