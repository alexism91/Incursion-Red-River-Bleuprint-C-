class UManager_Ragdoll_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 1;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Ragdoll.Manager_Ragdoll_C:ExecuteUbergraph_Manager_Ragdoll'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector LastRagdollVelocity = FVector(0, 0, 0);
    struct FVector TargetRagdollLocation = FVector(0, 0, 0);
    struct FRotator TargetRagdollRotation = FRotator(0, 0, 0);
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bCanEverTick": true
    };
    bool bReplicates = true;
    bool RagdollEnabled;
    class UCapsuleComponent* CapsuleComponent;
    class USkeletalMeshComponent* Mesh;
    class APawn* OwnerPawn;
    class UCharacterMovementComponent* CharacterMovementComponent;
    bool RagdollOnGround;
    bool RagdollFaceUp;

};