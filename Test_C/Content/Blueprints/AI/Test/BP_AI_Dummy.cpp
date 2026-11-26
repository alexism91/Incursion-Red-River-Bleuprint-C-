class ABP_AI_Dummy_C : public ACharacter
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Test/BP_AI_Dummy.BP_AI_Dummy_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/AI/Test/BP_AI_Dummy.BP_AI_Dummy_C:ExecuteUbergraph_BP_AI_Dummy'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSkeletalBoneIDCache BonePose = {
        "SkelMesh": nullptr,
        "BoneIds": {}
    };
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'Test_C/Content/Blueprints/AI/Test/BP_AI_Dummy.Default__BP_AI_Dummy_C:CharacterMesh0'";
    class UCharacterMovementComponent* CharacterMovement = "CharacterMovementComponent'Test_C/Content/Blueprints/AI/Test/BP_AI_Dummy.Default__BP_AI_Dummy_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Test/BP_AI_Dummy.Default__BP_AI_Dummy_C:CollisionCylinder'";
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/AI/Test/BP_AI_Dummy.Default__BP_AI_Dummy_C:CollisionCylinder'";
    class USceneComponent* Text;
    class USenseStimulusComponent* SenseStimulus;

};