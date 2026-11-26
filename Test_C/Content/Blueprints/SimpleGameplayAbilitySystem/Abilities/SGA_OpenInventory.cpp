class USGA_OpenInventory_C : public USGA_DisplayMenuContent_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_OpenInventory.SGA_OpenInventory_C:ExecuteUbergraph_SGA_OpenInventory'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer ActivationBlockedTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.GCPS")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Menu Open"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
    });
    bool InventoryOpen?;
    TArray<class UContainerElementWidget*>* LootContainers;
    TArray<class UItemWidget*>* ContainerItems;

};