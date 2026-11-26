class UIA_StartOperation_C : public UInteractionAction
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InteractionSystem/Objects/InteractionActions/IA_StartOperation.IA_StartOperation_C:ExecuteUbergraph_IA_StartOperation'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool UseTargetOperation = true;
    bool bExecuteOnServer = true;
    class UIRRMissionSetup* OperationSetup;
    class UIRRMissionData* OperationData;

};