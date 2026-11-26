class UBP_InteractionTarget_Peek_C : public UBP_InteractionTarget_C
{
public:
    FName MarkerComponentTag = FName("Peek");
    TArray<class UInteractionOption*> InteractionOptions = {
        "InteractionOption'Test_C/Content/Blueprints/InteractionSystem/Framework/DoorPresets/BP_InteractionTarget_Peek.Default__BP_InteractionTarget_Peek_C:InteractionOption_0'",
        "InteractionOption'Test_C/Content/Blueprints/InteractionSystem/Framework/DoorPresets/BP_InteractionTarget_Peek.Default__BP_InteractionTarget_Peek_C:InteractionOption_2'",
        "InteractionOption'Test_C/Content/Blueprints/InteractionSystem/Framework/DoorPresets/BP_InteractionTarget_Peek.Default__BP_InteractionTarget_Peek_C:InteractionOption_1'"
    };
    TArray<class UInteractionOption*> DisabledOptions = {
        "InteractionOption'Test_C/Content/Blueprints/InteractionSystem/Framework/DoorPresets/BP_InteractionTarget_Peek.Default__BP_InteractionTarget_Peek_C:InteractionOption_4'"
    };
};