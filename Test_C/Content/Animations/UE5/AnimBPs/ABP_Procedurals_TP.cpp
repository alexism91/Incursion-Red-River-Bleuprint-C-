class UABP_Procedurals_TP_C : public UBaseRifleAnimInstance
{
public:
    TArray<struct FBakedAnimationStateMachine> BakedStateMachines = {
        {
            "MachineName": FName("Fidget Machine"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("Base"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 10,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": true,
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
                    "StateName": FName("Fidget"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 11,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 1,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": true,
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
                }
            },
            "Transitions": {
                {
                    "PreviousState": 0,
                    "NextState": 1,
                    "CrossfadeDuration": 0.4,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::HermiteCubic,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_Inertialization,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 1,
                    "NextState": 0,
                    "CrossfadeDuration": 0.4,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::HermiteCubic,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_Inertialization,
                    "StateName": FName("None")
                }
            }
        },
        {
            "MachineName": FName("Fidget Machine"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("Base"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 22,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": true,
                            "AutomaticRuleTriggerTime": 0.25,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 18,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        19
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("Fidget"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 23,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 1,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": true,
                            "AutomaticRuleTriggerTime": 0.4,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 20,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        21
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                }
            },
            "Transitions": {
                {
                    "PreviousState": 0,
                    "NextState": 1,
                    "CrossfadeDuration": 0.4,
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
                    "NextState": 0,
                    "CrossfadeDuration": 0.4,
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
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Characters/Mannequins/Meshes/SK_IRR_Mannequin.SK_IRR_Mannequin'";
    TMap<FName, struct FCachedPoseIndices> OrderedSavedPoseIndicesMap = {
        { FName("AnimGraph"), {
            "OrderedSavedPoseNodeIndices": {
                47,
                84,
                61
            }
        } }, 
        { FName("ThirdPersonRelaxed"), {
            "OrderedSavedPoseNodeIndices": {
                91,
                103,
                101
            }
        } }, 
        { FName("ThirdPersonAimed"), {
            "OrderedSavedPoseNodeIndices": {
                125,
                96,
                99,
                100
            }
        } }, 
        { FName("ABP_AdditiveFire"), {
            "OrderedSavedPoseNodeIndices": {
                38
            }
        } }, 
        { FName("ABP_FixClavicle"), {
            "OrderedSavedPoseNodeIndices": {}
        } }, 
        { FName("Extra_Additives"), {
            "OrderedSavedPoseNodeIndices": {}
        } }, 
        { FName("Extra_IdleFidgets_Default"), {
            "OrderedSavedPoseNodeIndices": {}
        } }, 
        { FName("Extra_IdleFidgets_Aimed"), {
            "OrderedSavedPoseNodeIndices": {}
        } }, 
        { FName("Extra_IdleFidgets_Crouched"), {
            "OrderedSavedPoseNodeIndices": {}
        } }
    };
    TArray<FName> SyncGroupNames = {
        FName("Walking"),
        FName("Locomotion"),
        FName("test"),
        FName("JumpMotion")
    };
    TMap<FName, struct FGraphAssetPlayerInformation> GraphAssetPlayerInformation = {
        { FName("AnimGraph"), {
            "PlayerNodeIndices": {
                40,
                41,
                60,
                74
            }
        } }
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 0,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 1,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 6,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 8,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 11,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 12,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 13,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 14,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 15,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 16,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
                19,
                19,
                19,
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
            "NodeIndex": 18,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
                19,
                19,
                19,
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
                19,
                19,
                19,
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
            "NodeIndex": 21,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 22,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 23,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                0,
                9,
                4294967295
            },
            "NodeIndex": 24,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 25,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 26,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 27,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 28,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 29,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 30,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 31,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 32,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 33,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 34,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 35,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 36,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 37,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 38,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 39,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 40,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 41,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 42,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 43,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 44,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 45,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 46,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                1,
                9,
                4294967295
            },
            "NodeIndex": 47,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 48,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 49,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 50,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                2,
                9,
                4294967295
            },
            "NodeIndex": 51,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 52,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 53,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 54,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 55,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 56,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 57,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 58,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 59,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 60,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 61,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                9,
                7,
                6,
                16,
                2147483648,
                5,
                16,
                18,
                4,
                4,
                3,
                5
            },
            "NodeIndex": 62,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 63,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 64,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 65,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 66,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 67,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 68,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 69,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 70,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 71,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 72,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 73,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 74,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 75,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                9,
                7,
                6,
                16,
                2147483649,
                5,
                16,
                18,
                4,
                4,
                3,
                5
            },
            "NodeIndex": 76,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 77,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 78,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 79,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 80,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 81,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 82,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 83,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 84,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 85,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 86,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 87,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 88,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 89,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 90,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 91,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 92,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 93,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 94,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                9,
                7,
                6,
                16,
                2147483650,
                5,
                16,
                18,
                4,
                4,
                3,
                5
            },
            "NodeIndex": 95,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                9,
                7,
                6,
                16,
                2147483651,
                5,
                16,
                18,
                4,
                4,
                3,
                5
            },
            "NodeIndex": 96,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 97,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 98,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 99,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 100,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 101,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                8,
                9,
                4294967295
            },
            "NodeIndex": 102,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 103,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 104,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 105,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 106,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 107,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 108,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 109,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                10,
                9,
                4294967295
            },
            "NodeIndex": 110,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 111,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                11,
                20,
                4294967295
            },
            "NodeIndex": 112,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 113,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 114,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                16,
                4294967295,
                4294967295
            },
            "NodeIndex": 115,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                14,
                20,
                4294967295,
                15,
                19,
                19,
                19,
                19
            },
            "NodeIndex": 116,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                16,
                4294967295,
                4294967295
            },
            "NodeIndex": 117,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                17,
                20,
                4294967295,
                18,
                19,
                19,
                19,
                19
            },
            "NodeIndex": 118,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 119,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 120,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 121,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                12,
                20,
                4294967295
            },
            "NodeIndex": 122,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 123,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                13,
                20,
                4294967295
            },
            "NodeIndex": 124,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 125,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295
            },
            "NodeIndex": 126,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                16,
                4294967295,
                4294967295
            },
            "NodeIndex": 127,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                14,
                20,
                4294967295,
                15,
                19,
                19,
                19,
                19
            },
            "NodeIndex": 128,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                16,
                4294967295,
                4294967295
            },
            "NodeIndex": 129,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                17,
                20,
                4294967295,
                18,
                19,
                19,
                19,
                19
            },
            "NodeIndex": 130,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 131,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 132,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
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
            "NodeIndex": 133,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295
            },
            "NodeIndex": 134,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 135,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                19,
                19,
                19,
                4294967295,
                21,
                20,
                4294967295
            },
            "NodeIndex": 136,
            "Flags": 0
        }
    };
    TMap<class UScriptStruct*, struct FAnimNodeStructData> NodeTypeMap = {
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
        { "ScriptStruct'/Script/Engine.AnimNode_Base'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }
            },
            "NumProperties": 3
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
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("BasePose"), 3 }, 
                { FName("BlendPoses"), 4 }, 
                { FName("BlendMode"), 5 }, 
                { FName("BlendMasks"), 6 }, 
                { FName("LayerSetup"), 7 }, 
                { FName("BlendWeights"), 8 }, 
                { FName("PerBoneBlendWeights"), 9 }, 
                { FName("SkeletonGuid"), 10 }, 
                { FName("VirtualBoneGuid"), 11 }, 
                { FName("LODThreshold"), 12 }, 
                { FName("bMeshSpaceRotationBlend"), 13 }, 
                { FName("bRootSpaceRotationBlend"), 14 }, 
                { FName("bMeshSpaceScaleBlend"), 15 }, 
                { FName("CurveBlendOption"), 16 }, 
                { FName("bBlendRootMotionBasedOnRootBone"), 17 }
            },
            "NumProperties": 18
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
        { "ScriptStruct'/Script/Engine.AnimNode_ConvertLocalToComponentSpace'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("LocalPose"), 3 }
            },
            "NumProperties": 4
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
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_CopyBone'", {
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
                { FName("SourceBone"), 14 }, 
                { FName("TargetBone"), 15 }, 
                { FName("bCopyTranslation"), 16 }, 
                { FName("bCopyRotation"), 17 }, 
                { FName("bCopyScale"), 18 }, 
                { FName("ControlSpace"), 19 }
            },
            "NumProperties": 20
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_TwoWayBlend'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("A"), 3 }, 
                { FName("B"), 4 }, 
                { FName("AlphaInputType"), 5 }, 
                { FName("bResetChildOnActivation"), 6 }, 
                { FName("bAlphaBoolEnabled"), 7 }, 
                { FName("bAlwaysUpdateChildren"), 8 }, 
                { FName("Alpha"), 9 }, 
                { FName("AlphaScaleBias"), 10 }, 
                { FName("AlphaBoolBlend"), 11 }, 
                { FName("AlphaCurveName"), 12 }, 
                { FName("AlphaScaleBiasClamp"), 13 }
            },
            "NumProperties": 14
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_Fabrik'", {
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
                { FName("EffectorTransform"), 14 }, 
                { FName("EffectorTarget"), 15 }, 
                { FName("TipBone"), 16 }, 
                { FName("RootBone"), 17 }, 
                { FName("Precision"), 18 }, 
                { FName("MaxIterations"), 19 }, 
                { FName("EffectorTransformSpace"), 20 }, 
                { FName("EffectorRotationSource"), 21 }, 
                { FName("bEnableDebugDraw"), 22 }, 
                { FName("EffectorTransformBone"), 23 }
            },
            "NumProperties": 24
        } }, 
        { "ScriptStruct'/Script/AnimGraphRuntime.AnimNode_ModifyCurve'", {
            "NameToIndexMap": {
                { FName("InitialUpdateFunction"), 0 }, 
                { FName("BecomeRelevantFunction"), 1 }, 
                { FName("UpdateFunction"), 2 }, 
                { FName("SourcePose"), 3 }, 
                { FName("CurveMap"), 4 }, 
                { FName("CurveValues"), 5 }, 
                { FName("CurveNames"), 6 }, 
                { FName("Alpha"), 7 }, 
                { FName("ApplyMode"), 8 }
            },
            "NumProperties": 9
        } }, 
        { "ScriptStruct'/Script/Test_C.AnimNode_RifleAimServo'", {
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
                { FName("GunBone"), 14 }
            },
            "NumProperties": 15
        } }
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Animations/UE5/AnimBPs/ABP_Procedurals_TP.ABP_Procedurals_TP_C:ExecuteUbergraph_ABP_Procedurals_TP'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__AnimSequenceBase": nullptr,
        "__AnimSequenceBase_0": nullptr,
        "__AnimSequenceBase_1": nullptr,
        "__AnimSequenceBase_2": nullptr
    };
    struct FAnimSubsystem_SharedLinkedAnimLayers AnimBlueprintExtension_SharedLinkedAnimLayers = {
        "ClassesData": {},
        "PersistentClasses": {}
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9 = {
        "ComponentPose": {
            "LinkID": 6
        }
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19 = {
        "LinkToCachingNode": {
            "LinkID": 40
        },
        "CachePoseName": FName("ThirdPersonBlended")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18 = {
        "LinkToCachingNode": {
            "LinkID": 11
        },
        "CachePoseName": FName("ThirdPersonEquippedBlended")
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_13 = {
        "BasePose": {
            "LinkID": 7
        },
        "BlendPoses": {
            {
                "LinkID": 8
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("ik_hand_gun"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9 = {
        "LocalPose": {
            "LinkID": 18
        }
    };
    struct FAnimNode_CopyBone AnimGraphNode_CopyBone_4 = {
        "SourceBone": {
            "BoneName": FName("VB hand_r_ik_hand_gun")
        },
        "TargetBone": {
            "BoneName": FName("ik_hand_gun")
        },
        "bCopyTranslation": true,
        "bCopyRotation": true,
        "bCopyScale": true,
        "ControlSpace": EBoneControlSpace::BCS_ComponentSpace,
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
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10 = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_gun")
        },
        "Translation": FVector(0, 0, 0),
        "Rotation": FRotator(0, 0, -90),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Ignore,
        "RotationMode": EBoneModificationMode::BMM_Additive,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_BoneSpace,
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
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17 = {
        "LinkToCachingNode": {
            "LinkID": 37
        },
        "CachePoseName": FName("ThirdPersonAimedBasePose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16 = {
        "LinkToCachingNode": {
            "LinkID": 36
        },
        "CachePoseName": FName("ThirdPersonAimedWeaponPose")
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_10 = {
        "Source": {
            "LinkID": 2
        },
        "SlotName": FName("UppderBodyAdditive"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15 = {
        "LinkToCachingNode": {
            "LinkID": 40
        },
        "CachePoseName": FName("ThirdPersonBlended")
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10 = {
        "Pose": {
            "LinkID": 21
        },
        "CachePoseName": FName("ThirdPersonEquippedBlended")
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_12 = {
        "BasePose": {
            "LinkID": 13
        },
        "BlendPoses": {
            {
                "LinkID": 23
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("clavicle_r"),
                        "BlendDepth": 2
                    },
                    {
                        "BoneName": FName("clavicle_l"),
                        "BlendDepth": 3
                    },
                    {
                        "BoneName": FName("ik_hand_gun"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.33333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14 = {
        "LinkToCachingNode": {
            "LinkID": 11
        },
        "CachePoseName": FName("ThirdPersonEquippedBlended")
    };
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8 = {
        "LocalPose": {
            "LinkID": 15
        }
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_9 = {
        "Source": {
            "LinkID": 12
        },
        "SlotName": FName("Fire"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9 = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_gun")
        },
        "Translation": FVector(5, -0, 2,5),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Ignore,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 14
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
        "AlphaCurveName": FName("Enable_HandIK_R"),
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
    struct FAnimNode_Slot AnimGraphNode_Slot_8 = {
        "Source": {
            "LinkID": 1
        },
        "SlotName": FName("TP_EquipmentAnim"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_11 = {
        "BasePose": {
            "LinkID": 10
        },
        "BlendPoses": {
            {
                "LinkID": 17
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("clavicle_r"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("clavicle_l"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("spine_01"),
                        "BlendDepth": 6
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.16666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.33333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_10 = {
        "Name": FName("ThirdPersonAimedWeaponPose"),
        "Graph": FName("ThirdPersonAimed"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_9 = {
        "Name": FName("ThirdPersonAimedBasePose"),
        "Graph": FName("ThirdPersonAimed"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_10 = {
        "BasePose": {
            "LinkID": 0
        },
        "BlendPoses": {
            {
                "LinkID": 22
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("hand_r"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("hand_l"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::DoNotOverride,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13 = {
        "LinkToCachingNode": {
            "LinkID": 36
        },
        "CachePoseName": FName("ThirdPersonAimedWeaponPose")
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_7 = {
        "Source": {
            "LinkID": 9
        },
        "SlotName": FName("Reload"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_Root AnimGraphNode_Root_8 = {
        "Result": {
            "LinkID": 27
        }
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_6 = {
        "Source": {
            "LinkID": 28
        },
        "SlotName": FName("UppderBodyAdditive"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8 = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_gun")
        },
        "Translation": FVector(0, 50, 0),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Additive,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 50
        },
        "LODThreshold": -1,
        "ActualAlpha": 0,
        "AlphaInputType": EAnimAlphaInputType::Curve,
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
        "AlphaCurveName": FName("Enable_HandIK_R"),
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
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8 = {
        "ComponentPose": {
            "LinkID": 26
        }
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9 = {
        "BasePose": {
            "LinkID": 30
        },
        "BlendPoses": {
            {
                "LinkID": 29
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("clavicle_r"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("clavicle_l"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("spine_01"),
                        "BlendDepth": 6
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.16666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.33333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_5 = {
        "Source": {
            "LinkID": 31
        },
        "SlotName": FName("TP_EquipmentAnim"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12 = {
        "LinkToCachingNode": {
            "LinkID": 45
        },
        "CachePoseName": FName("ThirdPersonRelaxedBlended")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11 = {
        "LinkToCachingNode": {
            "LinkID": 45
        },
        "CachePoseName": FName("ThirdPersonRelaxedBlended")
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8 = {
        "Name": FName("Third Person Relaxed Base Pose"),
        "Graph": FName("ThirdPersonRelaxed"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9 = {
        "Pose": {
            "LinkID": 32
        },
        "CachePoseName": FName("ThirdPersonRelaxedBasePose")
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7 = {
        "Name": FName("Third Person Relaxed Weapon Pose"),
        "Graph": FName("ThirdPersonRelaxed"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8 = {
        "Pose": {
            "LinkID": 34
        },
        "CachePoseName": FName("ThirdPersonRelaxedWeaponPose")
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7 = {
        "Pose": {
            "LinkID": 19
        },
        "CachePoseName": FName("ThirdPersonAimedWeaponPose")
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6 = {
        "Pose": {
            "LinkID": 20
        },
        "CachePoseName": FName("ThirdPersonAimedBasePose")
    };
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7 = {
        "LocalPose": {
            "LinkID": 49
        }
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7 = {
        "ComponentPose": {
            "LinkID": 38
        }
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5 = {
        "Pose": {
            "LinkID": 3
        },
        "CachePoseName": FName("ThirdPersonBlended")
    };
    struct FAnimNode_CopyBone AnimGraphNode_CopyBone_3 = {
        "SourceBone": {
            "BoneName": FName("VB hand_r_ik_hand_gun")
        },
        "TargetBone": {
            "BoneName": FName("ik_hand_gun")
        },
        "bCopyTranslation": true,
        "bCopyRotation": true,
        "bCopyScale": true,
        "ControlSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 43
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
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8 = {
        "BasePose": {
            "LinkID": 39
        },
        "BlendPoses": {
            {
                "LinkID": 48
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("ik_hand_gun"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("clavicle_r"),
                        "BlendDepth": 6
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.16666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.33333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.33333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.33333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.8333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::DoNotOverride,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6 = {
        "LocalPose": {
            "LinkID": 25
        }
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6 = {
        "ComponentPose": {
            "LinkID": 46
        }
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4 = {
        "Pose": {
            "LinkID": 42
        },
        "CachePoseName": FName("ThirdPersonRelaxedBlended")
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7 = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_gun")
        },
        "Translation": FVector(0, 50, 0),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Additive,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 16
        },
        "LODThreshold": -1,
        "ActualAlpha": 0,
        "AlphaInputType": EAnimAlphaInputType::Curve,
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
        "AlphaCurveName": FName("Enable_HandIK_R"),
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
    struct FAnimNode_Root AnimGraphNode_Root_7 = {
        "Result": {
            "LinkID": 44
        }
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10 = {
        "LinkToCachingNode": {
            "LinkID": 35
        },
        "CachePoseName": FName("ThirdPersonRelaxedWeaponPose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9 = {
        "LinkToCachingNode": {
            "LinkID": 33
        },
        "CachePoseName": FName("ThirdPersonRelaxedBasePose")
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6 = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_gun")
        },
        "Translation": FVector(5, 0,738, -5),
        "Rotation": FRotator(20, -50, -2),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Additive,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 41
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
        "AlphaCurveName": FName("Enable_HandIK_R"),
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
    struct FAnimNode_Root AnimGraphNode_Root_6 = {
        "Result": {
            "LinkID": 92
        }
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3 = {
        "Pose": {
            "LinkID": 68
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_4 = {
        "Source": {
            "LinkID": 66
        },
        "SlotName": FName("Fire"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5 = {
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
            "LinkID": 55
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
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5 = {
        "LocalPose": {
            "LinkID": 57
        }
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5 = {
        "ComponentPose": {
            "LinkID": 65
        }
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7 = {
        "BasePose": {
            "LinkID": 108
        },
        "BlendPoses": {
            {
                "LinkID": 96
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("ik_hand_l"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("clavicle_l"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::DoNotOverride,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4 = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_l")
        },
        "Translation": FVector(0, 0, 0),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Ignore,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ParentBoneSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 63
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
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4 = {
        "LocalPose": {
            "LinkID": 62
        }
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4 = {
        "ComponentPose": {
            "LinkID": 58
        }
    };
    struct FAnimNode_RifleAimServo AnimGraphNode_RifleAimServo = {
        "GunBone": {
            "BoneName": FName("ik_hand_gun")
        },
        "ComponentPose": {
            "LinkID": 77
        },
        "LODThreshold": -1,
        "ActualAlpha": 0,
        "AlphaInputType": EAnimAlphaInputType::Bool,
        "bAlphaBoolEnabled": true,
        "Alpha": 1,
        "AlphaScaleBias": {
            "Scale": 1,
            "Bias": 0
        },
        "AlphaBoolBlend": {
            "BlendInTime": 0.2,
            "BlendOutTime": 0.2,
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
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_CopyBone AnimGraphNode_CopyBone_2 = {
        "SourceBone": {
            "BoneName": FName("ik_hand_gun")
        },
        "TargetBone": {
            "BoneName": FName("ik_hand_l")
        },
        "bCopyTranslation": true,
        "bCopyRotation": false,
        "bCopyScale": false,
        "ControlSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 59
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
    struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve = {
        "SourcePose": {
            "LinkID": 76
        },
        "CurveMap": {},
        "CurveValues": {
            1,
            1
        },
        "CurveNames": {
            FName("Enable_Grip"),
            FName("EnablePistolGrip")
        },
        "Alpha": 1,
        "ApplyMode": EModifyCurveApplyMode::Blend
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3 = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_gun")
        },
        "Translation": FVector(0, 50, 0),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Ignore,
        "RotationMode": EBoneModificationMode::BMM_Additive,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 54
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
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8 = {
        "LinkToCachingNode": {
            "LinkID": 98
        },
        "CachePoseName": FName("FP_BeforeFirePose")
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6 = {
        "BasePose": {
            "LinkID": 83
        },
        "BlendPoses": {
            {
                "LinkID": 71
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("ik_hand_l"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("clavicle_l"),
                        "BlendDepth": 2
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.5
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6 = {
        "Name": FName("InPose"),
        "Graph": FName("AnimGraph"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_Fabrik AnimGraphNode_Fabrik_1 = {
        "EffectorTransform": {
            "Rotation": FQuat(0, 0, 0, 1),
            "Translation": FVector(0, 0, 0),
            "Scale3D": FVector(1, 1, 1)
        },
        "EffectorTarget": {
            "bUseSocket": false,
            "BoneReference": {
                "BoneName": FName("IK_hand_l")
            },
            "SocketReference": {
                "SocketName": FName("None")
            }
        },
        "TipBone": {
            "BoneName": FName("hand_L")
        },
        "RootBone": {
            "BoneName": FName("clavicle_l")
        },
        "Precision": 0.01,
        "MaxIterations": 10,
        "EffectorTransformSpace": EBoneControlSpace::BCS_BoneSpace,
        "EffectorRotationSource": EBoneRotationSource::BRS_CopyFromTarget,
        "ComponentPose": {
            "LinkID": 70
        },
        "LODThreshold": -1,
        "ActualAlpha": 0,
        "AlphaInputType": EAnimAlphaInputType::Curve,
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
        "AlphaCurveName": FName("Enable_Hand_IK_L"),
        "AlphaScaleBiasClamp": {
            "bMapRange": false,
            "bClampResult": true,
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
    struct FAnimNode_Fabrik AnimGraphNode_Fabrik = {
        "EffectorTransform": {
            "Rotation": FQuat(0, 0, 0, 1),
            "Translation": FVector(0, 0, 0),
            "Scale3D": FVector(1, 1, 1)
        },
        "EffectorTarget": {
            "bUseSocket": false,
            "BoneReference": {
                "BoneName": FName("IK_hand_r")
            },
            "SocketReference": {
                "SocketName": FName("None")
            }
        },
        "TipBone": {
            "BoneName": FName("hand_R")
        },
        "RootBone": {
            "BoneName": FName("clavicle_r")
        },
        "Precision": 0.01,
        "MaxIterations": 10,
        "EffectorTransformSpace": EBoneControlSpace::BCS_BoneSpace,
        "EffectorRotationSource": EBoneRotationSource::BRS_CopyFromTarget,
        "ComponentPose": {
            "LinkID": 72
        },
        "LODThreshold": -1,
        "ActualAlpha": 0,
        "AlphaInputType": EAnimAlphaInputType::Curve,
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
        "AlphaCurveName": FName("Enable_Hand_IK_R"),
        "AlphaScaleBiasClamp": {
            "bMapRange": false,
            "bClampResult": true,
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
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7 = {
        "LinkToCachingNode": {
            "LinkID": 75
        },
        "CachePoseName": FName("FP Idle With Grip")
    };
    struct FAnimNode_CopyBone AnimGraphNode_CopyBone_1 = {
        "SourceBone": {
            "BoneName": FName("ik_hand_gun")
        },
        "TargetBone": {
            "BoneName": FName("VB ik_hand_gun")
        },
        "bCopyTranslation": true,
        "bCopyRotation": true,
        "bCopyScale": false,
        "ControlSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 74
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
    struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend = {
        "A": {
            "LinkID": 97
        },
        "B": {
            "LinkID": 53
        },
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true,
        "bResetChildOnActivation": false,
        "bAlwaysUpdateChildren": false,
        "Alpha": 0,
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
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3 = {
        "LocalPose": {
            "LinkID": 93
        }
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2 = {
        "Pose": {
            "LinkID": 56
        },
        "CachePoseName": FName("FP Idle With Grip")
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2 = {
        "BoneToModify": {
            "BoneName": FName("ik_hand_gun")
        },
        "Translation": FVector(0, -13,194, 10,776239),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Additive,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 86
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
    struct FAnimNode_Slot AnimGraphNode_Slot_3 = {
        "Source": {
            "LinkID": 79
        },
        "SlotName": FName("UppderBodyAdditive"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_2 = {
        "Source": {
            "LinkID": 133
        },
        "SlotName": FName("Reload"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_Slot AnimGraphNode_Slot_1 = {
        "Source": {
            "LinkID": 78
        },
        "SlotName": FName("Fire"),
        "bAlwaysUpdateSourcePose": false
    };
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2 = {
        "LocalPose": {
            "LinkID": 103
        }
    };
    struct FAnimNode_CopyBone AnimGraphNode_CopyBone = {
        "SourceBone": {
            "BoneName": FName("VB hand_r_ik_hand_gun")
        },
        "TargetBone": {
            "BoneName": FName("ik_hand_gun")
        },
        "bCopyTranslation": true,
        "bCopyRotation": true,
        "bCopyScale": false,
        "ControlSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 81
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
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5 = {
        "BasePose": {
            "LinkID": 87
        },
        "BlendPoses": {
            {
                "LinkID": 88
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("ik_hand_gun"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3 = {
        "ComponentPose": {
            "LinkID": 82
        }
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4 = {
        "BasePose": {
            "LinkID": 84
        },
        "BlendPoses": {
            {
                "LinkID": 90
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("hand_r"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::DoNotOverride,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1 = {
        "LocalPose": {
            "LinkID": 80
        }
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6 = {
        "LinkToCachingNode": {
            "LinkID": 52
        },
        "CachePoseName": FName("BasePose")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5 = {
        "LinkToCachingNode": {
            "LinkID": 75
        },
        "CachePoseName": FName("FP Idle With Grip")
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1 = {
        "Pose": {
            "LinkID": 67
        },
        "CachePoseName": FName("TP Base Blend")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4 = {
        "LinkToCachingNode": {
            "LinkID": 75
        },
        "CachePoseName": FName("FP Idle With Grip")
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3 = {
        "LinkToCachingNode": {
            "LinkID": 89
        },
        "CachePoseName": FName("TP Base Blend")
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2 = {
        "ComponentPose": {
            "LinkID": 69
        }
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1 = {
        "ComponentPose": {
            "LinkID": 61
        }
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3 = {
        "BasePose": {
            "LinkID": 64
        },
        "BlendPoses": {
            {
                "LinkID": 95
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("ik_hand_r"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("UpperArm_R"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": false,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::DoNotOverride,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1 = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator = {
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2 = {
        "LinkToCachingNode": {
            "LinkID": 98
        },
        "CachePoseName": FName("FP_BeforeFirePose")
    };
    struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose = {
        "Pose": {
            "LinkID": 99
        },
        "CachePoseName": FName("FP_BeforeFirePose")
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5 = {
        "Name": FName("Additive Fire"),
        "Graph": FName("ABP_AdditiveFire"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1 = {
        "LinkToCachingNode": {
            "LinkID": 89
        },
        "CachePoseName": FName("TP Base Blend")
    };
    struct FAnimNode_Slot AnimGraphNode_Slot = {
        "Source": {
            "LinkID": 100
        },
        "SlotName": FName("UppderBodyNonAdditive"),
        "bAlwaysUpdateSourcePose": true
    };
    struct FAnimNode_Root AnimGraphNode_Root_5 = {
        "Result": {
            "LinkID": 73
        }
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2 = {
        "BasePose": {
            "LinkID": 91
        },
        "BlendPoses": {
            {
                "LinkID": 101
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("clavicle_r"),
                        "BlendDepth": 2
                    },
                    {
                        "BoneName": FName("clavicle_l"),
                        "BlendDepth": 2
                    },
                    {
                        "BoneName": FName("ik_hand_gun"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("spine_02"),
                        "BlendDepth": 3
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.33333334
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0.6666667
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::Override,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace = {
        "ComponentPose": {
            "LinkID": 107
        }
    };
    struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace = {
        "LocalPose": {
            "LinkID": 109
        }
    };
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1 = {
        "BoneToModify": {
            "BoneName": FName("clavicle_r")
        },
        "Translation": FVector(-0,583, -7,378, -19,389),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Ignore,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 105
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
    struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone = {
        "BoneToModify": {
            "BoneName": FName("clavicle_l")
        },
        "Translation": FVector(0, -19,389, -7,99),
        "Rotation": FRotator(0, 0, 0),
        "Scale": FVector(1, 1, 1),
        "TranslationMode": EBoneModificationMode::BMM_Additive,
        "RotationMode": EBoneModificationMode::BMM_Ignore,
        "ScaleMode": EBoneModificationMode::BMM_Ignore,
        "TranslationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "RotationSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ScaleSpace": EBoneControlSpace::BCS_ComponentSpace,
        "ComponentPose": {
            "LinkID": 106
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
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1 = {
        "BasePose": {
            "LinkID": 94
        },
        "BlendPoses": {
            {
                "LinkID": 60
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("ik_hand_l"),
                        "BlendDepth": 0
                    },
                    {
                        "BoneName": FName("upperarm_l"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::DoNotOverride,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4 = {
        "Name": FName("Fix Clavicle"),
        "Graph": FName("ABP_FixClavicle"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_Root AnimGraphNode_Root_4 = {
        "Result": {
            "LinkID": 104
        }
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3 = {
        "Name": FName("InPose"),
        "Graph": FName("Extra_Additives"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_Root AnimGraphNode_Root_3 = {
        "Result": {
            "LinkID": 111
        }
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3 = {
        "bCanEnterTransition": true
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2 = {
        "bCanEnterTransition": true
    };
    struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_3 = {
        "Entries": {
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Fidgets/A_FP_Fidget_1_1.A_FP_Fidget_1_1'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 0.8,
                "MaxPlayRate": 0.9,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Fidgets/A_FP_Fidget_1_2.A_FP_Fidget_1_2'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 0.8,
                "MaxPlayRate": 0.9,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Fidgets/A_FP_Fidget_1_3.A_FP_Fidget_1_3'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 0.8,
                "MaxPlayRate": 0.9,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            }
        },
        "BlendWeight": 0,
        "bShuffleMode": true
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_3 = {
        "Result": {
            "LinkID": 115
        }
    };
    struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_2 = {
        "Entries": {
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_RAR_FP_PCH_AssaultRifle_Idle_Loop.A_RAR_FP_PCH_AssaultRifle_Idle_Loop'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 0.8,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Locomotion/UE5_A_FP_Idle.UE5_A_FP_Idle'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 0.8,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            }
        },
        "BlendWeight": 0,
        "bShuffleMode": true
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_2 = {
        "Result": {
            "LinkID": 117
        }
    };
    struct FAnimNode_StateMachine AnimGraphNode_StateMachine_1 = {
        "StateMachineIndexInClass": 1,
        "MaxTransitionsPerFrame": 3,
        "MaxTransitionsRequests": 32,
        "bSkipFirstUpdateTransition": true,
        "bReinitializeOnBecomingRelevant": true,
        "bCreateNotifyMetaData": true,
        "bAllowConduitEntryStates": false
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1 = {
        "base": {
            "LinkID": 121
        },
        "Additive": {
            "LinkID": 119
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
            "bClampResult": true,
            "bInterpResult": true,
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
            "ClampMin": 0.2,
            "ClampMax": 0.8,
            "InterpSpeedIncreasing": 5,
            "InterpSpeedDecreasing": 5
        },
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2 = {
        "Name": FName("InPose_0"),
        "Graph": FName("Extra_IdleFidgets_Default"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_Root AnimGraphNode_Root_2 = {
        "Result": {
            "LinkID": 120
        }
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1 = {
        "Name": FName("InPose_1"),
        "Graph": FName("Extra_IdleFidgets_Aimed"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_Root AnimGraphNode_Root_1 = {
        "Result": {
            "LinkID": 123
        }
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_1 = {
        "Entries": {
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Fidgets/A_FP_Fidget_1_1.A_FP_Fidget_1_1'",
                "ChanceToPlay": 0.2,
                "MinLoopCount": 0,
                "MaxLoopCount": 1,
                "MinPlayRate": 0.8,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.2,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Fidgets/A_FP_Fidget_1_2.A_FP_Fidget_1_2'",
                "ChanceToPlay": 0.2,
                "MinLoopCount": 0,
                "MaxLoopCount": 1,
                "MinPlayRate": 0.8,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.2,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Fidgets/A_FP_Fidget_1_3.A_FP_Fidget_1_3'",
                "ChanceToPlay": 0.2,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 0.8,
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
    struct FAnimNode_StateResult AnimGraphNode_StateResult_1 = {
        "Result": {
            "LinkID": 127
        }
    };
    struct FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer = {
        "Entries": {
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Idle_Loop_UE5.A_FP_PCH_SP60_Idle_Loop_UE5'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 0.6,
                "MaxPlayRate": 1,
                "BlendIn": {
                    "CustomCurve": nullptr,
                    "BlendTime": 0.5,
                    "BlendOption": EAlphaBlendOption::Linear
                }
            },
            {
                "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Locomotion/UE5_A_FP_Idle.UE5_A_FP_Idle'",
                "ChanceToPlay": 1,
                "MinLoopCount": 0,
                "MaxLoopCount": 0,
                "MinPlayRate": 0.6,
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
    struct FAnimNode_StateResult AnimGraphNode_StateResult = {
        "Result": {
            "LinkID": 129
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
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive = {
        "base": {
            "LinkID": 135
        },
        "Additive": {
            "LinkID": 131
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
            "bClampResult": true,
            "bInterpResult": true,
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
            "InterpSpeedIncreasing": 5,
            "InterpSpeedDecreasing": 5
        },
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true
    };
    struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend = {
        "BasePose": {
            "LinkID": 85
        },
        "BlendPoses": {
            {
                "LinkID": 134
            }
        },
        "BlendMode": ELayeredBoneBlendMode::BranchFilter,
        "BlendMasks": {},
        "LayerSetup": {
            {
                "BranchFilters": {
                    {
                        "BoneName": FName("hand_l"),
                        "BlendDepth": 0
                    }
                }
            }
        },
        "BlendWeights": {
            1
        },
        "PerBoneBlendWeights": {
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 1
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            },
            {
                "SourceIndex": 0,
                "BlendWeight": 0
            }
        },
        "SkeletonGuid": FGuid(0x46511F83, 0x4F9573DD, 0x85CDADB4, 0x38FA71A5),
        "VirtualBoneGuid": FGuid(0xE3920682, 0x4EA38051, 0xB37CCF86, 0xE5BEB128),
        "LODThreshold": -1,
        "bMeshSpaceRotationBlend": true,
        "bRootSpaceRotationBlend": false,
        "bMeshSpaceScaleBlend": false,
        "CurveBlendOption": ECurveBlendOption::DoNotOverride,
        "bBlendRootMotionBasedOnRootBone": true
    };
    struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose = {
        "LinkToCachingNode": {
            "LinkID": 75
        },
        "CachePoseName": FName("FP Idle With Grip")
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
            "LinkID": 132
        }
    };
    struct FGameplayTagContainer PropertyAccess_8 = FGameplayTagContainer({});
    struct FQuat PropertyAccess_6 = FQuat(0, 0, 0, 1);
    struct FQuat PropertyAccess_4 = FQuat(0, 0, 0, 1);
    struct FVector PropertyAccess_3 = FVector(0, 0, 0);
    struct FVector PropertyAccess_1 = FVector(0, 0, 0);
    bool Idle? = true;
    double ToCrouchTime = 0.10000000149011612;
    struct FVector Current Recoil Location = FVector(0, 0, 0);
    struct FVector Current Recoil Rotation = FVector(0, 0, 0);
    double Play Rate = 1;
    double Play Rate Running = 1;
    struct FVector Breathing Loop = FVector(0, 0, 0);
    double ToAimTime = 0.3;
    double ToWalkTime = 0.10000000149011612;
    double ToRunTime = 0.10000000149011612;
    struct FVector AimTranslation = FVector(0, 20, 9,637794);
    struct FRotator AimRotation = FRotator(0, 0, 0);
    bool Holstering? = true;
    struct FVector Grip Location Offset = FVector(0, 0, 0);
    struct FVector RightElbowOffset = FVector(100, 0, 0);
    double WeightStanding = 1;
    struct FVectorSpringState Aim Spring State Location = {};
    struct FVectorSpringState Aim Spring State Rotation = {};
    struct FRotator Grip Rotation Offset = FRotator(0, 0, 0);
    struct FVectorSpringState Spring State = {};
    struct FVectorSpringState Spring State_0 = {};
    float LeanWeaponRoll = 5;
    struct FVector2D AimDelta = FVector2D(0, 0);
    double Base Aim Multiplier = 1;
    double Aim Multiplier = 1;
    struct FRotator BreathingRotation = FRotator(0, 0, 0);
    struct FVector First Person Idle Offset Location = FVector(0, 0, 0);
    struct FRotator First Person Idle Offset Rotation = FRotator(0, 0, 0);
    struct FVector Third Person Idle Offset Location = FVector(0, 0, 0);
    struct FRotator Third Person Idle Offset Rotation = FRotator(0, 0, 0);
    struct FRotator Run Offset Rotation = FRotator(0, 0, 0);
    struct FVector Run Offset Location = FVector(0, 0, 0);
    struct FVector Elbow Offset Left Elbow = FVector(0, 0, 0);
    struct FVector Elbow Offset Right Elbow = FVector(0, 0, 0);
    class UAnimSequence* Hand Off Pose = "AnimSequence'Test_C/Content/Animations/UE5/FP/AK/Arm/General/A_FP_HandOff_Pose.A_FP_HandOff_Pose'";
    class UAnimSequence* Secondary Item Idle = "AnimSequence'Test_C/Content/Animations/UE5/FP/FN_SCAR/Arm/A_FP_SCAR_Idle.A_FP_SCAR_Idle'";
    float Aim Reload Influence = 0.2;
    struct FRotator Idle Rotation = FRotator(0, 0, 0);
    struct FRotator Crouch Rotation = FRotator(0, 0, 0);
    struct FRotator TP Aim Rotation = FRotator(0, 0, 0);
    struct FVector TP AimTranslation = FVector(3, 4, 8);
    struct FRifleAimServo AimServo = {
        "MaxDegreesPerSecond": 240,
        "MaxStockShift": 10,
        "bExtendArmsWhenAiming": true,
        "ArmExtendDistance": 30,
        "ArmExtendSpeed": 24
    };
    enum RootMotionMode = ERootMotionMode::NoRootMotionExtraction;
    FName __NameProperty_482 = FName("ThirdPersonRelaxed");
    FName __NameProperty_483 = FName("ThirdPersonAimed");
    FName __NameProperty_484 = FName("AnimGraph");
    enum ESequenceEvalReinit __ByteProperty_485 = ESequenceEvalReinit::ExplicitTime;
    bool __BoolProperty_486 = true;
    float __FloatProperty_487 = 0;
    enum __EnumProperty_488 = EAnimSyncMethod::DoNotSync;
    enum EAnimGroupRole __ByteProperty_489 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_490 = FName("ABP_AdditiveFire");
    FName __NameProperty_491 = FName("None");
    FName __NameProperty_492 = FName("ABP_FixClavicle");
    FName __NameProperty_493 = FName("Extra_Additives");
    FName __NameProperty_494 = FName("Extra_IdleFidgets_Default");
    FName __NameProperty_495 = FName("Extra_IdleFidgets_Aimed");
    FName __NameProperty_496 = FName("Fidget");
    int32 __IntProperty_497 = 1;
    bool __BoolProperty_498 = false;
    FName __NameProperty_499 = FName("Base");
    int32 __IntProperty_500 = 0;
    struct FAnimNodeFunctionRef __StructProperty_501 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    FName __NameProperty_502 = FName("DefaultSharedGroup");
    FName __NameProperty_503 = FName("Extra_IdleFidgets_Crouched");
    bool IsInAir?;
    bool InProneTransition?;
    bool IsProne?;
    bool Aiming?;
    bool LowReady?;
    bool Crouching?;
    double WeaponBlockAlpha;
    double ForwardVelocity;
    bool FirstPerson?;
    EQUA_ForeGripType Grip Type;
    bool Sneaking?;
    bool Running?;
    class UAnimSequence* Idle;
    double StrafeVelocity;
    class UAnimSequenceBase* Sequence Running;
    double AimOffset;
    bool Leaning?;
    double Enable Grip;
    double AimStamina;
    bool InCover?;
    double WeightCrouching;
    class UEquippableDataAsset* Equippable Data;
    class UAnimSequence* Foregrip Idle;
    bool IsInventoryOpen?;
    bool Active Value;
    double NewVar;
    bool Local;
    float AimAlpha;
    float Default Aim Transition;
    float CrouchMultiplier;
    float Aim Transition Time;
    bool IsTraveling?;
    class UAnimSequence* Idle Anim;
    bool UsedFixedIdle;
    bool AnyMontagePlaying;
    double AdditiveIdleAlpha;
    float Fire Montage Alpha;
    double ABS Aim Delta X;
    double Left Hand Grip Alpha;
    double Crouch Play Rate;
    double Slow Walk Play Rate;
    double Walk Play Rate;
    double Run Play Rate;
    float Left Hand IK Alpha;
    bool Elbow Offset Use Elbow Offset;
    double Right Hand Grip Alpha;
    class UAnimSequence* Pistol Grip Idle;
    double Enable Pistol Grip;
    double Secondary Idle Alpha;
    float Right Hand IK Alpha;
    float Hand Gun IK Alpha;
    class UAnimSequenceBase* Run Anim;
    class UGameplayTagsComponent* GameplayTagsComp;
    class UFirstPersonWeaponADS* FPCAiming;
    float Left Hand;
    float Right Hand;
    float Head Movement;
    bool TacSprinting?;
    double Elbow Offset Alpha;
private:
    float PropertyAccess_9;
    bool PropertyAccess_7;
    double PropertyAccess_5;
    float PropertyAccess_2;
    class UAnimSequence* PropertyAccess;

};