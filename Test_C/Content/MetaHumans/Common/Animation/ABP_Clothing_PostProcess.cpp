class UABP_Clothing_PostProcess_C : public UAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/MetaHumans/Common/Female/Medium/NormalWeight/Body/metahuman_base_skel.metahuman_base_skel'";
    TMap<FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap = {
        { FName("AnimGraph"), {
            "OrderedSavedPoseNodeIndices": {
                3,
                6
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
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
                11,
                11,
                11,
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
                2,
                11,
                2,
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
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 2,
            "Flags": 5
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                3,
                11,
                11,
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
            "NodeIndex": 5,
            "Flags": 1
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295,
                8,
                7,
                6,
                4294967295,
                5,
                4,
                10,
                10,
                9,
                2147483648
            },
            "NodeIndex": 6,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295,
                4294967295
            },
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295,
                4294967295
            },
            "NodeIndex": 8,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295,
                4294967295
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295,
                4294967295
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295,
                4294967295
            },
            "NodeIndex": 11,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295,
                8,
                7,
                6,
                4294967295,
                5,
                4,
                10,
                10,
                9,
                2147483649
            },
            "NodeIndex": 12,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                11,
                11,
                11,
                4294967295,
                4294967295
            },
            "NodeIndex": 13,
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
        { "ScriptStruct'/Script/Engine.AnimNode_ConvertComponentToLocalSpace'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("ComponentPose"), 3 }
            },
            "NumProperties": 4
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_ConvertLocalToComponentSpace'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("LocalPose"), 3 }
            },
            "NumProperties": 4
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_RigidBody'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("ComponentPose"), 3 }, 
                { FName("LODThreshold"), 4 }, 
                { FName("ActualAlpha"), 5 }, 
                { FName("AlphaInputType"), 6 }, 
                { FName("bAlphaBoolEnabled"), 7 }, 
                { FName("Alpha"), 8 }, 
                { FName("AlphaScaleBias"), 9 }, 
                { FName("AlphaBoolBlend"), 10 }, 
                { FName("AlphaCurveName"), 11 }, 
                { FName("AlphaScaleBiasClamp"), 12 }, 
                { FName("ValidationVisualWarningMessage"), 13 }, 
                { FName("OverridePhysicsAsset"), 14 }, 
                { FName("bDefaultToSkeletalMeshPhysicsAsset"), 15 }, 
                { FName("bUseLocalLODThresholdOnly"), 16 }, 
                { FName("OverrideWorldGravity"), 17 }, 
                { FName("ExternalForce"), 18 }, 
                { FName("ComponentLinearAccScale"), 19 }, 
                { FName("ComponentLinearVelScale"), 20 }, 
                { FName("ComponentAppliedLinearAccClamp"), 21 }, 
                { FName("SimSpaceSettings"), 22 }, 
                { FName("CachedBoundsScale"), 23 }, 
                { FName("BaseBoneRef"), 24 }, 
                { FName("OverlapChannel"), 25 }, 
                { FName("SimulationSpace"), 26 }, 
                { FName("bForceDisableCollisionBetweenConstraintBodies"), 27 }, 
                { FName("bUseExternalClothCollision"), 28 }, 
                { FName("bEnableWorldGeometry"), 29 }, 
                { FName("bTransferBoneVelocities"), 30 }, 
                { FName("bFreezeIncomingPoseOnStart"), 31 }, 
                { FName("bOverrideWorldGravity"), 32 }, 
                { FName("bClampLinearTranslationLimitToRefPose"), 33 }, 
                { FName("WorldSpaceMinimumScale"), 34 }, 
                { FName("EvaluationResetTime"), 35 }, 
                { FName("bComponentSpaceSimulation"), 36 }, 
                { FName("SimulationTiming"), 37 }
            },
            "NumProperties": 38
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_SkeletalControlBase'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("ComponentPose"), 3 }, 
                { FName("LODThreshold"), 4 }, 
                { FName("ActualAlpha"), 5 }, 
                { FName("AlphaInputType"), 6 }, 
                { FName("bAlphaBoolEnabled"), 7 }, 
                { FName("Alpha"), 8 }, 
                { FName("AlphaScaleBias"), 9 }, 
                { FName("AlphaBoolBlend"), 10 }, 
                { FName("AlphaCurveName"), 11 }, 
                { FName("AlphaScaleBiasClamp"), 12 }, 
                { FName("ValidationVisualWarningMessage"), 13 }
            },
            "NumProperties": 14
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("SourceMeshComponent"), 3 }, 
                { FName("bCopyCurves"), 4 }, 
                { FName("bUseAttachedParent"), 5 }, 
                { FName("bCopyCustomAttributes"), 6 }, 
                { FName("bUseMeshPose"), 7 }, 
                { FName("RootBoneToCopy"), 8 }
            },
            "NumProperties": 9
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
        "__BoolProperty": false,
        "__BoolProperty_0": false
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance_NodeRelevancy AnimBlueprintExtension_NodeRelevancy = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 12
        }
    };
    struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh = {
        "SourceMeshComponent": nullptr,
        "bUseAttachedParent": true,
        "bCopyCurves": false,
        "bCopyCustomAttributes": false,
        "bUseMeshPose": false,
        "RootBoneToCopy": FName("None")
    };
    struct FAnimNode_RigidBody AnimGraphNode_RigidBody = {
        "OverridePhysicsAsset": nullptr,
        "bDefaultToSkeletalMeshPhysicsAsset": true,
        "bUseLocalLODThresholdOnly": false,
        "OverrideWorldGravity": FVector(0, 0, 0),
        "ExternalForce": FVector(0, 0, 0),
        "ComponentLinearAccScale": FVector(0,5, 0,5, 0,6),
        "ComponentLinearVelScale": FVector(0,4, 0,4, 0,4),
        "ComponentAppliedLinearAccClamp": FVector(10000, 10000, 10000),
        "SimSpaceSettings": {
            "WorldAlpha": 0,
            "VelocityScaleZ": 1,
            "DampingAlpha": 1,
            "MaxLinearVelocity": 10000,
            "MaxAngularVelocity": 10000,
            "MaxLinearAcceleration": 10000,
            "MaxAngularAcceleration": 10000,
            "ExternalLinearDragV": FVector(0, 0, 0),
            "ExternalLinearVelocity": FVector(0, 0, 0),
            "ExternalAngularVelocity": FVector(0, 0, 0)
        },
        "CachedBoundsScale": 1.2,
        "BaseBoneRef": {
            "BoneName": FName("spine_01")
        },
        "OverlapChannel": ECollisionChannel::ECC_WorldStatic,
        "SimulationSpace": ESimulationSpace::BaseBoneSpace,
        "bForceDisableCollisionBetweenConstraintBodies": false,
        "bUseExternalClothCollision": false,
        "bEnableWorldGeometry": false,
        "bOverrideWorldGravity": false,
        "bTransferBoneVelocities": false,
        "bFreezeIncomingPoseOnStart": false,
        "bClampLinearTranslationLimitToRefPose": false,
        "WorldSpaceMinimumScale": 0.01,
        "EvaluationResetTime": 0.01,
        "SimulationTiming": ESimulationTiming::Default,
        "ComponentPose": {
            "LinkID": 3
        },
        "LODThreshold": 1,
        "ActualAlpha": 0,
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true,
        "Alpha": 1,
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
        }
    };
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace = {
        "LocalPose": {
            "LinkID": 11
        }
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace = {
        "ComponentPose": {
            "LinkID": 2
        }
    };
    struct FAnimNode_ControlRig AnimGraphNode_ControlRig = {
        "ControlRigClass": "RigVMBlueprintGeneratedClass'Test_C/Content/MetaHumans/Common/Animation/CR_PlaceHolder.CR_PlaceHolder_C'",
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
        "LODThreshold": 3,
        "Source": {
            "LinkID": 8
        },
        "bResetInputPoseToInitial": true,
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
                "LinkID": 5
            },
            {
                "LinkID": 9
            }
        }
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1 = {
        "Pose": {
            "LinkID": 1
        },
        "CachePoseName": FName("Mesh Pose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3 = {
        "LinkToCachingNode": {
            "LinkID": 7
        },
        "CachePoseName": FName("Mesh Pose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2 = {
        "LinkToCachingNode": {
            "LinkID": 7
        },
        "CachePoseName": FName("Mesh Pose")
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose = {
        "Pose": {
            "LinkID": 6
        },
        "CachePoseName": FName("Control Rig Pose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1 = {
        "LinkToCachingNode": {
            "LinkID": 10
        },
        "CachePoseName": FName("Control Rig Pose")
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool = {
        "BlendPose": {
            {
                "LinkID": 4
            },
            {
                "LinkID": 13
            }
        }
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose = {
        "LinkToCachingNode": {
            "LinkID": 10
        },
        "CachePoseName": FName("Control Rig Pose")
    };
    int32 Rigid Body LOD Threshold = 1;
    int32 Control Rig LOD Threshold = 3;
    bool bUsingCopyPoseFromMesh = true;
    FName __NameProperty_47 = FName("DefaultSharedGroup");
    FName __NameProperty_48 = FName("AnimGraph");
    struct FAnimNodeFunctionRef __StructProperty_49 = {
        "ClassName": FName("None"),
        "FunctionName": FName("On Rigid Body Update")
    };
    struct FAnimNodeFunctionRef __StructProperty_50 = {
        "ClassName": FName("None"),
        "FunctionName": FName("On Control Rig Initial Update")
    };
    class UObject* __CurveFloat_51 = nullptr;
    enum __EnumProperty_52 = EBlendListChildUpdateMode::Default;
    enum __EnumProperty_53 = EAlphaBlendOption::Linear;
    enum __EnumProperty_54 = EBlendListTransitionType::StandardBlend;
    TArray<float> __ArrayProperty_55 = {
        0.1,
        0.1
    };
    bool __BoolProperty_56 = false;
    class UObject* __BlendProfile_57 = nullptr;
    struct FAnimNodeFunctionRef __StructProperty_58 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    bool Enable Rigid Body Simulation;
    bool Enable Control Rig;
    class UPhysicsAsset* Override Physics Asset;
    TSubclassOf<UControlRig> Control Rig Class;

};