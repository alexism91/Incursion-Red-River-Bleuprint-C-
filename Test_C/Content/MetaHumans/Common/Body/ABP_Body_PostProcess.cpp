class UABP_Body_PostProcess_C : public UAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/MetaHumans/Common/Female/Medium/NormalWeight/Body/metahuman_base_skel.metahuman_base_skel'";
    TMap<FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap = {
        { FName("AnimGraph"), {
            "OrderedSavedPoseNodeIndices": {
                3,
                8
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
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
                9,
                9,
                9,
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
                4294967295,
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
                9,
                9,
                9,
                4294967295,
                6,
                5,
                4,
                4294967295,
                3,
                2,
                8,
                8,
                7,
                2147483648
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
                4294967295,
                4294967295
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
                4294967295,
                4294967295
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
                4294967295,
                4294967295
            },
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
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
                9,
                9,
                9,
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
                9,
                9,
                9,
                4294967295,
                4294967295
            },
            "NodeIndex": 8,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
                4294967295,
                6,
                5,
                4,
                4294967295,
                3,
                2,
                8,
                8,
                7,
                2147483649
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
                4294967295,
                4294967295
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
                4294967295,
                4294967295
            },
            "NodeIndex": 11,
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
        { "ScriptStruct'/Script/RigLogicModule.AnimNode_RigLogic'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("AnimSequence"), 3 }, 
                { FName("CacheAnimCurveNames"), 4 }, 
                { FName("LODThreshold"), 5 }
            },
            "NumProperties": 6
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
        { "ScriptStruct'/Script/ControlRig.AnimNode_ControlRig'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("SourcePropertyNames"), 3 }, 
                { FName("DestPropertyNames"), 4 }, 
                { FName("TargetInstance"), 5 }, 
                { FName("SourceInstance"), 6 }, 
                { FName("Source"), 7 }, 
                { FName("bResetInputPoseToInitial"), 8 }, 
                { FName("bTransferInputPose"), 9 }, 
                { FName("bTransferInputCurves"), 10 }, 
                { FName("bTransferPoseInGlobalSpace"), 11 }, 
                { FName("InputBonesToTransfer"), 12 }, 
                { FName("OutputBonesToTransfer"), 13 }, 
                { FName("AssetUserData"), 14 }, 
                { FName("NodeMappingContainer"), 15 }, 
                { FName("InputSettings"), 16 }, 
                { FName("OutputSettings"), 17 }, 
                { FName("bExecute"), 18 }, 
                { FName("EventQueue"), 19 }, 
                { FName("ControlRigClass"), 20 }, 
                { FName("DefaultControlRigClass"), 21 }, 
                { FName("ControlRig"), 22 }, 
                { FName("ControlRigPerClass"), 23 }, 
                { FName("Alpha"), 24 }, 
                { FName("AlphaInputType"), 25 }, 
                { FName("bAlphaBoolEnabled"), 26 }, 
                { FName("bSetRefPoseFromSkeleton"), 27 }, 
                { FName("AlphaScaleBias"), 28 }, 
                { FName("AlphaBoolBlend"), 29 }, 
                { FName("AlphaCurveName"), 30 }, 
                { FName("AlphaScaleBiasClamp"), 31 }, 
                { FName("InputMapping"), 32 }, 
                { FName("OutputMapping"), 33 }, 
                { FName("LODThreshold"), 34 }
            },
            "NumProperties": 35
        } }, 
        { "ScriptStruct'/Script/ControlRig.AnimNode_ControlRigBase'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("SourcePropertyNames"), 3 }, 
                { FName("DestPropertyNames"), 4 }, 
                { FName("TargetInstance"), 5 }, 
                { FName("SourceInstance"), 6 }, 
                { FName("Source"), 7 }, 
                { FName("bResetInputPoseToInitial"), 8 }, 
                { FName("bTransferInputPose"), 9 }, 
                { FName("bTransferInputCurves"), 10 }, 
                { FName("bTransferPoseInGlobalSpace"), 11 }, 
                { FName("InputBonesToTransfer"), 12 }, 
                { FName("OutputBonesToTransfer"), 13 }, 
                { FName("AssetUserData"), 14 }, 
                { FName("NodeMappingContainer"), 15 }, 
                { FName("InputSettings"), 16 }, 
                { FName("OutputSettings"), 17 }, 
                { FName("bExecute"), 18 }, 
                { FName("EventQueue"), 19 }
            },
            "NumProperties": 20
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
    class UFunction* UberGraphFunction = "Function'Test_C/Content/MetaHumans/Common/Body/ABP_Body_PostProcess.ABP_Body_PostProcess_C:ExecuteUbergraph_ABP_Body_PostProcess'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__BoolProperty": false,
        "__BoolProperty_0": false
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 9
        }
    };
    struct FAnimNode_ControlRig AnimGraphNode_ControlRig = {
        "ControlRigClass": "RigVMBlueprintGeneratedClass'Test_C/Content/MetaHumans/Common/Face/CR_MetaHuman_HeadMovement_IK_Proc.CR_MetaHuman_HeadMovement_IK_Proc_C'",
        "DefaultControlRigClass": nullptr,
        "ControlRig": nullptr,
        "ControlRigPerClass": {},
        "Alpha": 1,
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true,
        "bSetRefPoseFromSkeleton": true,
        "AlphaScaleBias": {
            "Scale": 1,
            "Bias": 0
        },
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
        "InputMapping": {},
        "OutputMapping": {},
        "LODThreshold": -1,
        "Source": {
            "LinkID": 4
        },
        "bResetInputPoseToInitial": false,
        "bTransferInputPose": true,
        "bTransferInputCurves": true,
        "bTransferPoseInGlobalSpace": false,
        "InputBonesToTransfer": {},
        "OutputBonesToTransfer": {},
        "AssetUserData": {},
        "NodeMappingContainer": nullptr,
        "InputSettings": {
            "bUpdatePose": true,
            "bUpdateCurves": true
        },
        "OutputSettings": {
            "bUpdatePose": true,
            "bUpdateCurves": true
        },
        "bExecute": true,
        "EventQueue": {},
        "SourcePropertyNames": {},
        "DestPropertyNames": {},
        "TargetInstance": nullptr
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1 = {
        "BlendPose": {
            {
                "LinkID": 1
            },
            {
                "LinkID": 5
            }
        }
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1 = {
        "Pose": {
            "LinkID": 6
        },
        "CachePoseName": FName("InputPose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3 = {
        "LinkToCachingNode": {
            "LinkID": 3
        },
        "CachePoseName": FName("InputPose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2 = {
        "LinkToCachingNode": {
            "LinkID": 3
        },
        "CachePoseName": FName("InputPose")
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose = {
        "Name": FName("InPose"),
        "Graph": FName("AnimGraph"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_RigLogic AnimGraphNode_RigLogic = {
        "AnimSequence": {
            "LinkID": 10
        },
        "CacheAnimCurveNames": false,
        "LODThreshold": -1
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose = {
        "Pose": {
            "LinkID": 2
        },
        "CachePoseName": FName("HeadMovedPose")
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool = {
        "BlendPose": {
            {
                "LinkID": 7
            },
            {
                "LinkID": 11
            }
        }
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1 = {
        "LinkToCachingNode": {
            "LinkID": 8
        },
        "CachePoseName": FName("HeadMovedPose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose = {
        "LinkToCachingNode": {
            "LinkID": 8
        },
        "CachePoseName": FName("HeadMovedPose")
    };
    bool Enable Body Correctives = true;
    bool Enable Head Movement IK = true;
    int32 RigLogic LOD Threshold = -1;
    FName __NameProperty_43 = FName("None");
    FName __NameProperty_44 = FName("AnimGraph");
    class UObject* __CurveFloat_45 = nullptr;
    enum __EnumProperty_46 = EBlendListChildUpdateMode::Default;
    enum __EnumProperty_47 = EAlphaBlendOption::Linear;
    enum __EnumProperty_48 = EBlendListTransitionType::StandardBlend;
    TArray<float> __ArrayProperty_49 = {
        0.1,
        0.1
    };
    bool __BoolProperty_50 = false;
    class UObject* __BlendProfile_51 = nullptr;
    struct FAnimNodeFunctionRef __StructProperty_52 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };

};