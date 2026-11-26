class UIA_NotifyOwner_C : public UInteractionAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_NotifyOwner.IA_NotifyOwner_C:ExecuteUbergraph_IA_NotifyOwner'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bExecuteOnServer = true;
    FName Notify;

};