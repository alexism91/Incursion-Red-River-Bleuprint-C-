class UCR_Soldier_Procedural_C : public UControlRig
{
public:
    class URigHierarchy* DynamicHierarchy = "RigHierarchy'Test_C/Content/ThirdParty/Modular_Sldr_Bndl/Animation_Blueprints/Common_Animation_Blueprints/CR_Soldier_Procedural.Default__CR_Soldier_Procedural_C:DynamicHierarchy'";
    TArray<FSoftObjectPath> ShapeLibraries = {
        FSoftObjectPath("/ControlRig/Controls/DefaultGizmoLibrary.DefaultGizmoLibrary")
    };
    class UObject* DataSourceRegistry = nullptr;
    class URigVM* VM = "RigVM'Test_C/Content/ThirdParty/Modular_Sldr_Bndl/Animation_Blueprints/Common_Animation_Blueprints/CR_Soldier_Procedural.Default__CR_Soldier_Procedural_C:ControlRig_VM'";
};

class URigVMMemory_Literal : private URigVMMemoryStorage
{
public:
    struct FRigElementKey RigVMModel___SetRotation_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("upperarm_correctiveRoot_l")
    };
    struct FRigElementKey RigVMModel___GetTransform_6_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("upperarm_l")
    };
    bool RigVMModel___GetTransform_6_1_bInitial__Const = true;
    struct FVector RigVMModel___MathQuaternionSwingTwist_TwistAxis__Const = FVector(1, 0, 0);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_B__Const = FQuat(0, 0, 0, 1);
    float RigVMModel___MathQuaternionSlerp_2_T__Const = 0.65;
    float RigVMModel___SetRotation_2_Weight__Const = 1;
    struct FRigElementKey RigVMModel___SetRotation_2_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("upperarm_twist_01_l")
    };
    float RigVMModel___MathQuaternionSlerp_T__Const = 0.2;
    enum ERigVMTransformSpace RigVMModel___SetTranslation_Space__Const = ERigVMTransformSpace::GlobalSpace;
    struct FRigElementKey RigVMModel___GetTransform_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("lowerarm_l")
    };
    float RigVMModel___MathTransformLerp_T__Const = 0.333;
    struct FRigElementKey RigVMModel___SetRotation_2_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("upperarm_twist_02_l")
    };
    float RigVMModel___MathQuaternionSlerp_1_T__Const = 0.8;
    float RigVMModel___MathTransformLerp_1_T__Const = 0.667;
    struct FRigElementKey RigVMModel___SetRotation_2_1_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("lowerarm_correctiveRoot_l")
    };
    float RigVMModel___MathQuaternionSlerp_2_3_T__Const = 0.5;
    struct FRigElementKey RigVMModel___SetRotation_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("lowerarm_twist_01_l")
    };
    struct FRigElementKey RigVMModel___GetTransform_5_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("hand_l")
    };
    float RigVMModel___MathQuaternionSlerp_4_T__Const = 0.4;
    struct FRigElementKey RigVMModel___SetRotation_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("lowerarm_twist_02_l")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("upperarm_correctiveRoot_r")
    };
    struct FRigElementKey RigVMModel___GetTransform_6_3_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("upperarm_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("upperarm_twist_01_r")
    };
    struct FRigElementKey RigVMModel___GetTransform_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("lowerarm_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("upperarm_twist_02_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("lowerarm_correctiveRoot_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_1_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("lowerarm_twist_01_r")
    };
    struct FRigElementKey RigVMModel___GetTransform_6_5_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("hand_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_1_1_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("lowerarm_twist_02_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_2_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("thigh_correctiveRoot_l")
    };
    struct FRigElementKey RigVMModel___GetTransform_6_3_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("thigh_l")
    };
    float RigVMModel___MathQuaternionSlerp_2_2_T__Const = 0.6;
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("thigh_twist_01_l")
    };
    struct FRigElementKey RigVMModel___GetTransform_1_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_l")
    };
    struct FRigElementKey RigVMModel___SetRotation_3_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("thigh_twist_02_l")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_2_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_correctiveRoot_l")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_2_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_twist_01_l")
    };
    struct FRigElementKey RigVMModel___GetTransform_6_3_1_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("foot_l")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_2_1_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_twist_02_l")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_2_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("thigh_correctiveRoot_r")
    };
    struct FRigElementKey RigVMModel___GetTransform_6_3_1_3_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("thigh_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_2_1_3_2_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("thigh_twist_01_r")
    };
    struct FRigElementKey RigVMModel___GetTransform_1_2_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_3_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("thigh_twist_02_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_3_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_correctiveRoot_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_3_2_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_twist_01_r")
    };
    struct FRigElementKey RigVMModel___GetTransform_6_3_1_5_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("foot_r")
    };
    struct FRigElementKey RigVMModel___SetRotation_3_2_1_1_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_twistCor_02_r")
    };
    struct FRigElementKey RigVMModel___SetTranslation_4_1_2_Item__Const = {
        "Type": ERigElementType::First,
        "Name": FName("calf_twist_02_r")
    };
