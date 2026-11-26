class UCR_MetaHuman_HeadMovement_IK_Proc_C : public UControlRig
{
public:
    class URigHierarchy* DynamicHierarchy = "RigHierarchy'Test_C/Content/MetaHumans/Common/Face/CR_MetaHuman_HeadMovement_IK_Proc.Default__CR_MetaHuman_HeadMovement_IK_Proc_C:DynamicHierarchy'";
    TArray<FSoftObjectPath> ShapeLibraries = {
        FSoftObjectPath("/ControlRig/Controls/DefaultGizmoLibrary.DefaultGizmoLibrary"),
        FSoftObjectPath("/Game/MetaHumans/Common/Controls/CRSL_MetaHuman_Gizmo.CRSL_MetaHuman_Gizmo")
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
    class URigVM* VM = "RigVM'Test_C/Content/MetaHumans/Common/Face/CR_MetaHuman_HeadMovement_IK_Proc.Default__CR_MetaHuman_HeadMovement_IK_Proc_C:ControlRig_VM'";
    bool eyes_aim_rig;
};