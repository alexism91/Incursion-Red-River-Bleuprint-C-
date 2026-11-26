class UCR_PlaceHolder_C : public UControlRig
{
public:
    class URigHierarchy* DynamicHierarchy = "RigHierarchy'Test_C/Content/MetaHumans/Common/Animation/CR_PlaceHolder.Default__CR_PlaceHolder_C:DynamicHierarchy'";
    TArray<FSoftObjectPath> ShapeLibraries = {
        FSoftObjectPath("/ControlRig/Controls/DefaultGizmoLibraryNormalized.DefaultGizmoLibraryNormalized")
    };
    class UObject* DataSourceRegistry = nullptr;
    class URigVM* VM = "RigVM'Test_C/Content/MetaHumans/Common/Animation/CR_PlaceHolder.Default__CR_PlaceHolder_C:ControlRig_VM'";
};