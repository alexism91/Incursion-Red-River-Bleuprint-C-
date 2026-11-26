class ABP_MasterProjectile_C : public AActor
{
public:
    int32 NumReplicatedProperties = 2;
    TArray<class UParticleSystemComponent*> ComponentTemplates = {
        "ProjectileMovementComponent'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/BP_MasterProjectile.BP_MasterProjectile_C:NODE_AddProjectileMovementComponent-1'",
        "NiagaraComponent'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/BP_MasterProjectile.BP_MasterProjectile_C:NODE_AddNiagaraComponent-0'",
        "ParticleSystemComponent'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/BP_MasterProjectile.BP_MasterProjectile_C:NODE_AddParticleSystemComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/BP_MasterProjectile.BP_MasterProjectile_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/BP_MasterProjectile.BP_MasterProjectile_C:ExecuteUbergraph_BP_MasterProjectile'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_VFX_Selection ParticleSystem = {
        "UseNiagaraSystem_11_593FDBB34F7471BDC107F6AF8AD72E99": false,
        "NiagaraSystem_10_5D953182459F1698C9D994A9AA75B86E": nullptr,
        "ParticleSystem_9_6B66B87643745CA04F39089997B7AAB3": nullptr
    };
    int32 MaxBounce = 1;
    struct FHitResult LastImpactResult = {
        "FaceIndex": 0,
        "Time": 1,
        "Distance": 0,
        "Location": FVector(0, 0, 0),
        "ImpactPoint": FVector(0, 0, 0),
        "Normal": FVector(0, 0, 0),
        "ImpactNormal": FVector(0, 0, 0),
        "TraceStart": FVector(0, 0, 0),
        "TraceEnd": FVector(0, 0, 0),
        "PenetrationDepth": 0,
        "MyItem": -1,
        "Item": 0,
        "ElementIndex": 0,
        "bBlockingHit": false,
        "bStartPenetrating": false,
        "PhysMaterial": nullptr,
        "HitObjectHandle": {
            "ReferenceObject": nullptr
        },
        "Component": nullptr,
        "BoneName": FName("None"),
        "MyBoneName": FName("None")
    };
    struct FVector LastImpactVelocity = FVector(0, 0, 0);
    struct FVector ProjectileLocation = FVector(0, 0, 0);
    struct FStruct_ProjectileSettings ProjectileSettings = {
        "CanPenetrate?_55_37D7284045DE187BDBC5F6B53A087D92": false,
        "MaxBouncePenetration_61_040F6FD84F5BAD9CE0B624964DF28346": 0,
        "Speed_65_C9904CC04329C9F0628BFBB157294B94": 50000,
        "Bounciness_44_D549293A47609C089F96ED846091DE5F": 0.5,
        "Friction_46_DD36A04F4AEFC402D0C467BFE3080FB7": 0.5,
        "GravityScale_34_93F3F1EC49D52CFA067D4A9B9F48EA63": 1,
        "UpVectorFactor_74_F33FFDD44EE8E6C6867D77A07C515B62": 0,
        "SecondsToExplode_71_D9A55BB2484F44C3426B48AB55FE6742": 0,
        "LifespanAfterExplode_84_E128D83D42D3E1B70FE3659560F83D56": 0,
        "SimulatePhysicsAfterStop_87_DDBC5FD04E35D6C3177A2D81A7843308": false,
        "RotationMovementComponent_81_F6E4CC304C1B84D2A38EC7A30CC4B4EC": {
            "UseRotationMovementComponent_1_C8AAC4074153A853281F9D8BBAAB658B": false,
            "RotationRate_9_DEE700734B66D92075A26386BDD3BE3C": FVector(0, 0, 0),
            "PivotOffset_8_236101A44827638A1FDCD080E25DEC96": FVector(0, 0, 0)
        },
        "ProjectileDamageSetup_68_FDEC18A44204C21CA10719BCB3668CAC": {
            "ApplyDamageOnEveryHit_23_2D274BD540055EA69BD72C847BD84C27": false,
            "IsPointDamage_20_B9B3E6864C90036D4AE856AF66FF6D35": false,
            "BaseDamage_4_5520D7F845CAF2F690735CA95077E773": 0,
            "MinimumDamage_6_8ECF15B64F544607BEED7C98B8FD3E00": 0,
            "BaseDamageMultiplier_32_D9A003F047A6F2601CABE886CC1FF68A": 1,
            "DamageMultiplierPerBone_29_A90203C34CD9821284C4819D3C310CE6": {},
            "InnerRadius_8_3C3976C1475FF558851315988572F26A": 150,
            "OuterRadius_10_5C0DD0ED412D57DE447AA3A7BD038719": 300,
            "DamageFalloffExponent_16_F67E579245E9710B2CCD7E82FBB56075": 0.5,
            "DamagePreventationChannel_19_069AB63D4A498308F4BB78AF94DAFB4A": ECollisionChannel::ECC_Visibility,
            "DamageTypeClass_15_F262DB544248CCCD8E9279AFD3C6CC01": nullptr
        },
        "ProjectileMesh_2_6C79889D4C98E830995D709905B1E337": nullptr,
        "ProjectileBeam_39_D9DFF7844E113EB33365B0AC639C9C41": {
            "UseNiagaraSystem_11_593FDBB34F7471BDC107F6AF8AD72E99": false,
            "NiagaraSystem_10_5D953182459F1698C9D994A9AA75B86E": nullptr,
            "ParticleSystem_9_6B66B87643745CA04F39089997B7AAB3": nullptr
        },
        "VisualEffects_28_F85D20284D225F01AAF7879A88325770": {},
        "HitSoundEffects_41_D349D948461F929380BA32AF3ED8E239": {},
        "BounceSoundEffects_56_3ECEBE3048F1AB3DC49848BF8CC8AA17": {},
        "ExplotionSoundEffects_57_CCC7F5C04A01297FB600E8BBD62C83D8": {},
        "PenetrationSetup_17_1E00B9AE4BB2652AFE644BA4001F4D52": {},
        "CalculatedLaunchVelocity_77_3B4EF41349098EC10B4ED7A8D3E44F1C": FVector(0, 0, 0)
    };
    struct FVector ForwardVector = FVector(0, 0, 0);
    double MaxDistanceToTravel = 100;
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true,
        "bStartWithTickEnabled": false
    };
    bool bAlwaysRelevant = true;
    bool bReplicateMovement = true;
    bool bNetLoadOnClient = false;
    bool bReplicates = true;
    struct FRepMovement ReplicatedMovement = {
        "LocationQuantizationLevel": EVectorQuantization::RoundTwoDecimals,
        "VelocityQuantizationLevel": EVectorQuantization::RoundTwoDecimals,
        "RotationQuantizationLevel": ERotatorQuantization::ShortComponents
    };
    class URotatingMovementComponent* RotatingMovement;
    class UStaticMeshComponent* StaticMesh;
    class UProjectileMovementComponent* ProjectileMovement_Component;
    class UStaticMeshComponent* ProjectileMesh_Component;
    class UStaticMesh* Mesh;
    class UParticleSystemComponent* ParticleSystem_Component;
    class UNiagaraComponent* NiagaraSystem_Component;
    double BulletInitialSpeed;
    double GravityScale;
    bool ProjectileReady;
    class ABP_ProjectilePool_C* PooledBy;
    int CurrentBounce;
    bool CanPenetrate?;
    bool ApplyForce;
    TArray<class AActor*> DamagedActors;
    bool IsProjectileEnabled;
    double DistanceTraveled;
    class UNiagaraComponent* Niagara_Explotion_Component;
    class UParticleSystemComponent* Particle_Explotion_Component;
    class UAudioComponent* Sound_Explotion;

};