protected:
    byte RigVMModel___SetRotation_2_Space__Const;
    bool RigVMModel___SetRotation_2_bInitial__Const;
};

class URigVMMemory_Work : private URigVMMemoryStorage
{
public:
    struct FQuat RigVMModel___MathQuaternionMul_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_3_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_Swing = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_2_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FVector RigVMModel___SetTranslation_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_1_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_1_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector RigVMModel___SetTranslation_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionMul_3_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_3_3_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_4_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_4_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_2_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_4_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_4_Swing = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_3_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_2_4_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_4_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_3_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_3_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_5_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_5_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_5_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_5_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_3_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_3_Swing = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_1_3_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_4_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_4_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_1_3_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_1_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FVector RigVMModel___SetTranslation_5_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_5_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_1_3_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_4_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector RigVMModel___SetTranslation_5_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_5_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionMul_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_3_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_1_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_1_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_3_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_2_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_1_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_1_Swing = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_2_1_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_3_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_2_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_2_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_1_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FVector RigVMModel___SetTranslation_2_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_1_1_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_1_1_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector RigVMModel___SetTranslation_2_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionMul_3_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_3_3_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_4_1_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_4_1_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_4_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_4_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_3_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_4_1_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_4_1_Swing = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_3_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_2_4_1_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_1_3_1_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_3_1_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_3_1_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_5_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_5_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_4_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_4_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_3_1_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_3_1_Swing = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_1_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_1_3_1_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_4_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_4_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_1_3_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_1_3_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FVector RigVMModel___SetTranslation_2_1_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_2_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_1_3_1_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_1_1_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_4_1_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector RigVMModel___SetTranslation_2_1_1_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_2_1_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionMul_2_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_3_2_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_2_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_3_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_3_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_2_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_Swing = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_2_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_2_2_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_3_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_3_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_1_2_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_1_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FVector RigVMModel___SetTranslation_3_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_1_2_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_1_2_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector RigVMModel___SetTranslation_3_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_3_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionMul_2_2_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_3_2_2_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_2_2_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_3_1_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_3_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_2_1_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_2_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_Swing = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_2_2_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_2_2_2_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_2_2_2_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_1_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_2_2_1_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_3_1_2_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_3_1_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_2_1_2_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_2_1_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_1_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_1_Swing = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_2_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_1_2_2_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_3_2_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_3_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_1_2_2_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_1_2_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FVector RigVMModel___SetTranslation_3_1_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_3_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_2_1_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_3_2_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector RigVMModel___SetTranslation_3_1_1_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_3_1_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionMul_2_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_3_2_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_1_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_2_1_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_3_1_3_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_3_1_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_2_1_3_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_2_1_3_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_1_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_1_Swing = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_2_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_2_2_1_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_2_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_2_1_3_2_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_3_1_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_3_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_3_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_1_2_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_1_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FVector RigVMModel___SetTranslation_4_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_4_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_1_2_1_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_3_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_1_2_1_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector RigVMModel___SetTranslation_4_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_4_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionMul_2_2_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_3_2_2_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_2_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_2_2_2_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_3_1_4_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_3_1_4_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_2_1_4_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_2_1_4_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_2_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_2_Swing = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSlerp_2_2_2_2_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionInverse_2_2_2_1_Result = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_3_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSlerp_2_2_2_1_1_Result = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_1_1_Twist = FQuat(0, 0, 0, 1);
    struct FTransform RigVMModel___MathTransformMakeRelative_3_2_2_1_1_Local = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_6_3_1_5_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_3_1_5_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_6_1_2_1_5_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_6_1_2_1_5_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_1_1_Input = FQuat(0, 0, 0, 1);
    struct FQuat RigVMModel___MathQuaternionSwingTwist_2_2_1_1_Swing = FQuat(0, 0, 0, 1);
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_3_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_1_2_2_1_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform RigVMModel___GetTransform_3_2_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_3_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___GetTransform_1_2_2_1_Transform = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    TArray<struct FCachedRigElement> RigVMModel___GetTransform_1_2_2_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FVector RigVMModel___SetTranslation_4_1_1_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_4_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    TArray<struct FCachedRigElement> RigVMModel___SetRotation_3_2_1_1_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
    struct FTransform RigVMModel___MathTransformLerp_3_2_1_Result = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FVector RigVMModel___SetTranslation_4_1_2_Value = FVector(0, 0, 0);
    TArray<struct FCachedRigElement> RigVMModel___SetTranslation_4_1_2_CachedIndex = {
        {
            "Key": {
                "Type": ERigElementType::None,
                "Name": FName("None")
            },
            "Index": 65535,
            "ContainerVersion": -1
        }
    };
};