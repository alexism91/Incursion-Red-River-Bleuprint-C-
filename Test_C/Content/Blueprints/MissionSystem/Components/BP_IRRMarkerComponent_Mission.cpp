class UBP_IRRMarkerComponent_Mission_C : public UBP_IRRMarkerComponent_C
{
public:
    int32 NumReplicatedProperties = 1;
    bool bEnabled = false;
    TArray<struct FGuid> MissionUIDs;
};