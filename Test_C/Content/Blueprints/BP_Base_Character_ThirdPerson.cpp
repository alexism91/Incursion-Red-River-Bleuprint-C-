class ABP_Base_Character_ThirdPerson_C : public ABP_Base_Character_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.BP_Base_Character_ThirdPerson_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.BP_Base_Character_ThirdPerson_C:InheritableComponentHandler'";
    TMap<EQUA_BodyParts, double> DamageMultiplier = {};
    class UCameraComponent* FirstPersonCameraComponent = "CameraComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:FirstPersonCamera'";
    class USpringArmComponent* SpringArm = "SpringArmComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:SpringArm'";
    class USkeletalMeshComponent* Helmet1 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Helmet1'";
    class USkeletalMeshComponent* Helmet2 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Helmet2'";
    class USkeletalMeshComponent* Helmet3 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Helmet3'";
    class USkeletalMeshComponent* Helmet4 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Helmet4'";
    class USkeletalMeshComponent* Shirt = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Shirt'";
    class USkeletalMeshComponent* Pants = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Pants'";
    class USkeletalMeshComponent* Boots = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Boots'";
    class USkeletalMeshComponent* Gloves1 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Gloves1'";
    class USkeletalMeshComponent* Gloves2 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Gloves2'";
    class USkeletalMeshComponent* Backpack1 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Backpack1'";
    class USkeletalMeshComponent* Backpack2 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Backpack2'";
    class USkeletalMeshComponent* Vest = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Vest'";
    class USkeletalMeshComponent* Vest_Collar = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Vest_Collar'";
    class USkeletalMeshComponent* Vest_Shoulder_R = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Vest_shoulder_R'";
    class USkeletalMeshComponent* Vest_Shoulder_L = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Vest_Shoulder_L'";
    class USkeletalMeshComponent* Vest_Bottom = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Vest_Bottom'";
    class USkeletalMeshComponent* Vest_Outfit = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Vest_Outfit'";
    class USkeletalMeshComponent* Decals = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Decals'";
    class USkeletalMeshComponent* Radio = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Radio'";
    class USkeletalMeshComponent* Holster = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Holster'";
    class USkeletalMeshComponent* EyeWear = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:EyeWear'";
    class USkeletalMeshComponent* EarWear = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:EarWear'";
    class USkeletalMeshComponent* FirstPerson_Arms = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:First Person Arms'";
    class USkeletalMeshComponent* Knieepad_R = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Knieepad_R'";
    class USkeletalMeshComponent* Knieepad_L = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:Knieepad_L'";
    class UPostProcessComponent* LowHealthPostProcessComponent = "PostProcessComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:LowHealthPostProcessComponent'";
    class UPostProcessComponent* FlyByPostProcessComponent = "PostProcessComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:FlyByPostProcessComponent'";
    struct FGameplayTagContainer CurrentAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Aim")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Lower Weapon")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Lean")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Knife Attack")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Holster")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Grenade Throw")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Crouch")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Sneak")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Open Inventory")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Cheat")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
    });
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:CharacterMesh0'";
    class UCharacterMovementComponent* CharacterMovement = "CharacterMovementComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/BP_Base_Character_ThirdPerson.Default__BP_Base_Character_ThirdPerson_C:CollisionCylinder'";
    class UCameraComponent* Camera_TP;
};