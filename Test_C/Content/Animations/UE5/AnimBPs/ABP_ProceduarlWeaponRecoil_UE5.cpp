class UABP_ProceduarlWeaponRecoil_UE5_C : public UAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Characters/Mannequins/Meshes/SK_IRR_Mannequin.SK_IRR_Mannequin'";
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                2,
                2,
                2,
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
                2,
                2,
                2,
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
                2,
                2,
                4294967295
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                2,
                2,
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
                4294967295
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                2,
                2,
                2,
                4294967295
            },
            "NodeIndex": 4,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
        { "ScriptStruct'/Script/Engine.AnimNode_ConvertLocalToComponentSpace'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("LocalPose"), 3 }
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
        { "ScriptStruct'/Script/Engine.AnimNode_ConvertComponentToLocalSpace'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("ComponentPose"), 3 }
            },
            "NumProperties": 4
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
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Animations/UE5/AnimBPs/ABP_ProceduarlWeaponRecoil_UE5.ABP_ProceduarlWeaponRecoil_UE5_C:ExecuteUbergraph_ABP_ProceduarlWeaponRecoil_UE5'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimSubsystem_SharedLinkedAnimLayers AnimBlueprintExtension_SharedLinkedAnimLayers = {
        "ClassesData": {},
        "PersistentClasses": {}
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 2
        }
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose = {
        "Name": FName("InPose"),
        "Graph": FName("AnimGraph"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace = {
        "ComponentPose": {
            "LinkID": 3
        }
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_gun")
        },
        "Translation": FVector(0, 0, 0),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Additive,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 4
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
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace = {
        "LocalPose": {
            "LinkID": 1
        }
    };
    struct FVector PropertyAccess_1 = FVector(0, 0, 0);
    struct FRotator PropertyAccess = FRotator(0, 0, 0);
    struct FWeaponRecoilValues RecoilValues = {
        "ViewmodelRecoilLocation": FVector(0, 0, 0),
        "ViewmodelRecoilRotation": FVector(0, 0, 0),
        "CameraRecoilRotation": FVector(0, 0, 0)
    };
    struct FVector Out Loc = FVector(0, 0, 0);
    struct FRotator Out Rot = FRotator(0, 0, 0);
    FName __NameProperty_13 = FName("None");
    FName __NameProperty_14 = FName("AnimGraph");
    struct FAnimNodeFunctionRef __StructProperty_15 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    TSoftObjectPtr<UFirstPersonWeaponRecoil> FPCCWeaponRecoil;

};