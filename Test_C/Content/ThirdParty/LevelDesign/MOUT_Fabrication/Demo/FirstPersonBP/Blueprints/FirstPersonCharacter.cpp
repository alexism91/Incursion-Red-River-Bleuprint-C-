class AFirstPersonCharacter_C : public ACharacter
{
public:
    TArray<class UInputKeyDelegateBinding*> DynamicBindingObjects = {
        "InputActionDelegateBinding'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C:InputActionDelegateBinding_0'",
        "InputTouchDelegateBinding'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C:InputTouchDelegateBinding_0'",
        "InputAxisDelegateBinding'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C:InputAxisDelegateBinding_0'",
        "InputKeyDelegateBinding'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C:InputKeyDelegateBinding_0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.FirstPersonCharacter_C:ExecuteUbergraph_FirstPersonCharacter'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector GunOffset = FVector(100, 33, 10);
    double BaseTurnRate = 45;
    double BaseLookUpRate = 45;
    double WeaponRange = 5000;
    double WeaponDamage = 500000;
    struct FVector StartTrace = FVector(0, 0, 0);
    struct FVector EndTrace = FVector(0, 0, 0);
    struct FVector ShootDir = FVector(0, 0, 0);
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.Default__FirstPersonCharacter_C:CharacterMesh0'";
    class UCharacterMovementComponent* CharacterMovement = "CharacterMovementComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.Default__FirstPersonCharacter_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.Default__FirstPersonCharacter_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPersonBP/Blueprints/FirstPersonCharacter.Default__FirstPersonCharacter_C:CollisionCylinder'";
    class USkeletalMeshComponent* FP_Gun;
    class USkeletalMeshComponent* Mesh1P;
    class UCameraComponent* FirstPersonCamera;
    bool PlayerNearLadder?;
    bool PlayerOnLadder?;

};