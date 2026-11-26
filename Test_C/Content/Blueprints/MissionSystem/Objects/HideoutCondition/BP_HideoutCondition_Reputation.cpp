class UBP_HideoutCondition_Reputation_C : public UIRRHideoutCondition
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/Objects/HideoutCondition/BP_HideoutCondition_Reputation.BP_HideoutCondition_Reputation_C:ExecuteUbergraph_BP_HideoutCondition_Reputation'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag Faction = {
        "TagName": FName("None")
    };
    int ReptuationLevel;

};