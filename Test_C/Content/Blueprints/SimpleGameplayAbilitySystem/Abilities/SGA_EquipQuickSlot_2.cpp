class USGA_EquipQuickSlot_2_C : public USGA_EquipQuickSlot_C
{
public:
    int32 QuickSlotIndex = 2;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({});
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({});
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer RemoveBufferedAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Inventory.Equipment Slots.Quick Slot.2")
    };
};