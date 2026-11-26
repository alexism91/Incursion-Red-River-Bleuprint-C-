class USGA_EquipGCPS_C : public USGA_EquipCombatSlot_C
{
public:
    bool bToggleBackWhenHeld = true;
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Inventory.Equipment Slots.GCPS")
    };

};