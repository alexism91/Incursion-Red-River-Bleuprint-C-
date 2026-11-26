class UIA_ConsumeItem_C : public UInteractionAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_ConsumeItem.IA_ConsumeItem_C:ExecuteUbergraph_IA_ConsumeItem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool UseInteractionItem? = true;
    struct FGameplayTagContainer Items = FGameplayTagContainer({});
    TArray<int> Container Indexes;

};