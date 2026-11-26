class UBP_SpawnData_SecureContainer_C : public UIRRSpawnData
{
public:
    FName DataLayerLabel = FName("DL_SecureAndPlace");
    FName SpawnTag = FName("Secure Container");
    int32 SpawnAmount = 1;
    struct FColor SpawnColor = FColor(255, 0, 0, 255);
};