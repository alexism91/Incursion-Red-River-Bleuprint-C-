class UABP_M9A3_Receiver_C : public UWeaponAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Pistol/M9A3/Mesh/M9A3_Receiver_Skeleton.M9A3_Receiver_Skeleton'";
    TMap<FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap = {
        { FName("AnimGraph"), {
            "OrderedSavedPoseNodeIndices": {
                5
            }
        } }
    };
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                0,
                1,
                8
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
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
                10,
                10,
                10,
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
                10,
                10,
                10,
                4294967295,
                7,
                6,
                5,
                4294967295,
                4,
                3,
                8,
                8,
                16,
                2147483648
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                19,
                18,
                17,
                16,
                2,
                14,
                16,
                13,
                12,
                12,
                11,
                14
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
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
                10,
                10,
                10,
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
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
                4294967295,
                4294967295
            },
            "NodeIndex": 6,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
                4294967295,
                4294967295
            },
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
                4294967295,
                4294967295
            },
            "NodeIndex": 8,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
                4294967295,
                7,
                6,
                5,
                4294967295,
                4,
                3,
                8,
                8,
                16,
                2147483649
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                19,
                18,
                17,
                16,
                9,
                14,
                16,
                13,
                12,
                12,
                11,
                14
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                10,
                10,
                10,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                19,
                18,
                17,
                16,
                15,
                14,
                16,
                13,
                12,
                12,
                11,
                14
            },
            "NodeIndex": 11,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
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
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
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
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Pistol/M9A3/Mesh/ABP_M9A3_Receiver.ABP_M9A3_Receiver_C:ExecuteUbergraph_ABP_M9A3_Receiver'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__BoolProperty": false,
        "__BoolProperty_0": false
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 4
        }
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_1 = {
        "Source": {
            "LinkID": 9
        },
        "SlotName": FName("DefaultSlot"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1 = {
        "BlendPose": {
            {
                "LinkID": 5
            },
            {
                "LinkID": 8
            }
        }
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_Slot AnimGraphNode_Slot = {
        "Source": {
            "LinkID": 2
        },
        "SlotName": FName("Chamber"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend = {
        "BasePose": {
            "LinkID": 7
        },
        "BlendPoses": {
            {
                "LinkID": 3
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("slide"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("barrel"),
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
                "BlendWeight": 1
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
            }
        },
        "SkeletonGuid": FGuid(0x85E8CAEB, 0x43720B1B, 0xC5724C84, 0xCD3CCA28),
        "VirtualBoneGuid": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose = {
        "Pose": {
            "LinkID": 1
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1 = {
        "LinkToCachingNode": {
            "LinkID": 6
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose = {
        "LinkToCachingNode": {
            "LinkID": 6
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool = {
        "BlendPose": {
            {
                "LinkID": 11
            },
            {
                "LinkID": 10
            }
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
    bool bUseMultiThreadedAnimationUpdate = true;
    FName __NameProperty_69 = FName("DefaultSharedGroup");
    FName __NameProperty_70 = FName("AnimGraph");
    class UAnimSequence* __AnimSequenceBase_71 = "AnimSequence'Test_C/Content/Animations/UE5/FP/M9A3/Weapon/17rnd/A_WEP_M9A3_17rnd_Mag_In_Empty.A_WEP_M9A3_17rnd_Mag_In_Empty'";
    class UObject* __CurveFloat_72 = nullptr;
    enum __EnumProperty_73 = EBlendListChildUpdateMode::Default;
    enum __EnumProperty_74 = EAlphaBlendOption::Linear;
    enum __EnumProperty_75 = EBlendListTransitionType::StandardBlend;
    TArray<float> __ArrayProperty_76 = {
        0,
        0
    };
    class UObject* __BlendProfile_77 = nullptr;
    class UAnimSequence* __AnimSequenceBase_78 = "AnimSequence'Test_C/Content/Animations/UE5/FP/M9A3/Weapon/A_WEP_M9A3_Idle.A_WEP_M9A3_Idle'";
    struct FAnimNodeFunctionRef __StructProperty_79 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    enum ESequenceEvalReinit __ByteProperty_80 = ESequenceEvalReinit::ExplicitTime;
    bool __BoolProperty_81 = true;
    int32 __IntProperty_82 = 0;
    float __FloatProperty_83 = 0;
    class UAnimSequence* __AnimSequenceBase_84 = "AnimSequence'Test_C/Content/Animations/UE5/FP/M9A3/Weapon/Malfunctions/A_WEP_M9A3_Jam_Misfire.A_WEP_M9A3_Jam_Misfire'";
    bool __BoolProperty_85 = false;
    enum __EnumProperty_86 = EAnimSyncMethod::DoNotSync;
    enum EAnimGroupRole __ByteProperty_87 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_88 = FName("None");

};