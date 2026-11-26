class UABP_UE5_To_UE4_TP_C : public UAnimInstance
{
public:
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/ThirdParty/BallisticsVFX/FirstPersonBPExamples/FirstPersonAssets/Character/Mesh/SK_QUA_Skeleton.SK_QUA_Skeleton'";
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
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 1,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
        { "ScriptStruct'/Script/IKRig.AnimNode_RetargetPoseFromMesh'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("Source"), 3 }, 
                { FName("RetargetFrom"), 4 }, 
                { FName("SourceMeshComponent"), 5 }, 
                { FName("IKRetargeterAsset"), 6 }, 
                { FName("CustomRetargetProfile"), 7 }, 
                { FName("LODThreshold"), 8 }, 
                { FName("LODThresholdForIK"), 9 }, 
                { FName("bSuppressWarnings"), 10 }, 
                { FName("bUseAttachedParent"), 11 }
            },
            "NumProperties": 12
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
        } }
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 1
        }
    };
    struct FAnimNode_RetargetPoseFromMesh AnimGraphNode_RetargetPoseFromMesh = {
        "Source": {
            "LinkID": -1
        },
        "RetargetFrom": ERetargetSourceMode::ParentSkeletalMeshComponent,
        "SourceMeshComponent": nullptr,
        "IKRetargeterAsset": "IKRetargeter'Test_C/Content/Characters/Mannequins/Rigs/RTG_Mannequin.RTG_Mannequin'",
        "CustomRetargetProfile": {
            "RetargetOpProfiles": {},
            "bApplyTargetRetargetPose": false,
            "TargetRetargetPoseName": FName("None"),
            "bApplySourceRetargetPose": false,
            "SourceRetargetPoseName": FName("None"),
            "bForceAllIKOff": false,
            "bApplyChainSettings": false,
            "ChainSettings": {},
            "bApplyRootSettings": false,
            "RootSettings": {
                "RotationAlpha": 1,
                "TranslationAlpha": 1,
                "BlendToSource": 0,
                "BlendToSourceWeights": FVector(1, 1, 1),
                "ScaleHorizontal": 1,
                "ScaleVertical": 1,
                "TranslationOffset": FVector(0, 0, 0),
                "RotationOffset": FRotator(0, 0, 0),
                "AffectIKHorizontal": 1,
                "AffectIKVertical": 0
            },
            "bApplyGlobalSettings": false,
            "GlobalSettings": {
                "bEnableRoot": true,
                "bEnableFK": true,
                "bEnableIK": true,
                "bEnablePost": true,
                "bCopyBasePose": false,
                "CopyBasePoseRoot": FName("None"),
                "SourceScaleFactor": 1,
                "bWarping": false,
                "DirectionSource": EWarpingDirectionSource::Goals,
                "ForwardDirection": EBasicAxis::Y,
                "DirectionChain": FName("None"),
                "WarpForwards": 1,
                "SidewaysOffset": 0,
                "WarpSplay": 1
            }
        },
        "LODThreshold": -1,
        "LODThresholdForIK": -1,
        "bSuppressWarnings": false
    };
    bool bUsingCopyPoseFromMesh = true;
    FName __NameProperty_4 = FName("None");
    FName __NameProperty_5 = FName("AnimGraph");
    struct FAnimNodeFunctionRef __StructProperty_6 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };

};