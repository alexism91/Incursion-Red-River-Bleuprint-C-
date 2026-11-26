class USGA_Traversal_C : public USimpleGameplayAbility
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_Traversal.SGA_Traversal_C:ExecuteUbergraph_SGA_Traversal'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FCharacterMontageSet UpperBodyMontage = {
        "TP_Animation": nullptr,
        "FP_Animation": nullptr,
        "Weapon_Animation": nullptr
    };
    struct FCharacterMontageSet LowerBodyMontage = {
        "TP_Animation": nullptr,
        "FP_Animation": nullptr,
        "Weapon_Animation": nullptr
    };
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Traversal")),
        FGameplayTag::RequestGameplayTag(FName("Input.Block.Rotation")),
        FGameplayTag::RequestGameplayTag(FName("Input.Block.Movement")),
        FGameplayTag::RequestGameplayTag(FName("Input.Block.Camera")),
        FGameplayTag::RequestGameplayTag(FName("Input.Block.Jump"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities"))
    });
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Traversal")
    };
    bool StopAbilityMontage = true;
    class UBP_TraversalSystemComponent_C* Traversal Component;
    bool bOverrideMovementMode;
    byte NewMovement Mode;
    FName FP_LinkedAnim;

};