class USGA_EquipSpecialEquipment_C : public USGA_EquipCombatSlot_C
{
public:
    bool bToggleBackWhenHeld = true;
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Inventory.Equipment Slots.Special Equipment")
    };
};