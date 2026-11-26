class UABP_MCX_C : public UWeaponAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/Sig_Sauer_MCX_Virtus/Mesh/MCX_Virtus_Receiver_Skeleton.MCX_Virtus_Receiver_Skeleton'";
    TMap<FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap = {
        { FName("AnimGraph"), {
            "OrderedSavedPoseNodeIndices": {
                9
            }
        } }
    };
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                3,
                4,
                11
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                0,
                13,
                4294967295
            },
            "NodeIndex": 0,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
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
                21,
                21,
                21,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                13,
                12,
                11,
                10,
                2,
                1,
                10,
                7,
                6,
                6,
                5,
                8
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
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
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                4294967295
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                4294967295
            },
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                4294967295
            },
            "NodeIndex": 6,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                3,
                18,
                17,
                4294967295,
                16,
                15,
                14,
                14,
                10,
                2147483648
            },
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 8,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                13,
                12,
                11,
                10,
                4,
                8,
                10,
                7,
                6,
                6,
                5,
                8
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                13,
                12,
                11,
                10,
                9,
                8,
                10,
                7,
                6,
                6,
                5,
                8
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 11,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
                4294967295,
                19,
                18,
                17,
                4294967295,
                16,
                15,
                14,
                20,
                2147483649
            },
            "NodeIndex": 12,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                21,
                21,
                21,
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
            "NodeIndex": 13,
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
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_BlendListByBool'", {
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
                { FName("BlendProfileForFalse"), 11 }, 
                { FName("bUseSeperateBlendProfileForFalse"), 12 }, 
                { FName("bActiveValue"), 13 }
            },
            "NumProperties": 14
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_UseCachedPose'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("LinkToCachingNode"), 3 }, 
                { FName("CachePoseName"), 4 }
            },
            "NumProperties": 5
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_SaveCachedPose'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("Pose"), 3 }, 
                { FName("CachePoseName"), 4 }
            },
            "NumProperties": 5
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
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/Sig_Sauer_MCX_Virtus/Mesh/ABP_MCX.ABP_MCX_C:ExecuteUbergraph_ABP_MCX'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__BoolProperty": false,
        "__ByteProperty_0": 0
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 8
        }
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_2 = {
        "Source": {
            "LinkID": -1
        },
        "SlotName": FName("DefaultSlot"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1 = {
        "BasePose": {
            "LinkID": 5
        },
        "BlendPoses": {
            {
                "LinkID": 2
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("Bolt-Catch"),
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
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x0A0F1FC8, 0x447AA0DD, 0xE293ACBA, 0xFB8B0D13),
        "VirtualBoneGuid": FGuid(0x03E0E22F, 0x4BCCA4C2, 0x68A701B2, 0x8E191F46),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose = {
        "Pose": {
            "LinkID": 13
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1 = {
        "LinkToCachingNode": {
            "LinkID": 4
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose = {
        "LinkToCachingNode": {
            "LinkID": 4
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool = {
        "BlendPose": {
            {
                "LinkID": 3
            },
            {
                "LinkID": 6
            }
        }
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_1 = {
        "Source": {
            "LinkID": 7
        },
        "SlotName": FName("Chamber"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_Slot AnimGraphNode_Slot = {
        "Source": {
            "LinkID": 12
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
                "LinkID": 9
            },
            {
                "LinkID": 10
            },
            {
                "LinkID": -1
            }
        }
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend = {
        "BasePose": {
            "LinkID": 1
        },
        "BlendPoses": {
            {
                "LinkID": 11
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("Safety"),
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
            }
        },
        "SkeletonGuid": FGuid(0x0A0F1FC8, 0x447AA0DD, 0xE293ACBA, 0xFB8B0D13),
        "VirtualBoneGuid": FGuid(0x03E0E22F, 0x4BCCA4C2, 0x68A701B2, 0x8E191F46),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    FName __NameProperty_72 = FName("AnimGraph");
    float __FloatProperty_73 = 0.15;
    class UAnimSequence* __AnimSequenceBase_74 = "AnimSequence'Test_C/Content/Animations/UE5/FP/MCX/Weapon/30rnd/A_WEP_MCX_30rnd_Mag_In_Empty.A_WEP_MCX_30rnd_Mag_In_Empty'";
    TArray<float> __ArrayProperty_75 = {
        0,
        0
    };
    class UAnimSequence* __AnimSequenceBase_76 = "AnimSequence'Test_C/Content/Animations/UE5/FP/MCX/Weapon/A_WEP_MCX_ToSemi.A_WEP_MCX_ToSemi'";
    enum ESequenceEvalReinit __ByteProperty_77 = ESequenceEvalReinit::ExplicitTime;
    bool __BoolProperty_78 = true;
    int32 __IntProperty_79 = 0;
    float __FloatProperty_80 = 0;
    class UAnimSequence* __AnimSequenceBase_81 = "AnimSequence'Test_C/Content/Animations/UE5/FP/MCX/Weapon/A_WEP_MCX_ToFull.A_WEP_MCX_ToFull'";
    bool __BoolProperty_82 = false;
    enum __EnumProperty_83 = EAnimSyncMethod::DoNotSync;
    enum EAnimGroupRole __ByteProperty_84 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_85 = FName("None");
    class UObject* __BlendProfile_86 = nullptr;
    class UObject* __CurveFloat_87 = nullptr;
    enum __EnumProperty_88 = EBlendListChildUpdateMode::Default;
    enum __EnumProperty_89 = EAlphaBlendOption::Linear;
    enum __EnumProperty_90 = EBlendListTransitionType::StandardBlend;
    TArray<float> __ArrayProperty_91 = {
        0,
        0,
        0,
        0.1
    };
    TArray<int32> __ArrayProperty_92 = {
        1,
        2,
        3,
        0,
        0,
        0,
        0,
        0
    };
    struct FAnimNodeFunctionRef __StructProperty_93 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };

};