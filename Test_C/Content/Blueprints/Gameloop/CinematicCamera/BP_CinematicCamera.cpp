class ABP_CinematicCamera_C : public ACharacter
{
public:
    TArray<class UInputKeyDelegateBinding*> DynamicBindingObjects = {
        "InputAxisDelegateBinding'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.BP_CinematicCamera_C:InputAxisDelegateBinding_0'",
        "InputKeyDelegateBinding'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.BP_CinematicCamera_C:InputKeyDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.BP_CinematicCamera_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.BP_CinematicCamera_C:ExecuteUbergraph_BP_CinematicCamera'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Speed = 1;
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.Default__BP_CinematicCamera_C:CharacterMesh0'";
    class UCharacterMovementComponent* CharacterMovement = "CharacterMovementComponent'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.Default__BP_CinematicCamera_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.Default__BP_CinematicCamera_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/Gameloop/CinematicCamera/BP_CinematicCamera.Default__BP_CinematicCamera_C:CollisionCylinder'";
    class UCineCameraComponent* CineCamera;
    class USpringArmComponent* SpringArm;
    class UW_CinematicCamera_HUD_C* HUD;
    class APawn* CachedPlayer;

};