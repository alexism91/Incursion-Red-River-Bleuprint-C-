class UABP_F1_C : public UWeaponAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/F-1_Hand_Grenade/Mesh/F1_Rigged_Skeleton.F1_Rigged_Skeleton'";
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
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 1,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                2,
                2,
                2,
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
                7,
                7
            },
            "NodeIndex": 2,
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
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_Slot'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("Source"), 3 }, 
                { FName("SlotName"), 4 }, 
                { FName("bAlwaysUpdateSourcePose"), 5 }
            },
            "NumProperties": 6
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
    struct FAnimNode_Slot AnimGraphNode_Slot = {
        "Source": {
            "LinkID": 2
        },
        "SlotName": FName("DefaultSlot"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Grenade/F-1/Weapon/A_WEP_F1_Grenade_Idle.A_WEP_F1_Grenade_Idle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    bool bUseMultiThreadedAnimationUpdate = true;
    FName __NameProperty_11 = FName("DefaultSharedGroup");
    FName __NameProperty_12 = FName("AnimGraph");
    struct FAnimNodeFunctionRef __StructProperty_13 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    float __FloatProperty_14 = 0;
    struct FInputScaleBiasClampConstants __StructProperty_15 = {
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
    float __FloatProperty_16 = 1;
    enum __EnumProperty_17 = EAnimSyncMethod::DoNotSync;
    bool __BoolProperty_18 = false;
    enum EAnimGroupRole __ByteProperty_19 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_20 = FName("None");

};