class UBP_Service_UpdateProgress_CollectItem_C : public UIRRMissionService_UpdateProgress
{
public:
    TArray<FString> ToIgnoreComponentTags = {
        "Secure Container",
        "Player",
        "Stash"
    };

};