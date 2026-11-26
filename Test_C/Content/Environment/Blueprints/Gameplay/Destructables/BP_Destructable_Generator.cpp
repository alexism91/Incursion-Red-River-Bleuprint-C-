class ABP_Destructable_Generator_C : public AB_DestructionSystemActor_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Gameplay/Destructables/BP_Destructable_Generator.BP_Destructable_Generator_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Gameplay/Destructables/BP_Destructable_Generator.BP_Destructable_Generator_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/Gameplay/Destructables/BP_Destructable_Generator.BP_Destructable_Generator_C:ExecuteUbergraph_BP_Destructable_Generator'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 StartingHP = 1;
    TArray<struct FDestructionSystemActorState> States = {
        {
            "Name_19_2BE61E7B40AD46D2A466EDAF25581C97": FText("InitialState"),
            "StaticMesh_23_A33EC4A442C5B66F56FA4C9E68B24E54": "StaticMesh'Test_C/Content/Environment/Assets/Props/Generator/SM_Generator.SM_Generator'",
            "TransitionParticle_26_47357C5E4A72758D76655E9BC31F192E": nullptr,
            "TransitionSound_27_82EE17A04B65AECADFE0F3B04B1B5458": nullptr,
            "HP_15_3864D4F44D72A6B72DB6D2AA241E94E6": 1
        }
    };
    class UNiagaraSystem* DeathParticle = "NiagaraSystem'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Environment/Particles/P_Explosion_Converted.P_Explosion_Converted'";
    bool bMakeLastStatePermanent = false;
    TArray<class UIRRMissionEvent_SendMissionEvent*> DeathEvents = {
        "IRRMissionEvent_SendMissionEvent'Test_C/Content/Environment/Blueprints/Gameplay/Destructables/BP_Destructable_Generator.Default__BP_Destructable_Generator_C:IRRMissionEvent_SendMissionEvent_0'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;

};