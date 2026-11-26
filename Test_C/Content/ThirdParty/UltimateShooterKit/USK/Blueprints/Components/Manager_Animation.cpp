class UManager_Animation_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 8;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Animation.Manager_Animation_C:ExecuteUbergraph_Manager_Animation'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName LinkedAnimGraphTag = FName("UltimateShooterKit");
    struct FRotator LastControlRotation = FRotator(0, 0, 0);
    struct FRotator LastVelocityRotation = FRotator(0, 0, 0);
    struct FRotator TargetRotation = FRotator(0, 0, 0);
    enum Enum_GaitState DesiredGait = Enum_GaitState::NewEnumerator1;
    enum Enum_GaitState CurrentGait = Enum_GaitState::NewEnumerator1;
    struct FVector2D MovementInput = FVector2D(0, 0);
    double WalkSpeed = 130;
    double RunSpeed = 450;
    double SprintSpeed = 650;
    struct FVector2D AimOffsetDelta = FVector2D(0, 0);
    struct FStruct_CharacterAnimation CurrentWeaponAnimations = {
        "FPPAnimations_2_33E33C3A4726524FC0468880D9379DB4": {
            "Actions_12_D5CC9C8243864F7F1FE603821551F46E": {},
            "Animation_14_33E33C3A4726524FC0468880D9379DB4": nullptr,
            "RelaxedIdleTime_23_699DABBC4545A7F9B5837087ECE58B10": 0,
            "ReadyIdleTime_25_30C3918A4342FB76789544835F4E9236": 0.04,
            "AimIdleTime_27_36F4C6FD46028FE06CA4EC928283DBEB": 0.08,
            "Sprint_19_9011FFFE4A5E8EDB128CC89EAC7EF823": nullptr,
            "JumpStates_8_D846D1274A0810D89E330D8C40038A48": {
                "JumpStart_2_33E33C3A4726524FC0468880D9379DB4": nullptr,
                "JumpLoop_4_C8133CDF486C7079BD74529CE50369D4": nullptr,
                "JumpEnd_6_978F7EDD4FB1F77773BABBBAEFB4079A": nullptr
            }
        },
        "TPPAnimations_4_0FA599294D0329EC933DA287ACA842DD": {
            "Actions_12_D5CC9C8243864F7F1FE603821551F46E": {},
            "Animation_14_33E33C3A4726524FC0468880D9379DB4": nullptr,
            "RelaxedIdleTime_23_699DABBC4545A7F9B5837087ECE58B10": 0,
            "ReadyIdleTime_25_30C3918A4342FB76789544835F4E9236": 0.04,
            "AimIdleTime_27_36F4C6FD46028FE06CA4EC928283DBEB": 0.08,
            "Sprint_19_9011FFFE4A5E8EDB128CC89EAC7EF823": nullptr,
            "JumpStates_8_D846D1274A0810D89E330D8C40038A48": {
                "JumpStart_2_33E33C3A4726524FC0468880D9379DB4": nullptr,
                "JumpLoop_4_C8133CDF486C7079BD74529CE50369D4": nullptr,
                "JumpEnd_6_978F7EDD4FB1F77773BABBBAEFB4079A": nullptr
            }
        }
    };
    struct FTransform HandRecoil = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform WeaponFinalSway = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTimerHandle HandRecoilTimer = {
        "Handle": 0
    };
     On_Rotation_Mode_Updated = ;
     On_Character_Montage_Started = ;
     On_Character_Montage_Ended = ;
     On_Character_Montage_Blending_Out = ;
    struct FTimerHandle Leaning_TimerHandle = {
        "Handle": 0
    };
    struct FVector WeaponBlockingPosition = FVector(0, 0, 0);
    struct FVector WeaponBlockingPositionRelation = FVector(0, 0, 0);
     On_Weapon_Blocked = ;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true
    };
    bool bReplicates = true;
    class APawn* OwnerPawn;
    class USkeletalMeshComponent* PawnMesh;
    class UCharacterMovementComponent* CharacterMovementComponent;
    class UAnimInstance* AnimInstance;
    class UAnimInstance* OverlayAnimInstance;
    double MovementInputRatio;
    double Speed;
    bool HasMovementInput;
    Enum_LocomotionType RotationMode;
    bool UsingOverlayPose;
    Enum_LocomotionType PrevRotationMode;
    double CurrentLean;
    double TargetLean;
    bool WeaponBlocked;
    double WeaponBlockAlpha;

};