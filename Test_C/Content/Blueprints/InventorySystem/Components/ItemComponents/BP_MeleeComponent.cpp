class UBP_MeleeComponent_C : public UMeleeComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Components/ItemComponents/BP_MeleeComponent.BP_MeleeComponent_C:ExecuteUbergraph_BP_MeleeComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector TraceSize = FVector(0, 40, 40);
    float TraceLength = 60;
    enum TraceChannel = ETraceTypeQuery::ETraceTypeQuery_MAX;
    class UBlueprintGeneratedClass* ImpactCameraShake = "BlueprintGeneratedClass'Test_C/Content/Environment/Misc/PostProcessing/PP/Damage/CS_MeleeImpact.CS_MeleeImpact_C'";
    TArray<class UBlueprintGeneratedClass*> ToGrantAbilities = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_MeleeAttack.SGA_MeleeAttack_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Inspect.SGA_Inspect_C'"
    };
    bool bReplicates = true;
    class UAkAudioEvent* FallbackImpactSound;

};