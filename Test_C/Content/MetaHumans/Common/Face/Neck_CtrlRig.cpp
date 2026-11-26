class UNeck_CtrlRig_C : public UControlRig
{
public:
    double neckCorrMultU = 1;
    double neckCorrMultM = 1;
    double neckCorrMultD = 1;
    class URigHierarchy* DynamicHierarchy = "RigHierarchy'Test_C/Content/MetaHumans/Common/Face/Neck_CtrlRig.Default__Neck_CtrlRig_C:DynamicHierarchy'";
    TArray<FSoftObjectPath> ShapeLibraries = {
        FSoftObjectPath("/ControlRig/Controls/DefaultGizmoLibrary.DefaultGizmoLibrary")
    };
    class UObject* DataSourceRegistry = nullptr;
    struct FRigInfluenceMapPerEvent Influences = {
        "Maps": {
            {
                "EventName": FName("Forwards Solve"),
                "Entries": {},
                "KeyToIndex": {}
            }
        },
        "EventToIndex": {
            { FName("Forwards Solve"), 0 }
        }
    };
    class URigVM* VM = "RigVM'Test_C/Content/MetaHumans/Common/Face/Neck_CtrlRig.Default__Neck_CtrlRig_C:ControlRig_VM'";
};