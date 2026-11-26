class USGA_EquipQuickSlot_1_C : public USGA_EquipQuickSlot_C
{
public:
    int32 QuickSlotIndex = 1;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({});
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({});
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer RemoveBufferedAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Inventory.Equipment Slots.Quick Slot.1")
    };
};