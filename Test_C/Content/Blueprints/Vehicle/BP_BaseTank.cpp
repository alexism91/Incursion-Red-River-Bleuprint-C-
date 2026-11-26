class ABP_BaseTank_C : public ABaseVehicle
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Vehicle/BP_BaseTank.BP_BaseTank_C:SimpleConstructionScript_0'";
    class UVehicleNavObstacleComponent* NavObstacle = "VehicleNavObstacleComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseTank.Default__BP_BaseTank_C:NavObstacle'";
    class UVehicleCrowdObstacleComponent* CrowdObstacle = "VehicleCrowdObstacleComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseTank.Default__BP_BaseTank_C:CrowdObstacle'";
    class UIRRSignificanceComponent* Significance = "IRRSignificanceComponent'Test_C/Content/Blueprints/Vehicle/BP_BaseTank.Default__BP_BaseTank_C:Significance'";
    bool bWreckSimulatesPhysics = true;
    float WreckMassKg = 100;
    bool bSmoothSyncWreckOnly = false;
    bool bSpawnWreckEffects = true;
    class UNiagaraSystem* WreckEffect = "NiagaraSystem'Test_C/Content/ThirdParty/EvolveStudio/MasterAssets/VFX/NiagaraSystems/NS_Fire_01.NS_Fire_01'";
    class UAkAudioEvent* WreckEffectSound = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Weapons/Firearms/SMGs/SMGs/Vector/Vector_3p/Vector_V2_Single_Suppressed_3p.Vector_V2_Single_Suppressed_3p'";
    int32 WreckEffectCountMin = 3;
    float WreckEffectSink = 50;
    bool bAlwaysRelevant = true;
    bool bReplicateMovement = false;
    class USceneComponent* StrikePoint;
    class USkeletalMeshComponent* Chassis;
    class UAdvancedAkComponent* AdvancedAk;
    class UVehicleTrackedChassisComponent* VehicleTrackedChassis;
    class USmoothSync* SmoothSync;
    class USceneComponent* DefaultSceneRoot;

};