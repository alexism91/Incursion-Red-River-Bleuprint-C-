class UABP_EOTECH_HHS-1_Hybrid_Sight_Skeleton_C : public UItemAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/EOTECH_HHS-1_Hybrid_Sight/Mesh/SK_EOTECH_HHS-1_Hybrid_Sight_Skeleton.SK_EOTECH_HHS-1_Hybrid_Sight_Skeleton'";
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
                2147483648,
                5,
                4,
                4294967295,
                3,
                2,
                7,
                7,
                6,
                2147483649
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
                8
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
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                9,
                9,
                9,
                8
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
                4294967295
            },
            "NodeIndex": 6,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
        { "ScriptStruct'/Script/Engine.AnimNode_ConvertComponentToLocalSpace'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("ComponentPose"), 3 }
            },
            "NumProperties": 4
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
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
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_RefPose'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("RefPoseType"), 3 }
            },
            "NumProperties": 4
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_ModifyBone'", {
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
                { FName("BoneToModify"), 14 }, 
                { FName("Translation"), 15 }, 
                { FName("Rotation"), 16 }, 
                { FName("Scale"), 17 }, 
                { FName("TranslationMode"), 18 }, 
                { FName("RotationMode"), 19 }, 
                { FName("ScaleMode"), 20 }, 
                { FName("TranslationSpace"), 21 }, 
                { FName("RotationSpace"), 22 }, 
                { FName("ScaleSpace"), 23 }
            },
            "NumProperties": 24
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
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Attachments/Sight/EOTECH_HHS-1_Hybrid_Sight/Mesh/ABP_EOTECH_HHS-1_Hybrid_Sight_Skeleton.ABP_EOTECH_HHS-1_Hybrid_Sight_Skeleton_C:ExecuteUbergraph_ABP_EOTECH_HHS-1_Hybrid_Sight_Skeleton'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__ArrayProperty": {
            0.1,
            0.1
        },
        "__BoolProperty_0": false
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 1
        }
    };
    struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool = {
        "BlendPose": {
            {
                "LinkID": 6
            },
            {
                "LinkID": 2
            }
        }
    };
    struct FAnimNode_RefPose AnimGraphNode_LocalRefPose_1 = {};
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone = {
        "BoneToModify": {
            "BoneName": FName("hinge")
        },
        "Translation": FVector(0, 0, 0),
        "Rotation": FRotator(90, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Additive,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 5
        },
        "LODThreshold": -1,
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
    struct FAnimNode_RefPose AnimGraphNode_LocalRefPose = {};
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace = {
        "LocalPose": {
            "LinkID": 4
        }
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace = {
        "ComponentPose": {
            "LinkID": 3
        }
    };
    float TransitionTime = 0.2;
    FName __NameProperty_21 = FName("None");
    FName __NameProperty_22 = FName("AnimGraph");
    class UObject* __CurveFloat_23 = nullptr;
    enum __EnumProperty_24 = EBlendListChildUpdateMode::Default;
    enum __EnumProperty_25 = EAlphaBlendOption::Linear;
    enum __EnumProperty_26 = EBlendListTransitionType::StandardBlend;
    bool __BoolProperty_27 = false;
    class UObject* __BlendProfile_28 = nullptr;
    enum ERefPoseType __ByteProperty_29 = ERefPoseType::EIT_LocalSpace;
    struct FAnimNodeFunctionRef __StructProperty_30 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };

};