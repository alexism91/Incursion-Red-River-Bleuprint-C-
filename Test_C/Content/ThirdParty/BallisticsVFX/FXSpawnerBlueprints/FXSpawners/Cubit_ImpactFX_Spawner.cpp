class ACubit_ImpactFX_Spawner_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C:SimpleConstructionScript_1'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/BallisticsVFX/FXSpawnerBlueprints/FXSpawners/Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C:ExecuteUbergraph_Cubit_ImpactFX_Spawner'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FHitResult HitResult = {
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
    struct FVector RicochetVector = FVector(0, 0, 0);
    bool Decals Attached? = true;
    struct FVector Location = FVector(0, 0, 0);
    struct FVector Impact Normal = FVector(0, 0, 0);
    enum Projectile_Size FXSize = Projectile_Size::NewEnumerator1;
    struct FVector Impact Point = FVector(0, 0, 0);
    double NormalisedRangeMax = 30000;
    double ImpactForceMultiplier = 1;
    double Decal Life = 20;
    struct FVector ParticleCollisionLocation = FVector(0, 0, 0);
    bool ParticleCollisionSoundsON = true;
    struct FVector ParticleCollisionVelocity = FVector(0, 0, 0);
    struct FVector ParticleCollisionNormal = FVector(0, 0, 0);
    struct FMaterialProperties MaterialProperties = {
        "Surface_17_698FEFE845775A207845AE99FFBAF96B": EPhysicalSurface::SurfaceType_Default,
        "State_14_61E0B712481824F4BA6280AB67960F45": MaterialState::NewEnumerator2,
        "Hot_1_7675291340422B4D62A20890042B3A8E": false,
        "Cold_3_EAF04D7947F23AEB869676AD44B3E911": false,
        "Absorbant_5_78457C98416340E4819BCBBD380296B7": false,
        "Flammable_8_C0F512C9460008173C1A59A4477B1EE0": false,
        "Rough_11_8F6CBB0C4510DF49CAE693AB50E894DC": false,
        "Metal_26_2A9345284DD8B91ACCE945A9D8727884": false,
        "Conductive_19_3114916748B571EA1C1BDCB2325A29B4": false,
        "Explosive_21_83F672664CE9B5DA467EDDA780CC0D92": false,
        "Extinguisher_23_9E8FBD3744EAB0239E2152BEB1654964": false,
        "Caustic_28_11BB6B0D4809CFF94C53D18EF603EF0A": false
    };
    struct FMaterialProperties ParticleCollisionMaterialProperties = {
        "Surface_17_698FEFE845775A207845AE99FFBAF96B": EPhysicalSurface::SurfaceType_Default,
        "State_14_61E0B712481824F4BA6280AB67960F45": MaterialState::NewEnumerator2,
        "Hot_1_7675291340422B4D62A20890042B3A8E": false,
        "Cold_3_EAF04D7947F23AEB869676AD44B3E911": false,
        "Absorbant_5_78457C98416340E4819BCBBD380296B7": false,
        "Flammable_8_C0F512C9460008173C1A59A4477B1EE0": false,
        "Rough_11_8F6CBB0C4510DF49CAE693AB50E894DC": false,
        "Metal_26_2A9345284DD8B91ACCE945A9D8727884": false,
        "Conductive_19_3114916748B571EA1C1BDCB2325A29B4": false,
        "Explosive_21_83F672664CE9B5DA467EDDA780CC0D92": false,
        "Extinguisher_23_9E8FBD3744EAB0239E2152BEB1654964": false,
        "Caustic_28_11BB6B0D4809CFF94C53D18EF603EF0A": false
    };
    enum ImpactType Impact Type = ImpactType::NewEnumerator2;
    bool BacksplatterDecalsON = true;
    struct FTransform ProjectilesVector = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    double BacksplatterChance = 0.699999988079071;
    double BackSplatterTraceRange = 500;
    struct FFXMaterialData MaterialValues = {
        "Surface_5_A13BA84C444F7DFF70888788C6FCCCC2": EPhysicalSurface::SurfaceType1,
        "ImpactParticleFX_135_2D1ADA5E4AE492B40F6A018E974AFC88": nullptr,
        "RicochetParticleTrailFX_136_A804146D4F1C22B014298B9F801BFD53": nullptr,
        "DebrisParticleFX_137_0D9CC68F469BBA2E68FE8BAD0FBA4293": nullptr,
        "WWiseImpactSoundFx_138_EA0B54CA4E18F284F3CBF3843B7A3D96": nullptr,
        "ImpactSoundFX_52_26AFC5FF4B225EF2B2C41E94EB0ED683": nullptr,
        "ImpactActor_134_0B3FC72849C65A5B5E94F58BAED547D5": nullptr,
        "ImpactDecal_72_AFAE4BE8469F751D5996A58C8AC0177C": nullptr,
        "RicochetDecal_73_BA1A3A3147C74AFF1BE4C1823C48F711": nullptr,
        "DecalSize_39_3448E2FF4BC678271EB742853872E7C2": FVector(12, 12, 12),
        "ParticleDecal_92_D26A7B3D4F10A3F168E1D0A0B8A04E1A": nullptr,
        "ParticleDecalSize_90_662BB5AF4483ED558A378B991B0319FB": FVector(0,01, 20, 20),
        "RearSpatterDecal_124_69E3B9034ED961553C1830B154855E80": nullptr,
        "ParticleCollisionSounds_95_D12C7B394C9112DB7312428752345A16": nullptr,
        "WWiseParticleCollisionSound_141_6574D0894E290793DDCAFD8F58ADA7CE": nullptr,
        "LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5": false,
        "HotSurface_97_40A8C1CC41B1B65462A21B98D09A678D": false,
        "ColdSurface_103_8A3EDA61407CAA9014059DA8707DE7BD": false,
        "Absorbant_99_1EA3FC5043D2C407F4FCD49B1484CF9F": false,
        "Conductive_101_68E6B3B1478513C4738E5690BE4F6175": false,
        "Flammable_110_20E5C07646851E782F138697A7FC19FC": false,
        "Caustic_121_992CDE584A6F006FC3F901A49916A947": false,
        "MaterialState_109_530FAB1948850D8B126EC3A58F6426F5": MaterialState::NewEnumerator2,
        "Temperature_113_01E4F81C469340C33D67C88676011699": 0,
        "Flammability_115_635CCA024B0C5A5736CA668C10996472": 0,
        "Conductivity_117_BCB9477E4295BFB34F4BC2A04ECDFF8E": 0,
        "Absorbance_119_E906A72E4D061790AAA8D59C0A9C5580": 0
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    bool bNetLoadOnClient = false;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInterface* SplasherDecalMat;
    byte SurfaceTypeFeed;
    class UMaterialInterface* ImpactDecalMat;
    class UPrimitiveComponent* Hit Component;
    bool ParticleDecalSpawnerON?;
    class UAudioComponent* RicochetSoundComponent;
    double Impact Speed;
    double NormalisedRangeMin;
    double RicochetExitVelocity;
    FName Hit Bone;
    FXTypes FX Type;
    byte CollisionSurface;
    FName SurfaceName;
    bool FirePropagationON;
    FName ParticleCollisonHitBone;
    bool UseLineTraceParticleCollisions;
    class UPrimitiveComponent* ParticleCollisionLineCheckComponent;
    bool CanvasTargetDecals;
    class AActor* HitActor;
    class UMaterialInstanceDynamic* BacksplatterDecalMat;
    class UNiagaraComponent* MainFXEmitterNG;
    class UNiagaraComponent* RicochetParticleComponentNG;

};