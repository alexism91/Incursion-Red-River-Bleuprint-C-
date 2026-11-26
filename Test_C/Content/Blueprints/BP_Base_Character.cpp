class ABP_Base_Character_C : public AQUA_Character
{
public:
    int32 NumReplicatedProperties = 12;
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/Blueprints/BP_Base_Character.BP_Base_Character_C:TLine Viewmodel Jump_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/BP_Base_Character.BP_Base_Character_C:TLine Viewmodel Landing_Template'",
        "TimelineTemplate'Test_C/Content/Blueprints/BP_Base_Character.BP_Base_Character_C:TLine Viewmodel Fall_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/BP_Base_Character.BP_Base_Character_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/BP_Base_Character.BP_Base_Character_C:ExecuteUbergraph_BP_Base_Character'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector TLine_Viewmodel_Fall_Rotation_B150DE2548ED570CCD9997BAA1B45428 = FVector(0, 0, 0);
    struct FVector TLine_Viewmodel_Fall_Location_B150DE2548ED570CCD9997BAA1B45428 = FVector(0, 0, 0);
    struct FVector TLine_Viewmodel_Landing_Rotation_C1A2773543BCC821665E8396C93C57E1 = FVector(0, 0, 0);
    struct FVector TLine_Viewmodel_Landing_Location_C1A2773543BCC821665E8396C93C57E1 = FVector(0, 0, 0);
    struct FVector TLine_Viewmodel_Jump_Rotation_FEEEC58844233870B47F8D9892D37B57 = FVector(0, 0, 0);
    struct FVector TLine_Viewmodel_Jump_Location_FEEEC58844233870B47F8D9892D37B57 = FVector(0, 0, 0);
    TMap<FName, enum> EquipmentIDSlots = {
        { FName("HEAD"), EQUA_PlayerSlots::HeadWear }, 
        { FName("UPPER"), EQUA_PlayerSlots::Upper }, 
        { FName("ARMOR"), EQUA_PlayerSlots::Armor }, 
        { FName("BACKPACK"), EQUA_PlayerSlots::Backpack }, 
        { FName("PRIMARY"), EQUA_PlayerSlots::Primary }, 
        { FName("SECONDARY"), EQUA_PlayerSlots::Secondary }, 
        { FName("PANTS"), EQUA_PlayerSlots::Pants }, 
        { FName("PISTOL"), EQUA_PlayerSlots::Pistol }, 
        { FName("BOOTS"), EQUA_PlayerSlots::Shoes }, 
        { FName("MELEE"), EQUA_PlayerSlots::Melee }, 
        { FName("TACTICALRIG"), EQUA_PlayerSlots::TacticalRig }, 
        { FName("GLOVES"), EQUA_PlayerSlots::Gloves }, 
        { FName("EARWEAR"), EQUA_PlayerSlots::EarWear }
    };
    struct FVector Breathing Loop = FVector(0, 0, 0);
    class UCurveFloat* Landing Amplitude Curve = "CurveFloat'Test_C/Content/ThirdParty/InfimaGames/LowPolyShooterPack/Data/Curves/FC_LPSP_Land.FC_LPSP_Land'";
    struct FVector2D Action Value = FVector2D(0, 0);
    TMap<FName, enum> BonesSetup = {
        { FName("HEAD"), EQUA_BodyParts::Head }, 
        { FName("neck_01"), EQUA_BodyParts::Head }, 
        { FName("spine_02"), EQUA_BodyParts::Thorax }, 
        { FName("spine_01"), EQUA_BodyParts::Stomach }, 
        { FName("pelvis"), EQUA_BodyParts::Stomach }, 
        { FName("upperarm_l"), EQUA_BodyParts::LeftArm }, 
        { FName("lowerarm_l"), EQUA_BodyParts::LeftArm }, 
        { FName("hand_l"), EQUA_BodyParts::LeftArm }, 
        { FName("upperarm_r"), EQUA_BodyParts::RightArm }, 
        { FName("lowerarm_r"), EQUA_BodyParts::RightArm }, 
        { FName("hand_r"), EQUA_BodyParts::RightArm }, 
        { FName("tigh_l"), EQUA_BodyParts::LeftLeg }, 
        { FName("calf_l"), EQUA_BodyParts::LeftLeg }, 
        { FName("foot_l"), EQUA_BodyParts::LeftLeg }, 
        { FName("ball_l"), EQUA_BodyParts::LeftLeg }, 
        { FName("tigh_r"), EQUA_BodyParts::RightLeg }, 
        { FName("calf_r"), EQUA_BodyParts::RightLeg }, 
        { FName("foot_r"), EQUA_BodyParts::RightLeg }, 
        { FName("ball_r"), EQUA_BodyParts::RightLeg }
    };
    TMap<enum, double> DamageMultiplier = {
        { EQUA_BodyParts::LeftLeg, 0.44999998807907104 }, 
        { EQUA_BodyParts::RightLeg, 0.44999998807907104 }, 
        { EQUA_BodyParts::LeftArm, 0.75 }, 
        { EQUA_BodyParts::RightArm, 0.75 }, 
        { EQUA_BodyParts::Stomach, 1 }, 
        { EQUA_BodyParts::Thorax, 1.5 }, 
        { EQUA_BodyParts::Head, 2.5 }
    };
    struct FStruct_InputKeyInfo Action = {
        "KeyType_20_866387444AA282C102B26292BE102425": Enum_KeyType::NewEnumerator0,
        "SharedMapNames_36_5CBDF9164EB56DD12D6284A790DF7005": {},
        "InputAction_41_F0CC631D427AFF1C0FB2849BA41B6025": "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Sneak.IA_Sneak'",
        "PlayerMappedName_60_D667E47C4761808F2AAD738F1F328FEA": FName("None"),
        "InputMapIndex_58_0B1E836442D1B618608B7BA59F0EABF4": 0
    };
    struct FSkeletalBoneIDCache BonePose = {
        "SkelMesh": nullptr,
        "BoneIds": {}
    };
    class UCameraComponent* FirstPersonCameraComponent = "CameraComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:FirstPersonCamera'";
    class USpringArmComponent* SpringArm = "SpringArmComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:SpringArm'";
    class USkeletalMeshComponent* Helmet1 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Helmet1'";
    class USkeletalMeshComponent* Helmet2 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Helmet2'";
    class USkeletalMeshComponent* Helmet3 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Helmet3'";
    class USkeletalMeshComponent* Helmet4 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Helmet4'";
    class USkeletalMeshComponent* Shirt = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Shirt'";
    class USkeletalMeshComponent* Pants = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Pants'";
    class USkeletalMeshComponent* Boots = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Boots'";
    class USkeletalMeshComponent* Gloves1 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Gloves1'";
    class USkeletalMeshComponent* Gloves2 = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Gloves2'";
    class UObject* Backpack1 = nullptr;
    class UObject* Backpack2 = nullptr;
    class USkeletalMeshComponent* Vest = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Vest'";
    class USkeletalMeshComponent* Vest_Collar = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Vest_Collar'";
    class USkeletalMeshComponent* Vest_Shoulder_R = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Vest_shoulder_R'";
    class USkeletalMeshComponent* Vest_Shoulder_L = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Vest_Shoulder_L'";
    class USkeletalMeshComponent* Vest_Bottom = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Vest_Bottom'";
    class USkeletalMeshComponent* Vest_Outfit = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Vest_Outfit'";
    class USkeletalMeshComponent* Decals = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Decals'";
    class USkeletalMeshComponent* Radio = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Radio'";
    class USkeletalMeshComponent* Holster = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Holster'";
    class USkeletalMeshComponent* EyeWear = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:EyeWear'";
    class USkeletalMeshComponent* EarWear = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:EarWear'";
    class USkeletalMeshComponent* FirstPerson_Arms = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:First Person Arms'";
    class USkeletalMeshComponent* Knieepad_R = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Knieepad_R'";
    class USkeletalMeshComponent* Knieepad_L = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:Knieepad_L'";
    class UPostProcessComponent* LowHealthPostProcessComponent = "PostProcessComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:LowHealthPostProcessComponent'";
    class UPostProcessComponent* FlyByPostProcessComponent = "PostProcessComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:FlyByPostProcessComponent'";
    class UInputMappingContext* BaseMappingContext = "InputMappingContext'Test_C/Content/Blueprints/InputSystem/IM_PlayerEnhancedInputMapping.IM_PlayerEnhancedInputMapping'";
    class UInputAction* MovementAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Move.IA_Move'";
    class UInputAction* LookAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Look.IA_Look'";
    class UInputAction* LeanAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Lean.IA_Lean'";
    class UInputAction* FireAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Fire.IA_Fire'";
    class UInputAction* ReloadAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Reload.IA_Reload'";
    class UInputAction* HolsterAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Holster.IA_Holster'";
    class UInputAction* AimAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Aim.IA_Aim'";
    class UInputAction* SneakAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Sneak.IA_Sneak'";
    class UInputAction* CrouchAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Crouch.IA_Crouch'";
    class UInputAction* RunAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Run.IA_Run'";
    class UInputAction* JumpAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Jump.IA_Jump'";
    class UInputAction* LeanActionToggle_L = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Lean_L.IA_Lean_L'";
    class UInputAction* LeanActionToggle_R = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Lean_R.IA_Lean_R'";
    class UInputAction* InteractAction = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_Interact.IA_Interact'";
    class UInputAction* FreeLook = "InputAction'Test_C/Content/Blueprints/InputSystem/InputActions/IA_FreeLook.IA_FreeLook'";
    struct FSpringInterpVector JumpingSpringSettings = {
        "Stiffness": 0.75,
        "CriticalDampingFactor": 0.5,
        "Mass": 0.01
    };
    float PlayerInteractionDistance = 250;
    float ClippingDistance = 100;
    TMap<enum, struct FQUA_EquipAnimation> EquipAnimations = {
        { EQUA_PlayerSlots::Primary, {
            "EquipMontage": "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_TP_PrimaryEquip_UE5.AM_TP_PrimaryEquip_UE5'",
            "UnEquipMontage": "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_TP_PrimaryUnEquip_UE5.AM_TP_PrimaryUnEquip_UE5'"
        } }, 
        { EQUA_PlayerSlots::Secondary, {
            "EquipMontage": "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_TP_SecondaryEquip_UE5.AM_TP_SecondaryEquip_UE5'",
            "UnEquipMontage": "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_TP_SecondaryUnEquip_UE5.AM_TP_SecondaryUnEquip_UE5'"
        } }, 
        { EQUA_PlayerSlots::Pistol, {
            "EquipMontage": "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_TP_PistolEquip_UE5.AM_TP_PistolEquip_UE5'",
            "UnEquipMontage": "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_TP_PistolUnEquip_UE5.AM_TP_PistolUnEquip_UE5'"
        } }
    };
    TArray<struct FQUA_StatItem> CharacterStats = {
        {
            "StatType": EQUA_StatType::Weight,
            "Modifier": {
                "StatItemType": EQUA_StatItemType::StaticValue,
                "ModifierType": EQUA_ModifierType::Additive,
                "ModifierValue": 1
            }
        },
        {
            "StatType": EQUA_StatType::Ergonomics,
            "Modifier": {
                "StatItemType": EQUA_StatItemType::StaticValue,
                "ModifierType": EQUA_ModifierType::Set,
                "ModifierValue": 100
            }
        },
        {
            "StatType": EQUA_StatType::TurnSpeed,
            "Modifier": {
                "StatItemType": EQUA_StatItemType::StaticValue,
                "ModifierType": EQUA_ModifierType::Additive,
                "ModifierValue": 1
            }
        }
    };
    struct FGameplayTagContainer CurrentAbilityTags = FGameplayTagContainer({
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Aim")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Run")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Lower Weapon")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Lean")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Knife Attack")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Holster")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Grenade Throw")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Crouch")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Sneak")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Open Inventory")),
        FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Cheat"))
    });
    struct FQUA_Abilities Abilities = {
        "Ability_Knife": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Knife Attack"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Aim")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Grenade Throw")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Knife Attack")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Run")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Holster")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot"))
            })
        },
        "Ability_Grenade": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Grenade Throw"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Aim")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Grenade Throw")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Knife Attack")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Run")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Holster")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot"))
            })
        },
        "Ability_Reload": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Reloading"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Grenade Throw")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Knife Attack")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Run")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Holster")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag"))
            })
        },
        "Ability_Inspect": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect"))
            })
        },
        "Ability_InspectMag": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag"))
            }),
            "BlockedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag"))
            })
        },
        "Ability_Inventory": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Open Inventory"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Open Inventory")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Aim")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact"))
            })
        },
        "Ability_AttachmentMenu": {
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.AttachmentMenuOpen"))
            })
        },
        "Ability_Fire": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire"))
            }),
            "BlockedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Firing"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Run")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode"))
            })
        },
        "Ability_ChamberAction": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Chamber Actioning"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Grenade Throw")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Inspect")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Knife Attack")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Holster")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Run")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.InspectMag")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot"))
            })
        },
        "Ability_Run": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Run"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Running.Wants To Run"))
            })
        },
        "Ability_Sneak": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Sneak"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Sneaking"))
            })
        },
        "Ability_Crouch": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Crouch"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Crouching"))
            })
        },
        "Ability_Holster": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Holster"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Holstering"))
            })
        },
        "Ability_Aim": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Aim"))
            }),
            "BlockedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inspecting"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Aiming"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Interact"))
            })
        },
        "Ability_ChangeSlot": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot"))
            }),
            "BlockedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Inventory Open"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Grenade Throw")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Knife Attack")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Aim")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Change Slot")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire"))
            })
        },
        "Ability_Lean": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Lean"))
            }),
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Leaning"))
            })
        },
        "Ability_SwitchFireMode": {
            "RequiredTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.SwitchFireMode"))
            }),
            "BlockedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.ChangingSlot")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed"))
            }),
            "RemovedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Fire")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Reload")),
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Allowed.Chamber Action"))
            })
        },
        "Ability_Cheat": {
            "AddedTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Character.Abilities.Active.Cheating"))
            })
        }
    };
    struct FQUA_ControllerSettings ControllerSettings = {
        "FreeLookLimit": FVector2D(100, 15)
    };
    float TurnSpeedMultiplicator = 1;
    class USkeletalMeshComponent* Mesh = "SkeletalMeshComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:CharacterMesh0'";
    class UCharacterMovementComponent* CharacterMovement = "CharacterMovementComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:CharMoveComp'";
    class UCapsuleComponent* CapsuleComponent = "CapsuleComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:CollisionCylinder'";
    bool bUseControllerRotationYaw = false;
    class UCapsuleComponent* RootComponent = "CapsuleComponent'Test_C/Content/Blueprints/BP_Base_Character.Default__BP_Base_Character_C:CollisionCylinder'";
    class UAbilitySystemComponent* AbilitySystem;
    class UMovementManager* MovementManager;
    class USenseStimulusComponent* SenseStimulus;
    class UBP_HitComponent_C* BP_HitComponent;
    class UHealthAndDamage_C_C* HealthAndDamage_C;
    class UAkComponent* Ak;
    class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    class UAGR_SoundMaster* AGR_SoundMaster;
    class UWidgetComponent* Widget;
    class UAGRAnimMasterComponent* AGRAnimMaster;
    class UTimelineComponent* TLine Viewmodel Fall;
    class UTimelineComponent* TLine Viewmodel Landing;
    class UTimelineComponent* TLine Viewmodel Jump;
    class UObject* InGameWRef;
    TArray<class UObject*> MainJSIContainers;
    TMap<EQUA_PlayerSlots, int> EquipentUIDs;
    class USkeletalMesh* RepEquippedHeadwear;
    class USkeletalMesh* RepEquippedUpper;
    class USkeletalMesh* RepEquippedArmor;
    class USkeletalMesh* RepEquippedBackpack;
    class USkeletalMesh* RepEquippedGloves;
    class USkeletalMesh* RepEquippedBoots;
    class USkeletalMesh* RepEquippedPants;
    class AActor* Equipped_Primary;
    class AActor* Equipped_Pistol;
    class AActor* Equipped_Melee;
    class AActor* Equipped_Secondary;
    class UObject* PreviewCharRef;
    EQUA_PlayerSlots ActiveWeaponSlot;
    class UObject* CurrentFiringWeapon;
    class UObject* RifleAnimInstance_Ref;
    FText PlayerName;
    class AActor* CurrentActor;
    class AActor* InteractingActor;
    class UObject* LocalMagContainer;
    class UObject* LocalDesiredMagToLoad;
    class UObject* LocalDesiredMagToUnequip;
    TMap<byte, class USkeletalMesh*> DefaultEquipment;
    double Landing Velocity Multiplier;
    class USoundCue* Sound Cue Land;
    double Landing Minimum Velocity;
    EQUA_PlayerSlots DesiredSlot;
    class UW_OpenInventory_C* W_OpenInveotry;
    double Output Get;
    double Turn;
    double LookUp;
    double Delta Seconds;
    bool Dead;
private:
    byte TLine_Viewmodel_Fall__Direction_B150DE2548ED570CCD9997BAA1B45428;
    byte TLine_Viewmodel_Landing__Direction_C1A2773543BCC821665E8396C93C57E1;
    byte TLine_Viewmodel_Jump__Direction_FEEEC58844233870B47F8D9892D37B57;

};