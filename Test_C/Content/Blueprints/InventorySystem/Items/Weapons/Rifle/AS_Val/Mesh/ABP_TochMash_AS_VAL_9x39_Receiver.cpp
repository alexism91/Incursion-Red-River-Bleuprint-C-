class UABP_TochMash_AS_VAL_9x39_Receiver_C : public UAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/AS_Val/Mesh/SKM_TochMash_AS_VAL_9x39_Receiver_Skeleton.SKM_TochMash_AS_VAL_9x39_Receiver_Skeleton'";
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                4,
                5
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                11,
                10,
                9,
                8,
                2,
                6,
                8,
                5,
                4,
                4,
                3,
                6
            },
            "NodeIndex": 1,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                11,
                10,
                9,
                8,
                7,
                6,
                8,
                5,
                4,
                4,
                3,
                6
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                17,
                16,
                15,
                4294967295,
                14,
                13,
                12,
                18,
                2147483648
            },
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 6,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("BasePose"), 3 }, 
                { FName("BlendPoses"), 4 }, 
                { FName("BlendMode"), 5 }, 
                { FName("BlendMasks"), 6 }, 
                { FName("LayerSetup"), 7 }, 
                { FName("BlendWeights"), 8 }, 
                { FName("PerBoneBlendWeights"), 9 }, 
                { FName("SkeletonGuid"), 10 }, 
                { FName("VirtualBoneGuid"), 11 }, 
                { FName("LODThreshold"), 12 }, 
                { FName("bMeshSpaceRotationBlend"), 13 }, 
                { FName("bRootSpaceRotationBlend"), 14 }, 
                { FName("bMeshSpaceScaleBlend"), 15 }, 
                { FName("CurveBlendOption"), 16 }, 
                { FName("bBlendRootMotionBasedOnRootBone"), 17 }
            },
            "NumProperties": 18
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_BlendListByEnum'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("BlendPose"), 3 }, 
                { FName("BlendTime"), 4 }, 
                { FName("TransitionType"), 5 }, 
                { FName("BlendType"), 6 }, 
                { FName("bResetChildOnActivation"), 7 }, 
                { FName("ChildUpateMode"), 8 }, 
                { FName("CustomBlendCurve"), 9 }, 
                { FName("BlendProfile"), 10 }, 
                { FName("EnumToPoseIndex"), 11 }, 
                { FName("ActiveEnumValue"), 12 }
            },
            "NumProperties": 13
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_BlendListBase'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("BlendPose"), 3 }, 
                { FName("BlendTime"), 4 }, 
                { FName("TransitionType"), 5 }, 
                { FName("BlendType"), 6 }, 
                { FName("bResetChildOnActivation"), 7 }, 
                { FName("ChildUpateMode"), 8 }, 
                { FName("CustomBlendCurve"), 9 }, 
                { FName("BlendProfile"), 10 }
            },
            "NumProperties": 11
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
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_SequenceEvaluator'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("GroupIndex"), 3 }, 
                { FName("GroupScope"), 4 }, 
                { FName("BlendWeight"), 5 }, 
                { FName("InternalTimeAccumulator"), 6 }, 
                { FName("GroupName"), 7 }, 
                { FName("GroupRole"), 8 }, 
                { FName("Method"), 9 }, 
                { FName("bIgnoreForRelevancyTest"), 10 }, 
                { FName("Sequence"), 11 }, 
                { FName("ExplicitTime"), 12 }, 
                { FName("bUseExplicitFrame"), 13 }, 
                { FName("ExplicitFrame"), 14 }, 
                { FName("bShouldLoop"), 15 }, 
                { FName("bTeleportToExplicitTime"), 16 }, 
                { FName("ReinitializationBehavior"), 17 }, 
                { FName("StartPosition"), 18 }
            },
            "NumProperties": 19
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_SequenceEvaluatorBase'", {
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
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__ByteProperty": 0
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 6
        }
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_1 = {
        "Source": {
            "LinkID": -1
        },
        "SlotName": FName("DefaultSlot"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_Slot AnimGraphNode_Slot = {
        "Source": {
            "LinkID": 5
        },
        "SlotName": FName("SwitchFireMode"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum = {
        "BlendPose": {
            {
                "LinkID": -1
            },
            {
                "LinkID": 1
            },
            {
                "LinkID": 2
            },
            {
                "LinkID": -1
            }
        }
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend = {
        "BasePose": {
            "LinkID": 3
        },
        "BlendPoses": {
            {
                "LinkID": 4
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("fire-selector"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x44BA8D8D, 0x4F4BBDFB, 0xED3278A6, 0x2540E9AC),
        "VirtualBoneGuid": FGuid(0x2C98C3DD, 0x48052AB5, 0x5EC7E98B, 0x05A181AD),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    FName __NameProperty_33 = FName("DefaultSharedGroup");
    FName __NameProperty_34 = FName("AnimGraph");
    class UAnimSequence* __AnimSequenceBase_35 = "AnimSequence'Test_C/Content/Animations/UE5/FP/AS_VAL/Weapon/A_WEP_AS_VAL_ToSemi.A_WEP_AS_VAL_ToSemi'";
    enum ESequenceEvalReinit __ByteProperty_36 = ESequenceEvalReinit::ExplicitTime;
    bool __BoolProperty_37 = true;
    int32 __IntProperty_38 = 0;
    float __FloatProperty_39 = 0;
    class UAnimSequence* __AnimSequenceBase_40 = "AnimSequence'Test_C/Content/Animations/UE5/FP/AS_VAL/Weapon/A_WEP_AS_VAL_ToAuto.A_WEP_AS_VAL_ToAuto'";
    bool __BoolProperty_41 = false;
    enum __EnumProperty_42 = EAnimSyncMethod::DoNotSync;
    enum EAnimGroupRole __ByteProperty_43 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_44 = FName("None");
    class UObject* __BlendProfile_45 = nullptr;
    class UObject* __CurveFloat_46 = nullptr;
    enum __EnumProperty_47 = EBlendListChildUpdateMode::Default;
    enum __EnumProperty_48 = EAlphaBlendOption::Linear;
    enum __EnumProperty_49 = EBlendListTransitionType::StandardBlend;
    TArray<float> __ArrayProperty_50 = {
        0,
        0,
        0,
        0
    };
    TArray<int32> __ArrayProperty_51 = {
        1,
        2,
        3,
        0,
        0,
        0,
        0,
        0
    };
    struct FAnimNodeFunctionRef __StructProperty_52 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };

};