class USGA_OpenRepairStation_C : public USGA_DisplayMenuContent_C
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_OpenRepairStation.SGA_OpenRepairStation_C:ExecuteUbergraph_SGA_OpenRepairStation'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    enum Enum_MenuHandlerType Menu Type = Enum_MenuHandlerType::NewEnumerator23;
    struct FGameplayTagContainer GrantedAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Hideout Ugprade")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Repair Station"))
    });
    struct FGameplayTagContainer InterruptAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTagContainer BlockAbilitiesWithTags = FGameplayTagContainer({});
    struct FGameplayTag TagToTriggerAbility = {
        "TagName": FName("Character.Abilities.Active.Repair Station")
    };

};