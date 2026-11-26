class UBP_InteractionManager_C : public UInteractionManager
{
public:
    float MaxDistanceToCenterOfScreen = 30;
    class UWidgetBlueprintGeneratedClass* TargetTextClass = "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/InteractionSystem/Widgets/W_InteractionText.W_InteractionText_C'";
    struct FGameplayTagContainer RequiredTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact"))
    });
    bool bTraceComplex = false;
};