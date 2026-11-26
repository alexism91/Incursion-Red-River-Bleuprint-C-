class UIA_PlayMontage_C : public UInteractionAction_PlayMontage
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_PlayMontage.IA_PlayMontage_C:ExecuteUbergraph_IA_PlayMontage'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTagContainer AbilitiesToStop = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect"))
    });
    FName LinkedAnimGraph = FName("Combat");
    class AActor* Interacting Actor;
    class UInteractionTarget* Owner Comp;

};