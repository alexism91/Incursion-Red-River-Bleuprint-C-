class UBP_Achievement_RaidData_C : public UIRRSteamAchievement
{
public:
    struct FGameplayTag RaidTag = {
        "TagName": FName("None")
    };
    struct FIRRMissionVariable Target = {
        "Type": EIRRMissionVariableType::Integer,
        "IntegerValue": 0,
        "FloatValue": 0,
        "BoolValue": false,
        "bAdditive": false
    };
    TArray<struct FIRRSteamAchievementData> Data = {
        {
            "MessageToListen": {
                "TagName": FName("Mission.Messages.Raid Data Finalized")
            },
            "StringPayload": "",
            "TargetData": nullptr,
            "ProgressMode": EIRRAchievementProgressMode::AddOne
        }
    };

};