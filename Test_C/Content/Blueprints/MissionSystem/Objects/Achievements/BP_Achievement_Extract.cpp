class UBP_Achievement_Extract_C : public UIRRSteamAchievement
{
public:
    TArray<struct FIRRSteamAchievementData> Data = {
        {
            "MessageToListen": {
                "TagName": FName("Mission.Messages.Extracted")
            },
            "StringPayload": "",
            "TargetData": nullptr,
            "ProgressMode": EIRRAchievementProgressMode::AddOne
        }
    };
};