class USKS_Receiver_Skeleton_AnimBlueprint_C : public UWeaponAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SniperRifle/Simonov_SKS/Mesh/SKS_Receiver_Skeleton.SKS_Receiver_Skeleton'";
    TMap<FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap = {
        { FName("AnimGraph"), {
            "OrderedSavedPoseNodeIndices": {
                1
            }
        } }
    };
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                3,
                4
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
                18,
                18,
                18,
                4294967295,
                6,
                5,
                4,
                4294967295,
                3,
                2,
                7,
                7,
                14,
                2147483648
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
                4294967295,
                4294967295,
                4294967295,
                17,
                16,
                15,
                14,
                8,
                12,
                14,
                11,
                10,
                10,
                9,
                12
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
                4294967295,
                17,
                16,
                15,
                14,
                13,
                12,
                14,
                11,
                10,
                10,
                9,
                12
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
                4294967295
            },
            "NodeIndex": 7,
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
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Weapons/SniperRifle/Simonov_SKS/Mesh/SKS_Receiver_Skeleton_AnimBlueprint.SKS_Receiver_Skeleton_AnimBlueprint_C:ExecuteUbergraph_SKS_Receiver_Skeleton_AnimBlueprint'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__BoolProperty": false
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 2
        }
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool = {
        "BlendPose": {
            {
                "LinkID": 3
            },
            {
                "LinkID": 7
            }
        }
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_1 = {
        "Source": {
            "LinkID": 1
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
            "LinkID": 4
        },
        "SlotName": FName("DefaultSlot"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose = {
        "Pose": {
            "LinkID": 5
        },
        "CachePoseName": FName("Idle Pose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose = {
        "LinkToCachingNode": {
            "LinkID": 6
        },
        "CachePoseName": FName("Idle Pose")
    };
    bool bUseMultiThreadedAnimationUpdate = true;
    FName __NameProperty_38 = FName("DefaultSharedGroup");
    FName __NameProperty_39 = FName("AnimGraph");
    class UObject* __CurveFloat_40 = nullptr;
    enum __EnumProperty_41 = EBlendListChildUpdateMode::Default;
    enum __EnumProperty_42 = EAlphaBlendOption::Linear;
    enum __EnumProperty_43 = EBlendListTransitionType::StandardBlend;
    TArray<float> __ArrayProperty_44 = {
        0,
        0
    };
    class UObject* __BlendProfile_45 = nullptr;
    class UAnimSequence* __AnimSequenceBase_46 = "AnimSequence'Test_C/Content/Animations/UE5/FP/SKS/Weapon/20rnd/A_WEP_SKS_20rnd_Mag_Out_Quick_No_Bolt.A_WEP_SKS_20rnd_Mag_Out_Quick_No_Bolt'";
    enum ESequenceEvalReinit __ByteProperty_47 = ESequenceEvalReinit::ExplicitTime;
    bool __BoolProperty_48 = true;
    int32 __IntProperty_49 = 0;
    float __FloatProperty_50 = 0;
    class UAnimSequence* __AnimSequenceBase_51 = "AnimSequence'Test_C/Content/Animations/UE5/FP/SKS/Weapon/A_WEP_SKS_Idle.A_WEP_SKS_Idle'";
    bool __BoolProperty_52 = false;
    enum __EnumProperty_53 = EAnimSyncMethod::DoNotSync;
    enum EAnimGroupRole __ByteProperty_54 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_55 = FName("None");
    struct FAnimNodeFunctionRef __StructProperty_56 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };

};