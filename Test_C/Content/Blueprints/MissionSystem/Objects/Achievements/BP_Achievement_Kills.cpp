class UBP_Achievement_Kills_C : public UIRRSteamAchievement
{
public:
    bool bProgress = true;
    int32 MaxProgress = 10;
    TArray<struct FIRRSteamAchievementData> Data = {
        {
            "MessageToListen": {
                "TagName": FName("Mission.Messages.Killed")
            },
            "StringPayload": "",
            "TargetData": nullptr,
            "ProgressMode": EIRRAchievementProgressMode::AddOne
        }
    };
};