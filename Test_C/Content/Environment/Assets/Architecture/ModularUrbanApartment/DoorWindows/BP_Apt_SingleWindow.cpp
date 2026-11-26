class ABP_Apt_SingleWindow_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Assets/Architecture/ModularUrbanApartment/DoorWindows/BP_Apt_SingleWindow.BP_Apt_SingleWindow_C:SimpleConstructionScript_0'";
    double RandomFloat_Sliding_R = -60;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    TArray<FName> Tags = {
        FName("MeshPack_BlueprintAggressive")
    };
    class UStaticMeshComponent* DoubleWindowFrame;
    class UStaticMeshComponent* SlidingGlass_R;
    class UStaticMeshComponent* SlidingFrame_R;
    class UStaticMeshComponent* SlidingGlass_L;
    class UStaticMeshComponent* SlidingFrame_L;
    class UStaticMeshComponent* DoubleWindow_GlassLow;
    bool LockPosition;

};