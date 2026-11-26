class ABP_Destructable_FoodCrate_C : public AB_DestructionSystemActor_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Gameplay/Destructables/BP_Destructable_FoodCrate.BP_Destructable_FoodCrate_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Gameplay/Destructables/BP_Destructable_FoodCrate.BP_Destructable_FoodCrate_C:InheritableComponentHandler'";
    int32 StartingHP = 1;
    TArray<struct FDestructionSystemActorState> States = {
        {
            "Name_19_2BE61E7B40AD46D2A466EDAF25581C97": FText("InitialState"),
            "StaticMesh_23_A33EC4A442C5B66F56FA4C9E68B24E54": "StaticMesh'Test_C/Content/ThirdParty/Military_VOL8_Supplies/Meshes/SM_Food_Container_02a_d.SM_Food_Container_02a_d'",
            "TransitionParticle_26_47357C5E4A72758D76655E9BC31F192E": nullptr,
            "TransitionSound_27_82EE17A04B65AECADFE0F3B04B1B5458": nullptr,
            "HP_15_3864D4F44D72A6B72DB6D2AA241E94E6": 1
        }
    };
    class UNiagaraSystem* DeathParticle = "NiagaraSystem'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Environment/Particles/P_Explosion_Converted.P_Explosion_Converted'";
    int32 CurrentStateHP = 100;
    bool bMakeLastStatePermanent = false;
    int32 CurrentState = 0;
    int32 LastCSStartingHP = 100;
    TArray<class UIRRMissionEvent_SendMissionEvent*> DeathEvents = {
        "IRRMissionEvent_SendMissionEvent'Test_C/Content/Environment/Blueprints/Gameplay/Destructables/BP_Destructable_FoodCrate.Default__BP_Destructable_FoodCrate_C:IRRMissionEvent_SendMissionEvent_0'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};