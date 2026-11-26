class UABP_QBZ-97_C : public UWeaponAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/QBZ-97/Mesh/QBZ97_Receiver_Skeleton.QBZ97_Receiver_Skeleton'";
    TMap<FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap = {
        { FName("AnimGraph"), {
            "OrderedSavedPoseNodeIndices": {
                4
            }
        } }
    };
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                3,
                11,
                12,
                13
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
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
                23,
                23,
                23,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                22,
                21,
                19,
                20,
                19,
                4294967295,
                3,
                3,
                2,
                4294967295,
                17,
                19,
                19
            },
            "NodeIndex": 1,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                22,
                21,
                20,
                19,
                4,
                17,
                19,
                16,
                15,
                15,
                14,
                17
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                22,
                21,
                20,
                19,
                5,
                17,
                19,
                16,
                15,
                15,
                14,
                17
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
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
                23,
                23,
                23,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                6,
                11,
                10,
                4294967295,
                9,
                8,
                13,
                7,
                2147483648
            },
            "NodeIndex": 6,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
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
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                12,
                11,
                10,
                4294967295,
                9,
                8,
                13,
                13,
                19,
                2147483649
            },
            "NodeIndex": 8,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                4294967295
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                4294967295
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                22,
                21,
                20,
                19,
                18,
                17,
                19,
                16,
                15,
                15,
                14,
                17
            },
            "NodeIndex": 11,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 12,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
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
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                23,
                23,
                23,
                4294967295,
                4294967295
            },
            "NodeIndex": 14,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
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
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
        } }, 
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
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Rifle/QBZ-97/Mesh/ABP_QBZ-97.ABP_QBZ-97_C:ExecuteUbergraph_ABP_QBZ-97'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__ByteProperty": 0,
        "__BoolProperty_0": false
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 12
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/QBZ-97/Weapon/A_WEP_QBZ97_Idle.A_WEP_QBZ97_Idle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_2 = {
        "Source": {
            "LinkID": 1
        },
        "SlotName": FName("DefaultSlot"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_1 = {
        "Source": {
            "LinkID": 6
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
                "LinkID": 2
            },
            {
                "LinkID": 3
            },
            {
                "LinkID": -1
            }
        }
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1 = {
        "BasePose": {
            "LinkID": 4
        },
        "BlendPoses": {
            {
                "LinkID": 5
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
            }
        },
        "SkeletonGuid": FGuid(0xA5147F8B, 0x4BBB106A, 0x3154009F, 0x57F1805E),
        "VirtualBoneGuid": FGuid(0x59521306, 0x40022B0A, 0x1205699C, 0x936A8003),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool = {
        "BlendPose": {
            {
                "LinkID": 13
            },
            {
                "LinkID": 9
            }
        }
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1 = {
        "LinkToCachingNode": {
            "LinkID": 10
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose = {
        "Pose": {
            "LinkID": 7
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_Slot AnimGraphNode_Slot = {
        "Source": {
            "LinkID": 8
        },
        "SlotName": FName("Chamber"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend = {
        "BasePose": {
            "LinkID": 14
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
                        "BoneName": FName("Bolt-Catch"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("Chamber"),
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
                "BlendWeight": 1
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
        "SkeletonGuid": FGuid(0xA5147F8B, 0x4BBB106A, 0x3154009F, 0x57F1805E),
        "VirtualBoneGuid": FGuid(0x59521306, 0x40022B0A, 0x1205699C, 0x936A8003),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose = {
        "LinkToCachingNode": {
            "LinkID": 10
        },
        "CachePoseName": FName("BasePose")
    };
    FName __NameProperty_84 = FName("DefaultSharedGroup");
    FName __NameProperty_85 = FName("AnimGraph");
    struct FInputScaleBiasClampConstants __StructProperty_86 = {
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
    float __FloatProperty_87 = 1;
    class UAnimSequence* __AnimSequenceBase_88 = "AnimSequence'Test_C/Content/Animations/UE5/FP/QBZ-97/Weapon/A_WEP_QBZ97_ToSemi.A_WEP_QBZ97_ToSemi'";
    class UAnimSequence* __AnimSequenceBase_89 = "AnimSequence'Test_C/Content/Animations/UE5/FP/QBZ-97/Weapon/A_WEP_QBZ97_ToAuto.A_WEP_QBZ97_ToAuto'";
    TArray<float> __ArrayProperty_90 = {
        0,
        0,
        0,
        0.1
    };
    TArray<int32> __ArrayProperty_91 = {
        1,
        2,
        3,
        0,
        0,
        0,
        0,
        0
    };
    class UObject* __CurveFloat_92 = nullptr;
    enum __EnumProperty_93 = EBlendListChildUpdateMode::Default;
    enum __EnumProperty_94 = EAlphaBlendOption::Linear;
    enum __EnumProperty_95 = EBlendListTransitionType::StandardBlend;
    TArray<float> __ArrayProperty_96 = {
        0,
        0
    };
    class UObject* __BlendProfile_97 = nullptr;
    enum ESequenceEvalReinit __ByteProperty_98 = ESequenceEvalReinit::ExplicitTime;
    bool __BoolProperty_99 = true;
    int32 __IntProperty_100 = 0;
    float __FloatProperty_101 = 0;
    class UAnimSequence* __AnimSequenceBase_102 = "AnimSequence'Test_C/Content/Animations/UE5/FP/QBZ-97/Rig/30rnd/A_FP_QBZ97_30rnd_Mag_In_Empty.A_FP_QBZ97_30rnd_Mag_In_Empty'";
    bool __BoolProperty_103 = false;
    enum __EnumProperty_104 = EAnimSyncMethod::DoNotSync;
    enum EAnimGroupRole __ByteProperty_105 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_106 = FName("None");
    struct FAnimNodeFunctionRef __StructProperty_107 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };

};