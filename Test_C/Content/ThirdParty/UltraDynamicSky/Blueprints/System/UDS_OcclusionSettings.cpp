class UUDS_OcclusionSettings_C : public UPrimaryDataAsset
{
public:
    enum UDS_Occlusion_Mode Occlusion Mode = UDS_Occlusion_Mode::NewEnumerator2;
    double Max Trace Distance = 4500;
    int32 Horizontal Trace Steps = 12;
    int32 Vertical Trace Steps = 5;
    double Update Period = 0.35;
    double Global Occlusion Min Fraction = 0.2;
    double Global Occlusion Max Fraction = 0.9;
    bool Query Occlusion Portals = true;
    UDS_OcclusionSamplingLocation Occlusion Sampling Location;
    byte Trace Channel;
    bool Show Trace Debugs;
};