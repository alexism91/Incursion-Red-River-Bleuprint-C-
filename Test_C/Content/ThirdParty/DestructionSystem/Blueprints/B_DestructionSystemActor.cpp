class AB_DestructionSystemActor_C : public ADestructionActor
{
public:
    int32 NumReplicatedProperties = 1;
    TArray<class UStaticMeshComponent*> ComponentTemplates = {
        "StaticMeshComponent'Test_C/Content/ThirdParty/DestructionSystem/Blueprints/B_DestructionSystemActor.B_DestructionSystemActor_C:NODE_AddStaticMeshComponent-1'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/DestructionSystem/Blueprints/B_DestructionSystemActor.B_DestructionSystemActor_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/DestructionSystem/Blueprints/B_DestructionSystemActor.B_DestructionSystemActor_C:ExecuteUbergraph_B_DestructionSystemActor'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double DebrisActorsCheckInterval = 0.10000000149011612;
    bool bMakeLastStatePermanent = true;
    int32 CurrentState = -1;
    TArray<class UIRRMissionEvent_SendMissionEvent*> DeathEvents = {
        "IRRMissionEvent_SendMissionEvent'Test_C/Content/ThirdParty/DestructionSystem/Blueprints/B_DestructionSystemActor.Default__B_DestructionSystemActor_C:IRRMissionEvent_SendMissionEvent_0'"
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bNetLoadOnClient = false;
    bool bReplicates = true;
    float NetUpdateFrequency = 20;
    class UAkComponent* Ak;
    class UNiagaraComponent* Niagara;
    class UAudioComponent* Audio;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;
    int StartingState;
    int StartingHP;
    TArray<struct FDestructionSystemActorState> States;
    class UNiagaraSystem* DeathParticle;
    class UAkAudioEvent* DeathSound;
    TArray<struct FDestructionSystemDebrisActorProperties> DebrisActorPropertiesArray;
    int CurrentHP;
    int CurrentStateHP;
    TArray<struct FTimerHandle> DebrisActorsTimersHandles;
    int LastCSStartingHP;

};