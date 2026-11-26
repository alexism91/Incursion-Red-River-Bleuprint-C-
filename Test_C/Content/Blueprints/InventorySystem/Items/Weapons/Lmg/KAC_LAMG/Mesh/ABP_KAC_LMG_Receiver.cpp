class UABP_KAC_LMG_Receiver_C : public UWeaponAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Lmg/KAC_LAMG/Mesh/KAC_LMG_Receiver_Skeleton.KAC_LMG_Receiver_Skeleton'";
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                2,
                3,
                6,
                7,
                10,
                12
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 0,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                0,
                10,
                4294967295
            },
            "NodeIndex": 1,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                11,
                9,
                8,
                2,
                8,
                4294967295,
                6,
                1,
                5,
                4294967295,
                4,
                3,
                8
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
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
                12,
                12,
                12,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                11,
                9,
                8,
                7,
                8,
                4294967295,
                6,
                6,
                5,
                4294967295,
                4,
                3,
                8
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                11,
                10,
                4294967295
            },
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
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
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                11,
                9,
                8,
                7,
                8,
                4294967295,
                6,
                6,
                5,
                4294967295,
                4,
                3,
                8
            },
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                11,
                9,
                8,
                7,
                8,
                4294967295,
                6,
                6,
                5,
                4294967295,
                4,
                3,
                8
            },
            "NodeIndex": 8,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                11,
                10,
                4294967295
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
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
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                11,
                9,
                8,
                7,
                8,
                4294967295,
                6,
                6,
                5,
                4294967295,
                4,
                3,
                8
            },
            "NodeIndex": 11,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                11,
                9,
                8,
                7,
                8,
                4294967295,
                6,
                6,
                5,
                4294967295,
                4,
                3,
                8
            },
            "NodeIndex": 12,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                11,
                10,
                4294967295
            },
            "NodeIndex": 13,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                12,
                12,
                12,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 14,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_BlendSpaceGraph'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("X"), 3 }, 
                { FName("Y"), 4 }, 
                { FName("GroupName"), 5 }, 
                { FName("GroupRole"), 6 }, 
                { FName("BlendSpace"), 7 }, 
                { FName("SamplePoseLinks"), 8 }
            },
            "NumProperties": 9
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_BlendSpaceGraphBase'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("X"), 3 }, 
                { FName("Y"), 4 }, 
                { FName("GroupName"), 5 }, 
                { FName("GroupRole"), 6 }, 
                { FName("BlendSpace"), 7 }, 
                { FName("SamplePoseLinks"), 8 }
            },
            "NumProperties": 9
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_BlendSpaceSampleResult'", {
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
        } }
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_BlendSpaceGraph = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Slot AnimGraphNode_Slot = {
        "Source": {
            "LinkID": 14
        },
        "SlotName": FName("DefaultSlot"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 0
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/KAC_LAMG/Weapon/A_WEP_KAC_LMG_Wiggle_Walk_Weak.A_WEP_KAC_LMG_Wiggle_Walk_Weak'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2 = {
        "base": {
            "LinkID": 4
        },
        "Additive": {
            "LinkID": 2
        },
        "Alpha": 0.2,
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
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/KAC_LAMG/Weapon/A_WEP_KAC_LMG_Idle.A_WEP_KAC_LMG_Idle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_BlendSpaceSampleResult AnimGraphNode_BlendSpaceSampleResult_2 = {
        "Result": {
            "LinkID": 3
        }
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1 = {
        "base": {
            "LinkID": 7
        },
        "Additive": {
            "LinkID": 8
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
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/KAC_LAMG/Weapon/A_WEP_KAC_LMG_Idle.A_WEP_KAC_LMG_Idle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/KAC_LAMG/Weapon/A_WEP_KAC_LMG_Wiggle_Walk_Weak.A_WEP_KAC_LMG_Wiggle_Walk_Weak'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_BlendSpaceSampleResult AnimGraphNode_BlendSpaceSampleResult_1 = {
        "Result": {
            "LinkID": 6
        }
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive = {
        "base": {
            "LinkID": 11
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
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/KAC_LAMG/Weapon/A_WEP_KAC_LMG_Idle.A_WEP_KAC_LMG_Idle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/KAC_LAMG/Weapon/A_WEP_KAC_LMG_Wiggle_Walk_Strong.A_WEP_KAC_LMG_Wiggle_Walk_Strong'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_BlendSpaceSampleResult AnimGraphNode_BlendSpaceSampleResult = {
        "Result": {
            "LinkID": 10
        }
    };
    struct FAnimNode_BlendSpaceGraph AnimGraphNode_BlendSpaceGraph = {
        "X": 0,
        "Y": 0,
        "GroupName": FName("None"),
        "GroupRole": EAnimGroupRole::CanBeLeader,
        "BlendSpace": "BlendSpace1D'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/Lmg/KAC_LAMG/Mesh/ABP_KAC_LMG_Receiver.ABP_KAC_LMG_Receiver_C:BlendSpace1D_0'",
        "SamplePoseLinks": {
            {
                "LinkID": 13
            },
            {
                "LinkID": 9
            },
            {
                "LinkID": 5
            }
        }
    };
    struct FVector PropertyAccess = FVector(0, 0, 0);
    struct FVector LastLocation = FVector(0, 0, 0);
    bool bUseMultiThreadedAnimationUpdate = true;
    FName __NameProperty_105 = FName("AnimGraph");
    float __FloatProperty_106 = 0.75;
    enum __EnumProperty_107 = EAnimSyncMethod::DoNotSync;
    bool __BoolProperty_108 = true;
    float __FloatProperty_109 = 0;
    struct FInputScaleBiasClampConstants __StructProperty_110 = {
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
    float __FloatProperty_111 = 1;
    enum __EnumProperty_112 = EAnimSyncMethod::Graph;
    bool __BoolProperty_113 = false;
    enum EAnimGroupRole __ByteProperty_114 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_115 = FName("DefaultSharedGroup");
    FName __NameProperty_116 = FName("None");
    struct FAnimNodeFunctionRef __StructProperty_117 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    double WeaponVelocity;

};