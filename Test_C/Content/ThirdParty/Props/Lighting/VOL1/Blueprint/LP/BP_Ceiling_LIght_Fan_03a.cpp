class ABP_Ceiling_LIght_Fan_03a_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/Props/Lighting/VOL1/Blueprint/LP/BP_Ceiling_LIght_Fan_03a.BP_Ceiling_LIght_Fan_03a_C:SimpleConstructionScript_0'";
    double RotationTempo = 2;
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UStaticMeshComponent* SM_Ceiling_Light_Fan_NN_13i;
    class UStaticMeshComponent* SM_Ceiling_Light_Fan_NN_13h;
    class USceneComponent* DefaultSceneRoot;
};