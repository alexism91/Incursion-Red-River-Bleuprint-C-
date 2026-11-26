class UABP_LobbyIdle_C : public UAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Characters/Mannequins/Meshes/SK_IRR_Mannequin.SK_IRR_Mannequin'";
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                0
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                1,
                1,
                1,
                4294967295,
                0,
                9,
                4294967295
            },
            "NodeIndex": 0,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                1,
                1,
                1,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                9,
                8,
                7,
                6,
                7,
                4294967295,
                5,
                5,
                4,
                4294967295,
                3,
                2,
                7
            },
            "NodeIndex": 1,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
        { "ScriptStruct'/Script/Engine.AnimNode_SequencePlayer'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("GroupIndex"), 3 }, 
                { FName("GroupScope"), 4 }, 
                { FName("BlendWeight"), 5 }, 
                { FName("InternalTimeAccumulator"), 6 }, 
                { FName("PlayRateScaleBiasClampState"), 7 }, 
                { FName("GroupName"), 8 }, 
                { FName("GroupRole"), 9 }, 
                { FName("bOverridePositionWhenJoiningSyncGroupAsLeader"), 10 }, 
                { FName("Method"), 11 }, 
                { FName("bIgnoreForRelevancyTest"), 12 }, 
                { FName("Sequence"), 13 }, 
                { FName("PlayRateBasis"), 14 }, 
                { FName("PlayRate"), 15 }, 
                { FName("PlayRateScaleBiasClampConstants"), 16 }, 
                { FName("PlayRateScaleBiasClamp"), 17 }, 
                { FName("StartPosition"), 18 }, 
                { FName("bLoopAnimation"), 19 }, 
                { FName("bStartFromMatchingPose"), 20 }
            },
            "NumProperties": 21
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_SequencePlayerBase'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("GroupIndex"), 3 }, 
                { FName("GroupScope"), 4 }, 
                { FName("BlendWeight"), 5 }, 
                { FName("InternalTimeAccumulator"), 6 }, 
                { FName("PlayRateScaleBiasClampState"), 7 }
            },
            "NumProperties": 8
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_AssetPlayerBase'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("GroupIndex"), 3 }, 
                { FName("GroupScope"), 4 }, 
                { FName("BlendWeight"), 5 }, 
                { FName("InternalTimeAccumulator"), 6 }
            },
            "NumProperties": 7
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_AssetPlayerRelevancyBase'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
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
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer = {
        "Sequence": "AnimComposite'Test_C/Content/Animations/UE5/TP/MC_Idles_Pack/Animations/Shift/AC_ShiftIdle.AC_ShiftIdle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    FName __NameProperty_8 = FName("AnimGraph");
    struct FAnimNodeFunctionRef __StructProperty_9 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    bool __BoolProperty_10 = true;
    float __FloatProperty_11 = 0;
    struct FInputScaleBiasClampConstants __StructProperty_12 = {
        "bMapRange": false,
        "bClampResult": false,
        "bInterpResult": false,
        "InRange": {
            "Min": 0,
            "Max": 1
        },
        "OutRange": {
            "Min": 0,
            "Max": 1
        },
        "Scale": 1,
        "Bias": 0,
        "ClampMin": 0,
        "ClampMax": 1,
        "InterpSpeedIncreasing": 10,
        "InterpSpeedDecreasing": 10
    };
    float __FloatProperty_13 = 1;
    enum __EnumProperty_14 = EAnimSyncMethod::DoNotSync;
    bool __BoolProperty_15 = false;
    enum EAnimGroupRole __ByteProperty_16 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_17 = FName("None");

};