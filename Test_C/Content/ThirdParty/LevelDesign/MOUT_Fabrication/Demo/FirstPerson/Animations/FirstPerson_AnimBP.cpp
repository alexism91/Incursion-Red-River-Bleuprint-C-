class UFirstPerson_AnimBP_C : public UAnimInstance
{
public:
    TArray<struct FBakedAnimationStateMachine> BakedStateMachines = {
        {
            "MachineName": FName("New State Machine"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("FPP_Idle"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 12,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        },
                        {
                            "CanTakeDelegateIndex": 13,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 1,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 2,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        3
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("FPP_JumpStart"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 14,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 2,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 4,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        5
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("FPP_JumpLoop"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 15,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 3,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 6,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        7
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("FPP_JumpEnd"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 16,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 4,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 8,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        9
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("FPP_Run"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 17,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 5,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        },
                        {
                            "CanTakeDelegateIndex": 18,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 6,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 10,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        11
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                }
            },
            "Transitions": {
                {
                    "PreviousState": 0,
                    "NextState": 1,
                    "CrossfadeDuration": 0.2,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Linear,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 0,
                    "NextState": 4,
                    "CrossfadeDuration": 0.2,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Linear,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 1,
                    "NextState": 2,
                    "CrossfadeDuration": 0.2,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Linear,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 2,
                    "NextState": 3,
                    "CrossfadeDuration": 0.1,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Linear,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 3,
                    "NextState": 0,
                    "CrossfadeDuration": 0.1,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Linear,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 4,
                    "NextState": 1,
                    "CrossfadeDuration": 0.2,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Linear,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 4,
                    "NextState": 0,
                    "CrossfadeDuration": 0.2,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Linear,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                }
            }
        }
    };
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPerson/Character/Mesh/SK_Mannequin_Arms_Skeleton.SK_Mannequin_Arms_Skeleton'";
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                0,
                16,
                4294967295
            },
            "NodeIndex": 0,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295
            },
            "NodeIndex": 1,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295
            },
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295
            },
            "NodeIndex": 6,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295
            },
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                16,
                15,
                14,
                13,
                14,
                4294967295,
                12,
                12,
                11,
                4294967295,
                10,
                9,
                14
            },
            "NodeIndex": 8,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                1,
                17,
                4294967295,
                2,
                20,
                20,
                20,
                20
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                16,
                15,
                14,
                13,
                14,
                4294967295,
                12,
                12,
                11,
                4294967295,
                10,
                9,
                14
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                3,
                17,
                4294967295,
                4,
                20,
                20,
                20,
                20
            },
            "NodeIndex": 11,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                16,
                15,
                14,
                13,
                14,
                4294967295,
                12,
                12,
                11,
                4294967295,
                10,
                9,
                14
            },
            "NodeIndex": 12,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                5,
                17,
                4294967295,
                6,
                20,
                20,
                20,
                20
            },
            "NodeIndex": 13,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                16,
                15,
                14,
                13,
                14,
                4294967295,
                12,
                12,
                11,
                4294967295,
                10,
                9,
                14
            },
            "NodeIndex": 14,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                7,
                17,
                4294967295,
                8,
                20,
                20,
                20,
                20
            },
            "NodeIndex": 15,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                16,
                15,
                14,
                13,
                14,
                4294967295,
                12,
                12,
                11,
                4294967295,
                10,
                9,
                14
            },
            "NodeIndex": 16,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                18,
                17,
                4294967295,
                19,
                20,
                20,
                20,
                20
            },
            "NodeIndex": 17,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 18,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                20,
                20,
                20,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 19,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
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
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_StateMachine'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("StateMachineIndexInClass"), 3 }, 
                { FName("MaxTransitionsPerFrame"), 4 }, 
                { FName("MaxTransitionsRequests"), 5 }, 
                { FName("bSkipFirstUpdateTransition"), 6 }, 
                { FName("bReinitializeOnBecomingRelevant"), 7 }, 
                { FName("bCreateNotifyMetaData"), 8 }, 
                { FName("bAllowConduitEntryStates"), 9 }
            },
            "NumProperties": 10
        } }, 
        { "ScriptStruct'/Script/Engine.AnimNode_StateResult'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("Result"), 3 }, 
                { FName("Name"), 4 }, 
                { FName("LayerGroup"), 5 }, 
                { FName("Group"), 6 }, 
                { FName("StateIndex"), 7 }, 
                { FName("StateEntryFunction"), 8 }, 
                { FName("StateFullyBlendedInFunction"), 9 }, 
                { FName("StateExitFunction"), 10 }, 
                { FName("StateFullyBlendedOutFunction"), 11 }
            },
            "NumProperties": 12
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
        { "ScriptStruct'/Script/Engine.AnimNode_TransitionResult'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("bCanEnterTransition"), 3 }
            },
            "NumProperties": 4
        } }
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPerson/Animations/FirstPerson_AnimBP.FirstPerson_AnimBP_C:ExecuteUbergraph_FirstPerson_AnimBP'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 19
        }
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4 = {
        "Sequence": "AnimSequence'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPerson/Animations/FirstPerson_Run.FirstPerson_Run'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_4 = {
        "Result": {
            "LinkID": 8
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3 = {
        "Sequence": "AnimSequence'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPerson/Animations/FirstPerson_JumpEnd.FirstPerson_JumpEnd'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_3 = {
        "Result": {
            "LinkID": 10
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2 = {
        "Sequence": "AnimSequence'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPerson/Animations/FirstPerson_JumpLoop.FirstPerson_JumpLoop'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_2 = {
        "Result": {
            "LinkID": 12
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1 = {
        "Sequence": "AnimSequence'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPerson/Animations/FirstPerson_JumpStart.FirstPerson_JumpStart'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_1 = {
        "Result": {
            "LinkID": 14
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer = {
        "Sequence": "AnimSequence'Test_C/Content/ThirdParty/LevelDesign/MOUT_Fabrication/Demo/FirstPerson/Animations/FirstPerson_Idle.FirstPerson_Idle'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult = {
        "Result": {
            "LinkID": 16
        }
    };
    struct FAnimNode_StateMachine AnimGraphNode_StateMachine = {
        "StateMachineIndexInClass": 0,
        "MaxTransitionsPerFrame": 3,
        "MaxTransitionsRequests": 32,
        "bSkipFirstUpdateTransition": true,
        "bReinitializeOnBecomingRelevant": true,
        "bCreateNotifyMetaData": true,
        "bAllowConduitEntryStates": false
    };
    struct FAnimNode_Slot AnimGraphNode_Slot = {
        "Source": {
            "LinkID": 18
        },
        "SlotName": FName("Arms"),
        "bAlwaysUpdateSourcePose": false
    };
    FName __NameProperty_130 = FName("AnimGraph");
    FName __NameProperty_131 = FName("FPP_Run");
    int32 __IntProperty_132 = 4;
    FName __NameProperty_133 = FName("FPP_JumpEnd");
    int32 __IntProperty_134 = 3;
    FName __NameProperty_135 = FName("FPP_JumpLoop");
    int32 __IntProperty_136 = 2;
    FName __NameProperty_137 = FName("FPP_JumpStart");
    int32 __IntProperty_138 = 1;
    bool __BoolProperty_139 = true;
    float __FloatProperty_140 = 0;
    struct FInputScaleBiasClampConstants __StructProperty_141 = {
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
    float __FloatProperty_142 = 1;
    enum __EnumProperty_143 = EAnimSyncMethod::DoNotSync;
    bool __BoolProperty_144 = false;
    enum EAnimGroupRole __ByteProperty_145 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_146 = FName("None");
    FName __NameProperty_147 = FName("DefaultSharedGroup");
    FName __NameProperty_148 = FName("FPP_Idle");
    int32 __IntProperty_149 = 0;
    struct FAnimNodeFunctionRef __StructProperty_150 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    bool IsMoving;
    bool bIsInAir;

};