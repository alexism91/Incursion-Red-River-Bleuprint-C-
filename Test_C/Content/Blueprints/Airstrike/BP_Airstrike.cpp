class ABP_Airstrike_C : public AAirstrike
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Airstrike/BP_Airstrike.BP_Airstrike_C:SimpleConstructionScript_0'";
    class UStaticMeshComponent* MissileMesh = "StaticMeshComponent'Test_C/Content/Blueprints/Airstrike/BP_Airstrike.Default__BP_Airstrike_C:MissileMesh'";
    class UNiagaraComponent* TrailEffect = "NiagaraComponent'Test_C/Content/Blueprints/Airstrike/BP_Airstrike.Default__BP_Airstrike_C:TrailEffect'";
    class UAkComponent* AudioComponent = "AkComponent'Test_C/Content/Blueprints/Airstrike/BP_Airstrike.Default__BP_Airstrike_C:AudioComponent'";
    class UAkComponent* ImpactAreaAudioComponent = "AkComponent'Test_C/Content/Blueprints/Airstrike/BP_Airstrike.Default__BP_Airstrike_C:ImpactAreaAudioComponent'";
    class UNiagaraSystem* ExplosionEffect = "NiagaraSystem'Test_C/Content/ThirdParty/EvolveStudio/MasterAssets/VFX/NiagaraSystems/NS_Explosion_01.NS_Explosion_01'";
    float ExplosionEffectScale = 2;
    struct FRotator ExplosionRotator = FRotator(90, 180, 180);
    class UAkAudioEvent* IncomingEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Airstrike/Airstrike/airstrike_pre_boom.airstrike_pre_boom'";
    class UAkRtpc* IncomingTimeToImpactRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Explosives/Airstrike/airstrike_time_to_impact.airstrike_time_to_impact'";
    class UAkAudioEvent* ExplosionEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Airstrike/Airstrike/airstrike_explosion.airstrike_explosion'";
    class UBlueprintGeneratedClass* ExplosionCameraShake = "BlueprintGeneratedClass'Test_C/Content/ThirdParty/BallisticsVFX/FirstPersonBPExamples/ExplosionShake.ExplosionShake_C'";
    float ShakeInnerRadius = 5000;
    float ShakeOuterRadius = 20000;
    float DiveAngle = 15;
    float ApproachBearing = 5;
    float CallInDelay = 5;
    float LaunchDelay = 6;
    bool bDebug = true;
    class UStaticMeshComponent* RootComponent = "StaticMeshComponent'Test_C/Content/Blueprints/Airstrike/BP_Airstrike.Default__BP_Airstrike_C:MissileMesh'";
    class UStaticMeshComponent* SM_Drone_Missile_Guided;
};