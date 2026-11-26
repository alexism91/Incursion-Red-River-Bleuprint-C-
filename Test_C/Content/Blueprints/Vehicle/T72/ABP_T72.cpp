class UABP_T72_C : public UVehicleAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Environment/Assets/Vehicles/IGC_Tank_T72b/SKEL_East_Tank_T72b.SKEL_East_Tank_T72b'";
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                2,
                2,
                2,
                4294967295,
                1,
                0,
                4294967295
            },
            "NodeIndex": 0,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                2,
                2,
                2,
                4294967295
            },
            "NodeIndex": 1,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
        { "ScriptStruct'/Script/Engine.AnimNode_ConvertComponentToLocalSpace'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("ComponentPose"), 3 }
            },
            "NumProperties": 4
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_Root'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("Result"), 3 }, 
                { FName("Name"), 4 }, 
                { FName("LayerGroup"), 5 }, 
                { FName("Group"), 6 }
            },
            "NumProperties": 7
        } }
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 1
        }
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace = {
        "ComponentPose": {
            "LinkID": -1
        }
    };
    FName __NameProperty_4 = FName("DefaultSharedGroup");
    FName __NameProperty_5 = FName("AnimGraph");
    struct FAnimNodeFunctionRef __StructProperty_6 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };

};