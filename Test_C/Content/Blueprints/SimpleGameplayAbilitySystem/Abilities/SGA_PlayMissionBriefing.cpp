class USGA_PlayMissionBriefing_C : public USimpleGameplayAbility_PlayMissionBriefing
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/SimpleGameplayAbilitySystem/Abilities/SGA_PlayMissionBriefing.SGA_PlayMissionBriefing_C:ExecuteUbergraph_SGA_PlayMissionBriefing'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName LinkedAnimGraph = FName("Combat");

};