class USGA_OpenHideoutUpgrade_C : public USGA_DisplayMenuContent_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_OpenHideoutUpgrade.SGA_OpenHideoutUpgrade_C:ExecuteUbergraph_SGA_OpenHideoutUpgrade'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Enum_MenuHandlerType Menu Type = Enum_MenuHandlerType::NewEnumerator22;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Hideout Ugprade"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Hideout Ugprade")
    };

};