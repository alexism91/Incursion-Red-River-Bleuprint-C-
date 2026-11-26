class UABP_TactiNav_Communicator_X-7_C : public UAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/Mesh/NEW/TactiNav_Communicator_X-7_Skeleton.TactiNav_Communicator_X-7_Skeleton'";
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                3,
                4,
                5,
                6
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                14,
                14,
                14,
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
                14,
                14,
                14,
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
                14,
                14,
                14,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                13,
                12,
                11,
                10,
                11,
                2147483648,
                7,
                9,
                3,
                3,
                7,
                4294967295
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                14,
                14,
                14,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                13,
                12,
                11,
                10,
                11,
                2147483650,
                2147483649,
                9,
                3,
                3,
                7,
                4294967295
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                14,
                14,
                14,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                13,
                12,
                10,
                11,
                6,
                5,
                11,
                4,
                3,
                3,
                2,
                7
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                14,
                14,
                14,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                13,
                12,
                11,
                10,
                11,
                4294967295,
                9,
                9,
                8,
                4294967295,
                7,
                11,
                11
            },
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                14,
                14,
                14,
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
                14,
                14,
                14,
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
                14,
                14,
                14,
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
            "NodeIndex": 8,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
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
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
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
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gadgets/GCPS/TactiNav_Communicator_X-7/Mesh/NEW/ABP_TactiNav_Communicator_X-7.ABP_TactiNav_Communicator_X-7_C:ExecuteUbergraph_ABP_TactiNav_Communicator_X-7'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__FloatProperty": 0,
        "__FloatProperty_0": 0,
        "__FloatProperty_1": 0
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
            "LinkID": 8
        },
        "SlotName": FName("DefaultSlot"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1 = {
        "BlendSpace": "BlendSpace1D'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Weapon/BS_WEP_GCPS_Scrl.BS_WEP_GCPS_Scrl'",
        "PreviousBlendSpace": nullptr,
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer = {
        "BlendSpace": "BlendSpace'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Weapon/BS_WEP_GCPS_Ths.BS_WEP_GCPS_Ths'",
        "PreviousBlendSpace": nullptr,
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Weapon/A_WEP_GCPS_Idle.A_WEP_GCPS_Idle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2 = {
        "base": {
            "LinkID": 5
        },
        "Additive": {
            "LinkID": 2
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
            "LinkID": 6
        },
        "Additive": {
            "LinkID": 3
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
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive = {
        "base": {
            "LinkID": 7
        },
        "Additive": {
            "LinkID": 4
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
    struct FVector2D ThumbStickValue = FVector2D(0, 0);
    bool bUseMultiThreadedAnimationUpdate = false;
    FName __NameProperty_55 = FName("DefaultSharedGroup");
    FName __NameProperty_56 = FName("AnimGraph");
    enum ESequenceEvalReinit __ByteProperty_57 = ESequenceEvalReinit::ExplicitTime;
    bool __BoolProperty_58 = true;
    int32 __IntProperty_59 = 0;
    float __FloatProperty_60 = 0.05;
    class UAnimSequence* __AnimSequenceBase_61 = "AnimSequence'Test_C/Content/Animations/UE5/FP/Gadgets/GCPS/TactiNav_Communicator_X-7/NEW/Weapon/A_WEP_GCPS_ThS_Click.A_WEP_GCPS_ThS_Click'";
    float __FloatProperty_62 = 0;
    struct FInputScaleBiasClampConstants __StructProperty_63 = {
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
    float __FloatProperty_64 = 1;
    enum __EnumProperty_65 = EAnimSyncMethod::DoNotSync;
    bool __BoolProperty_66 = false;
    enum EAnimGroupRole __ByteProperty_67 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_68 = FName("None");
    struct FAnimNodeFunctionRef __StructProperty_69 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    class UBP_GCPSComponent_C* As BP GCPSComponent;
    float SliderValue;
    bool ThumbStickDown;

};