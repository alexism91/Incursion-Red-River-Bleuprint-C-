class UUDS_PlayerOcclusion_C : public USceneComponent
{
public:
    class UUDS_OcclusionSettings_C* Occlusion Settings = "UDS_OcclusionSettings_C'Test_C/Content/ThirdParty/UltraDynamicSky/Blueprints/Occlusion/Occlusion_Settings/UDS_Standard_Occlusion_Settings.UDS_Standard_Occlusion_Settings'";
    struct FLinearColor Current Directional Occlusion = FLinearColor(0, 0, 0, 0);
    double Current Global Occlusion = 1;
    double Increment Time = 1;
    bool Calculate Directional Occlusion = true;
    struct FLinearColor Directional Occlusion Total = FLinearColor(0, 0, 0, 0);
    double Occlusion Multiplier = 1;
    double Time of Last Trace = -10;
    struct FLinearColor Target Directional Occlusion = FLinearColor(0, 0, 0, 0);
    struct FVector Last Trace Location = FVector(0, 0, -50000000);
    struct FVector Sample Location = FVector(0, 0, 0);
    struct FLinearColor Directional Portal Contribution = FLinearColor(0, 0, 0, 0);
     Hard Occlusion Change = ;
    double Occlusion Threshold = 0.25;
    bool Underground = true;
     Signal Blocked Change = ;
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false
    };
    double Water Level;
    bool Use Water Level;
    bool Force Full Occlusion;
    byte Show Trace Debugs;
    bool Global Occlusion Changing;
    int Traces Per Update;
    double Global Occlusion Total;
    double Upward Occlusion Total;
    double Directional Occlusion Max;
    TArray<struct FLinearColor> Directional Trace Max Values;
    double Upward Occlusion Max;
    TArray<double> Upward Trace Max Values;
    int Trace Index;
    TArray<struct FVector> Trace Offsets;
    TArray<struct FLinearColor> Directional Occlusion History;
    TArray<double> Global Occlusion History;
    TArray<double> Upward Occlusion History;
    TArray<class AActor*> Ignored Actors;
    double Current Upward Occlusion;
    double Target Global Occlusion;
    bool Hard Update;
    double Tick Period;
    TArray<class UUDS_Occlusion_Portal_C*>* Portals in Range;
    bool Location Valid;
    double Global Portal Contribution;
    bool IsOutdoor;
    bool Is Signal Blocked;
    double Underground Threshold;

};