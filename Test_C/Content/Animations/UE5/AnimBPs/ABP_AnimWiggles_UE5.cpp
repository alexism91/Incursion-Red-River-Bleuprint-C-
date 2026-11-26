class UABP_AnimWiggles_UE5_C : public UAnimInstance
{
public:
    TArray<struct FBakedAnimationStateMachine> BakedStateMachines = {
        {
            "MachineName": FName("SMachine Wiggle Sprint"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("Default"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 10,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
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
                    "StateName": FName("Run (In)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 11,
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
                    "bAlwaysResetOnEntry": true
                },
                {
                    "StateName": FName("Run (Out)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 10,
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
                    "bAlwaysResetOnEntry": true
                },
                {
                    "StateName": FName("Run (Out) Not Fully Blend"),
                    "Transitions": {},
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
                    "bAlwaysResetOnEntry": true
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
                    "BlendMode": EAlphaBlendOption::CubicInOut,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 1,
                    "NextState": 2,
                    "CrossfadeDuration": 0.4,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::CubicInOut,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 2,
                    "NextState": 1,
                    "CrossfadeDuration": 0.4,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::CubicInOut,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                }
            }
        },
        {
            "MachineName": FName("SMachine Wiggle Walking"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("Default"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 22,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
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
                },
                {
                    "StateName": FName("Aim (In)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 23,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 1,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 16,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        17
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
                },
                {
                    "StateName": FName("Aim (Out)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 22,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 2,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
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
                    "bAlwaysResetOnEntry": true
                }
            },
            "Transitions": {
                {
                    "PreviousState": 0,
                    "NextState": 1,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 1,
                    "NextState": 2,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 2,
                    "NextState": 1,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                }
            }
        },
        {
            "MachineName": FName("SMachine Wiggle Holster"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("Default"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 32,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 30,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        31
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("Aim (In)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 33,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 1,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 26,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        27
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
                },
                {
                    "StateName": FName("Aim (Out)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 32,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 2,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 28,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        29
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
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
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
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
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 2,
                    "NextState": 1,
                    "CrossfadeDuration": 0.2,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                }
            }
        },
        {
            "MachineName": FName("SMachine Wiggle Crouch"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("Default"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 44,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 42,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        43
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("Crouch (In)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 45,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 1,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 38,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        39
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
                },
                {
                    "StateName": FName("Crouch (Out)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 44,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 2,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 40,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        41
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
                }
            },
            "Transitions": {
                {
                    "PreviousState": 0,
                    "NextState": 1,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 1,
                    "NextState": 2,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 2,
                    "NextState": 1,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                }
            }
        },
        {
            "MachineName": FName("SMachine Wiggle Aim"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("Default"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 52,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 51,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {},
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("Aim (In)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 53,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 1,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 47,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        48
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
                },
                {
                    "StateName": FName("Aim (Out)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 52,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 2,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 49,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        50
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
                }
            },
            "Transitions": {
                {
                    "PreviousState": 0,
                    "NextState": 1,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 1,
                    "NextState": 2,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                },
                {
                    "PreviousState": 2,
                    "NextState": 1,
                    "CrossfadeDuration": 0.25,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "InterruptNotify": -1,
                    "BlendMode": EAlphaBlendOption::Sinusoidal,
                    "CustomCurve": nullptr,
                    "BlendProfile": nullptr,
                    "LogicType": ETransitionLogicType::TLT_StandardBlend,
                    "StateName": FName("None")
                }
            }
        },
        {
            "MachineName": FName("SMachine Wiggle Run"),
            "InitialState": 0,
            "States": {
                {
                    "StateName": FName("Default"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 61,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 0,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 59,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        60
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": false
                },
                {
                    "StateName": FName("Run (In)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 62,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 1,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 55,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        56
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
                },
                {
                    "StateName": FName("Run (Out)"),
                    "Transitions": {
                        {
                            "CanTakeDelegateIndex": 61,
                            "CustomResultNodeIndex": -1,
                            "TransitionIndex": 2,
                            "bDesiredTransitionReturnValue": true,
                            "bAutomaticRemainingTimeRule": false,
                            "AutomaticRuleTriggerTime": -1,
                            "SyncGroupNameToRequireValidMarkersRule": FName("None"),
                            "PoseEvaluatorLinks": {}
                        }
                    },
                    "StateRootNodeIndex": 57,
                    "StartNotify": -1,
                    "EndNotify": -1,
                    "FullyBlendedNotify": -1,
                    "bIsAConduit": false,
                    "EntryRuleNodeIndex": -1,
                    "PlayerNodeIndices": {
                        58
                    },
                    "LayerNodeIndices": {},
                    "bAlwaysResetOnEntry": true
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
                    "NextState": 2,
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
                    "PreviousState": 2,
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
                }
            }
        }
    };
    class USkeleton* TargetSkeleton = "Skeleton'Test_C/Content/Characters/Mannequins/Meshes/SK_IRR_Mannequin.SK_IRR_Mannequin'";
    TArray<FName> SyncGroupNames = {
        FName("Crouching (In)"),
        FName("Crouching (Out)"),
        FName("Sprint")
    };
    TArray<struct FAnimNodeData> AnimNodeData = {
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 0,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 1,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                22,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 2,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                13,
                27,
                4294967295,
                14,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 3,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                2147483648,
                0,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 4,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                17,
                27,
                4294967295,
                18,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 5,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                2147483649,
                6,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 6,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                28,
                27,
                4294967295,
                29,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 7,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
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
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 9,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 10,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                13,
                27,
                4294967295,
                14,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 11,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                10,
                2147483650,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 12,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                7,
                27,
                4294967295,
                18,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 13,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                1,
                2147483651,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 14,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                8,
                27,
                4294967295,
                29,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 15,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
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
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 17,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 18,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                22,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 19,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                13,
                27,
                4294967295,
                14,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 20,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                2,
                25,
                24,
                15,
                24,
                4294967295,
                22,
                2147483652,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 21,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                3,
                27,
                4294967295,
                18,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 22,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4,
                25,
                24,
                15,
                24,
                4294967295,
                21,
                2147483653,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 23,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                5,
                27,
                4294967295,
                29,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 24,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
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
                30,
                30,
                30,
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
                30,
                30,
                30,
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
            "NodeIndex": 27,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
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
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 29,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 30,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                22,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 31,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                13,
                27,
                4294967295,
                14,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 32,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                6,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 33,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                7,
                27,
                4294967295,
                18,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 34,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                6,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 35,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                8,
                27,
                4294967295,
                29,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 36,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 37,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
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
            "NodeIndex": 38,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 39,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 40,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                22,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 41,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                13,
                27,
                4294967295,
                14,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 42,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                22,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 43,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                7,
                27,
                4294967295,
                18,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 44,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                2147483654,
                22,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 45,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                8,
                27,
                4294967295,
                29,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 46,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 47,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
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
            "NodeIndex": 48,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295
            },
            "NodeIndex": 49,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                9,
                26,
                4294967295
            },
            "NodeIndex": 50,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 51,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295
            },
            "NodeIndex": 52,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                10,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 53,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                11,
                27,
                4294967295,
                12,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 54,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                22,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 55,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                13,
                27,
                4294967295,
                14,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 56,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                16,
                25,
                24,
                15,
                24,
                4294967295,
                22,
                21,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 57,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                17,
                27,
                4294967295,
                18,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 58,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                4294967295,
                26,
                25,
                24,
                23,
                24,
                4294967295,
                22,
                21,
                20,
                4294967295,
                19,
                24,
                24
            },
            "NodeIndex": 59,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
                4294967295,
                28,
                27,
                4294967295,
                29,
                30,
                30,
                30,
                30
            },
            "NodeIndex": 60,
            "Flags": 0
        },
        {
            "AnimClassInterface": nullptr,
            "Entries": {
                30,
                30,
                30,
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
                30,
                30,
                30,
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
            "NodeIndex": 62,
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
        } }
    };
    struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables = {
        "__FloatProperty": 1,
        "__FloatProperty_0": 1.3,
        "__FloatProperty_1": 1,
        "__FloatProperty_2": 1,
        "__FloatProperty_3": 1,
        "__FloatProperty_4": 1.2,
        "__FloatProperty_5": 1.5
    };
    struct FAnimSubsystem_SharedLinkedAnimLayers AnimBlueprintExtension_SharedLinkedAnimLayers = {
        "ClassesData": {},
        "PersistentClasses": {}
    };
    struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess = {};
    struct FAnimSubsystemInstance AnimBlueprintExtension_Base = {};
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_AR_01_Idle_Pose_Additive_UE5.A_FP_PCH_AR_01_Idle_Pose_Additive_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_18 = {
        "Result": {
            "LinkID": 2
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_Out_Transition_UE5.A_FP_PCH_SP60_Sprint_Out_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_17 = {
        "Result": {
            "LinkID": 4
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_In_Transition_UE5.A_FP_PCH_SP60_Sprint_In_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_16 = {
        "Result": {
            "LinkID": 6
        }
    };
    struct FAnimNode_StateMachine AnimGraphNode_StateMachine_5 = {
        "StateMachineIndexInClass": 5,
        "MaxTransitionsPerFrame": 1,
        "MaxTransitionsRequests": 32,
        "bSkipFirstUpdateTransition": true,
        "bReinitializeOnBecomingRelevant": true,
        "bCreateNotifyMetaData": true,
        "bAllowConduitEntryStates": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_15 = {
        "Result": {
            "LinkID": -1
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_Aim_In_Transition_UE9.A_FP_PCH_Aim_In_Transition_UE9'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_14 = {
        "Result": {
            "LinkID": 12
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_Aim_In_Transition_UE9.A_FP_PCH_Aim_In_Transition_UE9'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_13 = {
        "Result": {
            "LinkID": 14
        }
    };
    struct FAnimNode_StateMachine AnimGraphNode_StateMachine_4 = {
        "StateMachineIndexInClass": 4,
        "MaxTransitionsPerFrame": 1,
        "MaxTransitionsRequests": 32,
        "bSkipFirstUpdateTransition": true,
        "bReinitializeOnBecomingRelevant": true,
        "bCreateNotifyMetaData": true,
        "bAllowConduitEntryStates": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_AR_01_Idle_Pose_Additive_UE5.A_FP_PCH_AR_01_Idle_Pose_Additive_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_12 = {
        "Result": {
            "LinkID": 19
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_Out_Transition_UE5.A_FP_PCH_SP60_Sprint_Out_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_11 = {
        "Result": {
            "LinkID": 21
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_In_Transition_UE5.A_FP_PCH_SP60_Sprint_In_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_10 = {
        "Result": {
            "LinkID": 23
        }
    };
    struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3 = {
        "StateMachineIndexInClass": 3,
        "MaxTransitionsPerFrame": 1,
        "MaxTransitionsRequests": 32,
        "bSkipFirstUpdateTransition": true,
        "bReinitializeOnBecomingRelevant": true,
        "bCreateNotifyMetaData": true,
        "bAllowConduitEntryStates": false
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5 = {
        "base": {
            "LinkID": 38
        },
        "Additive": {
            "LinkID": 16
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
                "Max": 0.6
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
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4 = {
        "base": {
            "LinkID": 26
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
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3 = {
        "base": {
            "LinkID": 62
        },
        "Additive": {
            "LinkID": 25
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
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_AR_01_Idle_Pose_Additive_UE5.A_FP_PCH_AR_01_Idle_Pose_Additive_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_9 = {
        "Result": {
            "LinkID": 31
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_In_Transition_UE5.A_FP_PCH_SP60_Sprint_In_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_8 = {
        "Result": {
            "LinkID": 33
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_In_Transition_UE5.A_FP_PCH_SP60_Sprint_In_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_7 = {
        "Result": {
            "LinkID": 35
        }
    };
    struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2 = {
        "StateMachineIndexInClass": 2,
        "MaxTransitionsPerFrame": 1,
        "MaxTransitionsRequests": 32,
        "bSkipFirstUpdateTransition": true,
        "bReinitializeOnBecomingRelevant": true,
        "bCreateNotifyMetaData": true,
        "bAllowConduitEntryStates": false
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2 = {
        "base": {
            "LinkID": 48
        },
        "Additive": {
            "LinkID": 37
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
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_AR_01_Idle_Pose_Additive_UE5.A_FP_PCH_AR_01_Idle_Pose_Additive_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_6 = {
        "Result": {
            "LinkID": 41
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_Out_Transition_UE5.A_FP_PCH_SP60_Sprint_Out_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_5 = {
        "Result": {
            "LinkID": 43
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_In_Transition_UE5.A_FP_PCH_SP60_Sprint_In_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_4 = {
        "Result": {
            "LinkID": 45
        }
    };
    struct FAnimNode_StateMachine AnimGraphNode_StateMachine_1 = {
        "StateMachineIndexInClass": 1,
        "MaxTransitionsPerFrame": 1,
        "MaxTransitionsRequests": 32,
        "bSkipFirstUpdateTransition": true,
        "bReinitializeOnBecomingRelevant": true,
        "bCreateNotifyMetaData": true,
        "bAllowConduitEntryStates": false
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_1 = {
        "base": {
            "LinkID": 49
        },
        "Additive": {
            "LinkID": 47
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
            "bInterpResult": true,
            "InRange": {
                "Min": 0,
                "Max": 1
            },
            "OutRange": {
                "Min": 1,
                "Max": 0
            },
            "Scale": 1,
            "Bias": 0,
            "ClampMin": 0.1,
            "ClampMax": 0.2,
            "InterpSpeedIncreasing": 10,
            "InterpSpeedDecreasing": 10
        },
        "AlphaInputType": EAnimAlphaInputType::Float,
        "bAlphaBoolEnabled": true
    };
    struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose = {
        "Name": FName("InPose"),
        "Graph": FName("AnimGraph"),
        "InputPose": {
            "LinkID": -1
        },
        "bIsOutputLinked": true
    };
    struct FAnimNode_Root AnimGraphNode_Root = {
        "Result": {
            "LinkID": 28
        }
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1 = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult = {
        "bCanEnterTransition": false
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_SP60_Sprint_In_Transition_UE5.A_FP_PCH_SP60_Sprint_In_Transition_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_3 = {
        "Result": {
            "LinkID": 53
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/A_FP_PCH_AR_01_Idle_Pose_Additive_UE5.A_FP_PCH_AR_01_Idle_Pose_Additive_UE5'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_2 = {
        "Result": {
            "LinkID": 55
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1 = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Dannyboy/A_FP_RPD_StopSprint.A_FP_RPD_StopSprint'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult_1 = {
        "Result": {
            "LinkID": 57
        }
    };
    struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer = {
        "Sequence": "AnimSequence'Test_C/Content/Animations/UE5/FP/General/Dannyboy/A_FP_RPD_StopSprint.A_FP_RPD_StopSprint'",
        "PlayRateScaleBiasClampState": {},
        "BlendWeight": 0,
        "InternalTimeAccumulator": 0
    };
    struct FAnimNode_StateResult AnimGraphNode_StateResult = {
        "Result": {
            "LinkID": 59
        }
    };
    struct FAnimNode_StateMachine AnimGraphNode_StateMachine = {
        "StateMachineIndexInClass": 0,
        "MaxTransitionsPerFrame": 1,
        "MaxTransitionsRequests": 32,
        "bSkipFirstUpdateTransition": true,
        "bReinitializeOnBecomingRelevant": true,
        "bCreateNotifyMetaData": true,
        "bAllowConduitEntryStates": false
    };
    struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive = {
        "base": {
            "LinkID": 27
        },
        "Additive": {
            "LinkID": 61
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
    float Crouch Multiplier = 1;
    float Sprint Wiggle Alpha = 0.8;
    float Run Wiggle Alpha = 0.8;
    float __FloatProperty_483 = 1.2;
    float __FloatProperty_484 = 1.05;
    FName __NameProperty_485 = FName("Crouching (Out)");
    FName __NameProperty_486 = FName("Crouch (Out)");
    FName __NameProperty_487 = FName("Crouching (In)");
    FName __NameProperty_488 = FName("Crouch (In)");
    float __FloatProperty_489 = 1.1;
    FName __NameProperty_490 = FName("Aim (Out)");
    FName __NameProperty_491 = FName("Aim (In)");
    FName __NameProperty_492 = FName("AnimGraph");
    float __FloatProperty_493 = 0.9;
    FName __NameProperty_494 = FName("Run (Out) Not Fully Blend");
    int32 __IntProperty_495 = 3;
    FName __NameProperty_496 = FName("Default");
    int32 __IntProperty_497 = 0;
    enum __EnumProperty_498 = EAnimSyncMethod::SyncGroup;
    FName __NameProperty_499 = FName("Sprint");
    FName __NameProperty_500 = FName("Run (Out)");
    int32 __IntProperty_501 = 2;
    float __FloatProperty_502 = 0;
    struct FInputScaleBiasClampConstants __StructProperty_503 = {
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
    float __FloatProperty_504 = 0.8;
    float __FloatProperty_505 = 1;
    enum __EnumProperty_506 = EAnimSyncMethod::DoNotSync;
    bool __BoolProperty_507 = false;
    enum EAnimGroupRole __ByteProperty_508 = EAnimGroupRole::CanBeLeader;
    FName __NameProperty_509 = FName("None");
    FName __NameProperty_510 = FName("DefaultSharedGroup");
    FName __NameProperty_511 = FName("Run (In)");
    int32 __IntProperty_512 = 1;
    struct FAnimNodeFunctionRef __StructProperty_513 = {
        "ClassName": FName("None"),
        "FunctionName": FName("None")
    };
    bool Aiming;
    bool Crouching;
    bool Sneaking;
    bool Walking;
    bool Leaning;
    bool Running;
    bool Sprinting;
    bool LowReady;
    bool WeaponClipping;
    bool Idle;
    bool Inventory;
    double Aim Multiplier;
    double WalkInterpTime;
    double AimInterpTime;
    double Crouch Wiggle Alpha;
    double Sway Multiplier;
    bool FullSprintBlend;

};