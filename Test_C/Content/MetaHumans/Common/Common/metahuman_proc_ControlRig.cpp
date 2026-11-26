class Umetahuman_proc_ControlRig_C : public UControlRig
{
public:
    struct FRigVMGraphFunctionStore GraphFunctionStore = {};
    class URigHierarchy* DynamicHierarchy = "RigHierarchy'Test_C/Content/MetaHumans/Common/Common/metahuman_proc_ControlRig.Default__metahuman_proc_ControlRig_C:DynamicHierarchy'";
    TArray<FSoftObjectPath> ShapeLibraries = {
        FSoftObjectPath("/ControlRig/Controls/DefaultGizmoLibraryNormalized.DefaultGizmoLibraryNormalized")
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
    class URigVM* VM = "RigVM'Test_C/Content/MetaHumans/Common/Common/metahuman_proc_ControlRig.Default__metahuman_proc_ControlRig_C:ControlRig_VM'";
};