class UManager_Shooter_C : public UActorComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Shooter.Manager_Shooter_C:ExecuteUbergraph_Manager_Shooter'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FTimerHandle ShootTimerHandle = {
        "Handle": 0
    };
    bool ShootingAllowed = true;
    bool ADS_Allowed = true;
    struct FTransform ThrowableSpawnTransform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTimerHandle MouseRecoil_Pitch_Handle = {
        "Handle": 0
    };
    struct FTimerHandle MouseRecoil_Yaw_Handle = {
        "Handle": 0
    };
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true
    };
    bool bReplicates = true;
    bool LeftTriggerPressed;
    bool RightTriggerPressed;
    class APawn* OwnerPawn;
    class USoundCue* Temp_CollideSound;
    class USoundAttenuation* Temp_CollideAttenuation;
    class USoundConcurrency* Temp_CollideConcurrency;
    double Temp_CollideSoundVolume;
    class ABP_ProjectilePool_C* ProjectilePool;
    bool IsTemporaryAimInProgress?;
    bool IsAimDownsights;
    TArray<class UParticleSystemComponent*>* TrajectoryBeams;
    class UMaterialInstanceDynamic* TT_SphereMaterialInstance;
    class UMaterialInstanceDynamic* TT_BeamMaterialInstance;
    class UMaterialInstanceDynamic* TT_DecalMaterialInstance;
    int CharacterAnimIndex;
    class ABP_TrajectoryTarget_C* Trajectory_Target;
    bool IsMeleeAttackEnabled;
    TArray<struct FVector> MeleeTraceLocations;
    TArray<class AActor*> MeleeHitActors;
    int AmmoToShoot;
    double CurrentRecoil_Pitch;
    double CurrentRecoil_Yaw;
    double TargetRecoil_Yaw;
    double TargetRecoil_Pitch;
    Enum_CameraPerspective PawnCameraPerspective;
    bool IsReloading;
    bool IsWeaponBlocked;

};