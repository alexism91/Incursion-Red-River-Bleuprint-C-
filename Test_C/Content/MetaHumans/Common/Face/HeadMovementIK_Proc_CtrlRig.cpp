class UHeadMovementIK_Proc_CtrlRig_C : public UControlRig
{
public:
    class URigHierarchy* DynamicHierarchy = "RigHierarchy'Test_C/Content/MetaHumans/Common/Face/HeadMovementIK_Proc_CtrlRig.Default__HeadMovementIK_Proc_CtrlRig_C:DynamicHierarchy'";
    TArray<FSoftObjectPath> ShapeLibraries = {
        FSoftObjectPath("/ControlRig/Controls/DefaultGizmoLibrary.DefaultGizmoLibrary"),
        FSoftObjectPath("/Game/MetaHumans/Common/Controls/MHGizmoLibrary.MHGizmoLibrary")
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
    class URigVM* VM = "RigVM'Test_C/Content/MetaHumans/Common/Face/HeadMovementIK_Proc_CtrlRig.Default__HeadMovementIK_Proc_CtrlRig_C:ControlRig_VM'";
    bool eyes_aim_rig;
};