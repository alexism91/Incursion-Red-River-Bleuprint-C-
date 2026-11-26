class USGA_EquipQuickSlot_0_C : public USGA_EquipQuickSlot_C
{
public:
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({});
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({});
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer RemoveBufferedAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Inventory.Equipment Slots.Quick Slot.0")
    };
};