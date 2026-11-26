class USGA_OpenStash_C : public USGA_DisplayMenuContent_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_OpenStash.SGA_OpenStash_C:ExecuteUbergraph_SGA_OpenStash'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Enum_MenuHandlerType Menu Type = Enum_MenuHandlerType::NewEnumerator11;
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.GCPS")),
        FGameplayTag::RequestGameplayTag(FName("Inventory.Equipment Slots.GCPS"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
    });
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("None")
    };

};