class UABP_GCPS_UE5_C : public UAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Characters/Mannequins/Meshes/SK_IRR_Mannequin.SK_IRR_Mannequin'";
    TArray<FName> SyncGroupNames = {
        FName("Walking")
    };
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                4
            }
        } }, 
        { FName("Extra_Additives"), {
            "PlayerNodeIndices": {
                10,
                12,
                13
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                13,
                4294967295,
                4294967295
            },
            "NodeIndex": 0,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                0,
                16,
                4294967295
            },
            "NodeIndex": 1,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                1,
                16,
                4294967295
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
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
                18,
                18,
                18,
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
                18,
                18,
                18,
                4294967295,
                13,
                4294967295,
                4294967295
            },
            "NodeIndex": 6,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                2,
                16,
                4294967295
            },
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
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
                18,
                18,
                18,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                15,
                14,
                13,
                12,
                13,
                2147483648,
                9,
                11,
                4,
                4,
                9,
                4294967295
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                15,
                14,
                13,
                12,
                13,
                2147483650,
                2147483649,
                11,
                4,
                4,
                9,
                4294967295
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
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
            "NodeIndex": 11,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                15,
                14,
                12,
                13,
                7,
                6,
                13,
                5,
                4,
                4,
                3,
                9
            },
            "NodeIndex": 12,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
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
                18,
                18,
                18,
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
            "NodeIndex": 14,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                8,
                15,
                4294967295
            },
            "NodeIndex": 15,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 16,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
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
            "NodeIndex": 17,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                15,
                14,
                13,
                12,
                13,
                4294967295,
                11,
                11,
                10,
                4294967295,
                9,
                13,
                13
            },
            "NodeIndex": 18,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
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
            "NodeIndex": 19,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 20,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
                4294967295,
                17,
                16,
                4294967295
            },
            "NodeIndex": 21,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                18,
                18,
                18,
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
            "NodeIndex": 22,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
        { "ScriptStruct'/Script/Engine.AnimNode_LinkedAnimLayer'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("SourcePropertyNames"), 3 }, 
                { FName("DestPropertyNames"), 4 }, 
                { FName("TargetInstance"), 5 }, 
                { FName("SourceInstance"), 6 }, 
                { FName("InputPoses"), 7 }, 
                { FName("InputPoseNames"), 8 }, 
                { FName("InstanceClass"), 9 }, 
                { FName("Tag"), 10 }, 
                { FName("PendingBlendOutProfile"), 11 }, 
                { FName("PendingBlendInProfile"), 12 }, 
                { FName("bPropagateNotifiesToLinkedInstances"), 13 }, 
                { FName("bReceiveNotifiesFromLinkedInstances"), 14 }, 
                { FName("Interface"), 15 }, 
                { FName("Layer"), 16 }
            },
            "NumProperties": 17
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_LinkedAnimGraph'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("SourcePropertyNames"), 3 }, 
                { FName("DestPropertyNames"), 4 }, 
                { FName("TargetInstance"), 5 }, 
                { FName("SourceInstance"), 6 }, 
                { FName("InputPoses"), 7 }, 
                { FName("InputPoseNames"), 8 }, 
                { FName("InstanceClass"), 9 }, 
                { FName("Tag"), 10 }, 
                { FName("PendingBlendOutProfile"), 11 }, 
                { FName("PendingBlendInProfile"), 12 }, 
                { FName("bReceiveNotifiesFromLinkedInstances"), 13 }, 
                { FName("bPropagateNotifiesToLinkedInstances"), 14 }
            },
            "NumProperties": 15
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_CustomProperty'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("SourcePropertyNames"), 3 }, 
                { FName("DestPropertyNames"), 4 }, 
                { FName("TargetInstance"), 5 }, 
                { FName("SourceInstance"), 6 }
            },
            "NumProperties": 7
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
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_LinkedInputPose'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("Name"), 3 }, 
                { FName("Graph"), 4 }, 
                { FName("InputPose"), 5 }, 
                { FName("bIsOutputLinked"), 6 }
            },
            "NumProperties": 7
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_ApplyAdditive'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("Base"), 3 }, 
                { FName("Additive"), 4 }, 
                { FName("Alpha"), 5 }, 
                { FName("AlphaScaleBias"), 6 }, 
                { FName("LODThreshold"), 7 }, 
                { FName("AlphaBoolBlend"), 8 }, 
                { FName("AlphaCurveName"), 9 }, 
                { FName("AlphaScaleBiasClamp"), 10 }, 
                { FName("AlphaInputType"), 11 }, 
                { FName("bAlphaBoolEnabled"), 12 }
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
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("GroupIndex"), 3 }, 
                { FName("GroupScope"), 4 }, 
                { FName("BlendWeight"), 5 }, 
                { FName("InternalTimeAccumulator"), 6 }, 
                { FName("PreviousBlendSpace"), 7 }, 
                { FName("GroupName"), 8 }, 
                { FName("GroupRole"), 9 }, 
                { FName("bOverridePositionWhenJoiningSyncGroupAsLeader"), 10 }, 
                { FName("Method"), 11 }, 
                { FName("bIgnoreForRelevancyTest"), 12 }, 
                { FName("X"), 13 }, 
                { FName("Y"), 14 }, 
                { FName("PlayRate"), 15 }, 
                { FName("bLoop"), 16 }, 
                { FName("bResetPlayTimeWhenBlendSpaceChanges"), 17 }, 
                { FName("StartPosition"), 18 }, 
                { FName("BlendSpace"), 19 }
            },
            "NumProperties": 20
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_BlendSpacePlayerBase'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("GroupIndex"), 3 }, 
                { FName("GroupScope"), 4 }, 
                { FName("BlendWeight"), 5 }, 
                { FName("InternalTimeAccumulator"), 6 }, 
                { FName("PreviousBlendSpace"), 7 }
            },
            "NumProperties": 8
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_RandomPlayer'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("Entries"), 3 }, 
                { FName("bIgnoreForRelevancyTest"), 4 }, 
                { FName("BlendWeight"), 5 }, 
                { FName("bShuffleMode"), 6 }
            },
            "NumProperties": 7
        } }
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Animations/UE5/AnimBPs/ABP_GCPS_UE5.ABP_GCPS_UE5_C:ExecuteUbergraph_ABP_GCPS_UE5'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__FloatProperty": 0,
        "__FloatProperty_0": 0,
        "__FloatProperty_1": 0
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_1 = {
        "Entries": {
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/A_FP_GCPS_Fiddle1.A_FP_GCPS_Fiddle1'",
                "ChanceToPlay": 0.1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 1,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.2,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/A_FP_GCPS_Fiddle2.A_FP_GCPS_Fiddle2'",
                "ChanceToPlay": 0.1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 1,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.2,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/A_FP_GCPS_Fiddle3.A_FP_GCPS_Fiddle3'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 1,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.2,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            }
        },
        "BlendWeight": 0,
        "bShuffleMode": false
    };
    struct FAnimNode_Root AnimGraphNode_Root_4 = {
        "Result": {
            "LinkID": 2
        }
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4 = {
        "Name": FName("InPose_1"),
        "Graph": FName("Extra_IdleFidgets_Aimed"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_Root AnimGraphNode_Root_3 = {
        "Result": {
            "LinkID": 5
        }
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3 = {
        "Name": FName("InPose_0"),
        "Graph": FName("Extra_IdleFidgets_Default"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4 = {
        "base": {
            "LinkID": 4
        },
        "Additive": {
            "LinkID": 6
        },
        "Alpha": 1,
        "AlphaScaleBias": {
            "Scale": 1,
            "Bias": 0
        },
        "LODThreshold": -1,
        "AlphaBoolBlend": {
            "BlendInTime": 0,
            "BlendOutTime": 0,
            "BlendOption": EAlphaBlendOption::Linear,
            "bInitialized": false,
            "CustomCurve": nullptr,
            "AlphaBlend": {
                "CustomCurve": nullptr,
                "BlendTime": 0.2,
                "BlendOption": EAlphaBlendOption::Linear
            }
        },
        "AlphaCurveName": FName("None"),
        "AlphaScaleBiasClamp": {
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
        },
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true
    };
    struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer = {
        "Entries": {
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/A_FP_GCPS_Fiddle1.A_FP_GCPS_Fiddle1'",
                "ChanceToPlay": 0.2,
                "MinLoopCount": 0,
                "MaxLoopCount": 1,
                "MinPlayRate": 0.9,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.2,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/A_FP_GCPS_Fiddle2.A_FP_GCPS_Fiddle2'",
                "ChanceToPlay": 0.2,
                "MinLoopCount": 0,
                "MaxLoopCount": 1,
                "MinPlayRate": 0.9,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.2,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/A_FP_GCPS_Fiddle3.A_FP_GCPS_Fiddle3'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 1,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.2,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            }
        },
        "BlendWeight": 0,
        "bShuffleMode": true
    };
    struct FAnimNode_Root AnimGraphNode_Root_2 = {
        "Result": {
            "LinkID": 14
        }
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2 = {
        "Name": FName("InPose"),
        "Graph": FName("Extra_Additives"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1 = {
        "BlendSpace": "BlendSpace1D'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/BS_FP_GCPS_Scrl.BS_FP_GCPS_Scrl'",
        "PreviousBlendSpace": nullptr,
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer = {
        "BlendSpace": "BlendSpace'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/BS_FP_GCPS_Ths.BS_FP_GCPS_Ths'",
        "PreviousBlendSpace": nullptr,
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3 = {
        "base": {
            "LinkID": 8
        },
        "Additive": {
            "LinkID": 9
        },
        "Alpha": 1,
        "AlphaScaleBias": {
            "Scale": 1,
            "Bias": 0
        },
        "LODThreshold": -1,
        "AlphaBoolBlend": {
            "BlendInTime": 0,
            "BlendOutTime": 0,
            "BlendOption": EAlphaBlendOption::Linear,
            "bInitialized": false,
            "CustomCurve": nullptr,
            "AlphaBlend": {
                "CustomCurve": nullptr,
                "BlendTime": 0.2,
                "BlendOption": EAlphaBlendOption::Linear
            }
        },
        "AlphaCurveName": FName("None"),
        "AlphaScaleBiasClamp": {
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
        },
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2 = {
        "base": {
            "LinkID": 11
        },
        "Additive": {
            "LinkID": 10
        },
        "Alpha": 1,
        "AlphaScaleBias": {
            "Scale": 1,
            "Bias": 0
        },
        "LODThreshold": -1,
        "AlphaBoolBlend": {
            "BlendInTime": 0,
            "BlendOutTime": 0,
            "BlendOption": EAlphaBlendOption::Linear,
            "bInitialized": false,
            "CustomCurve": nullptr,
            "AlphaBlend": {
                "CustomCurve": nullptr,
                "BlendTime": 0.2,
                "BlendOption": EAlphaBlendOption::Linear
            }
        },
        "AlphaCurveName": FName("None"),
        "AlphaScaleBiasClamp": {
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
        },
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1 = {
        "base": {
            "LinkID": 13
        },
        "Additive": {
            "LinkID": 12
        },
        "Alpha": 1,
        "AlphaScaleBias": {
            "Scale": 1,
            "Bias": 0
        },
        "LODThreshold": -1,
        "AlphaBoolBlend": {
            "BlendInTime": 0.1,
            "BlendOutTime": 0.1,
            "BlendOption": EAlphaBlendOption::Linear,
            "bInitialized": false,
            "CustomCurve": nullptr,
            "AlphaBlend": {
                "CustomCurve": nullptr,
                "BlendTime": 0.2,
                "BlendOption": EAlphaBlendOption::Linear
            }
        },
        "AlphaCurveName": FName("None"),
        "AlphaScaleBiasClamp": {
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
        },
        "AlphaInputType": EAnimAlphaInputType::Bool,
        "bAlphaBoolEnabled": true
    };
    struct FAnimNode_Root AnimGraphNode_Root_1 = {
        "Result": {
            "LinkID": 22
        }
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1 = {
        "Name": FName("InPose"),
        "Graph": FName("AnimGraph"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": false
    };
    struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_1 = {
        "Interface": "AnimBlueprintGeneratedClass'Test_C/Content/Animations/UE5/AnimLayers/I_WeaponAdditiveLayer.I_WeaponAdditiveLayer_C'",
        "Layer": FName("Extra_Additives"),
        "InputPoses": {
            {
                "LinkID": 18
            }
        },
        "InputPoseNames": {
            FName("InPose")
        },
        "InstanceClass": nullptr,
        "PendingBlendOutProfile": nullptr,
        "PendingBlendInProfile": nullptr,
        "bReceiveNotifiesFromLinkedInstances": false,
        "bPropagateNotifiesToLinkedInstances": false,
        "SourcePropertyNames": {},
        "DestPropertyNames": {},
        "TargetInstance": nullptr
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/A_FP_GCPS_Idle.A_FP_GCPS_Idle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive = {
        "base": {
            "LinkID": 20
        },
        "Additive": {
            "LinkID": 0
        },
        "Alpha": 1,
        "AlphaScaleBias": {
            "Scale": 1,
            "Bias": 0
        },
        "LODThreshold": -1,
        "AlphaBoolBlend": {
            "BlendInTime": 0,
            "BlendOutTime": 0,
            "BlendOption": EAlphaBlendOption::Linear,
            "bInitialized": false,
            "CustomCurve": nullptr,
            "AlphaBlend": {
                "CustomCurve": nullptr,
                "BlendTime": 0.2,
                "BlendOption": EAlphaBlendOption::Linear
            }
        },
        "AlphaCurveName": FName("None"),
        "AlphaScaleBiasClamp": {
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
        },
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose = {
        "Name": FName("InPose_1"),
        "Graph": FName("Extra_IdleFidgets_Crouched"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 19
        }
    };
    struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer = {
        "Interface": "AnimBlueprintGeneratedClass'Test_C/Content/Animations/UE5/AnimLayers/I_WeaponAdditiveLayer.I_WeaponAdditiveLayer_C'",
        "Layer": FName("Extra_IdleFidgets_Default"),
        "InputPoses": {
            {
                "LinkID": 17
            }
        },
        "InputPoseNames": {
            FName("InPose_0")
        },
        "InstanceClass": nullptr,
        "PendingBlendOutProfile": nullptr,
        "PendingBlendInProfile": nullptr,
        "bReceiveNotifiesFromLinkedInstances": false,
        "bPropagateNotifiesToLinkedInstances": false,
        "SourcePropertyNames": {},
        "DestPropertyNames": {},
        "TargetInstance": nullptr
    };
    struct FVector2D ThumbStickValue = FVector2D(0, 0);
    float IdleAdditiveAlpha = 1;
    FName __NameProperty_103 = FName("Extra_IdleFidgets_Aimed");
    FName __NameProperty_104 = FName("Extra_IdleFidgets_Default");
    FName __NameProperty_105 = FName("Extra_Additives");
    enum ESequenceEvalReinit __ByteProperty_106 = ESequenceEvalReinit::ExplicitTime;
    bool __BoolProperty_107 = true;
    int32 __IntProperty_108 = 0;
    float __FloatProperty_109 = 0.05;
    class UAnimSequence* __AnimSequenceBase_110 = "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Rig/A_FP_GCPS_ThS_Click.A_FP_GCPS_ThS_Click'";
    FName __NameProperty_111 = FName("AnimGraph");
    float __FloatProperty_112 = 0;
    struct FInputScaleBiasClampConstants __StructProperty_113 = {
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
    float __FloatProperty_114 = 1;
    enum __EnumProperty_115 = EAnimSyncMethod::DoNotSync;
    bool __BoolProperty_116 = false;
    enum EAnimGroupRole __ByteProperty_117 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_118 = FName("None");
    FName __NameProperty_119 = FName("DefaultSharedGroup");
    FName __NameProperty_120 = FName("Extra_IdleFidgets_Crouched");
    struct FAnimNodeFunctionRef __StructProperty_121 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    class UBP_GCPSComponent_C* As BP GCPSComponent;
    float SliderValue;
    bool ThumbStickDown;

};