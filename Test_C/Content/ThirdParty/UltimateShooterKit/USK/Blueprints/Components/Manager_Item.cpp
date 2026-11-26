class UManager_Item_C : public UActorComponent
{
public:
    int32 NumReplicatedProperties = 3;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/Components/Manager_Item.Manager_Item_C:ExecuteUbergraph_Manager_Item'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FName DisplayName = FName("Display Name");
    double InteractionRadius = 150;
    struct FLinearColor HighlightColor = FLinearColor(1, 0,547861, 0, 1);
    struct FStruct_InteractionWidget InteractionWidget = {
        "BrushColor_2_E9B77E0246BD1978400AA7B35A18214B": FLinearColor(0, 0,186107, 0,572917, 1),
        "Description_8_F2CB2EEA4B81584C0B2D3D9CA6CB9D68": FText(""),
        "Type_16_50C609A647D41B80C3F645AB1D04FCA4": FText(""),
        "UseSeperatorForDescription_11_3D35F5504E63A42E2342F2978410F750": true,
        "UseSeperatorForType_13_93F5ADD34663B59EC13C2E80E2B48F7C": true,
        "UseSeperatorForName_19_0A132E6A452AD349958FCEA7DB9F3E60": false,
        "ItemIcon_5_725DCFA14F9D5F9793E35489A19408EC": nullptr,
        "IconSize_22_D48A771F4A6ED63971E56093A90B8C0C": FVector2D(40, 40)
    };
    struct FVector CollisionBoxExtent = FVector(0, 0, 0);
    struct FVector CollisionBoxItemOffset = FVector(0, 0, 0);
    struct FRotator RotationOffset = FRotator(0, 0, 0);
    bool UseSkeletalMesh = true;
    bool AttachToPawn = true;
    int32 CurrentAmount = 1;
    int32 SpaceInInventory = 1;
    FText MaxAmountIsReachedMessage = FText("Can't Carry More ");
     On_Item_PickedUp = ;
     On_Item_Amount_Updated = ;
    struct FVector2D InventoryIconSize = FVector2D(30, 80);
    struct FStruct_CharacterAnimation CharacterAnimationSetup = {
        "FPPAnimations_2_33E33C3A4726524FC0468880D9379DB4": {
            "Actions_12_D5CC9C8243864F7F1FE603821551F46E": {},
            "Animation_14_33E33C3A4726524FC0468880D9379DB4": nullptr,
            "RelaxedIdleTime_23_699DABBC4545A7F9B5837087ECE58B10": 0,
            "ReadyIdleTime_25_30C3918A4342FB76789544835F4E9236": 0.04,
            "AimIdleTime_27_36F4C6FD46028FE06CA4EC928283DBEB": 0.08,
            "Sprint_19_9011FFFE4A5E8EDB128CC89EAC7EF823": nullptr,
            "JumpStates_8_D846D1274A0810D89E330D8C40038A48": {
                "JumpStart_2_33E33C3A4726524FC0468880D9379DB4": nullptr,
                "JumpLoop_4_C8133CDF486C7079BD74529CE50369D4": nullptr,
                "JumpEnd_6_978F7EDD4FB1F77773BABBBAEFB4079A": nullptr
            }
        },
        "TPPAnimations_4_0FA599294D0329EC933DA287ACA842DD": {
            "Actions_12_D5CC9C8243864F7F1FE603821551F46E": {},
            "Animation_14_33E33C3A4726524FC0468880D9379DB4": nullptr,
            "RelaxedIdleTime_23_699DABBC4545A7F9B5837087ECE58B10": 0,
            "ReadyIdleTime_25_30C3918A4342FB76789544835F4E9236": 0.04,
            "AimIdleTime_27_36F4C6FD46028FE06CA4EC928283DBEB": 0.08,
            "Sprint_19_9011FFFE4A5E8EDB128CC89EAC7EF823": nullptr,
            "JumpStates_8_D846D1274A0810D89E330D8C40038A48": {
                "JumpStart_2_33E33C3A4726524FC0468880D9379DB4": nullptr,
                "JumpLoop_4_C8133CDF486C7079BD74529CE50369D4": nullptr,
                "JumpEnd_6_978F7EDD4FB1F77773BABBBAEFB4079A": nullptr
            }
        }
    };
    int32 CurrentClip = 30;
    int32 MaxClip = 30;
    struct FStruct_ShootingSettings ShootingSettings = {
        "CameraShakeOnShoot_50_617827444FD4C55CD939B2ACBC056394": nullptr,
        "HandRecoil_34_5FC50FB64BE28782F44193B3551B2967": {
            "HandRecoil_2_5E02AE9C45B564604CE1E4956161414D": {
                "Rotation": FQuat(0, 0, 0, 1),
                "Translation": FVector(0, 0, 0),
                "Scale3D": FVector(1, 1, 1)
            },
            "HandRecoilCurve_5_CD435E4F433E02F6BE9E92B375F68403": nullptr
        },
        "MouseRecoil_53_D7BE115447399B64540880A4BE330CB6": {
            "RandomInRange_10_321631044702FC385D43BA805178E090": true,
            "RecoilStrength_2_68BD2BD340811706AD983AA611FF9E21": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            },
            "RecoilMultiplierOnAim_7_A7AF4604479B6447344BED850BDCADC8": 1,
            "RecoilCurve_8_2DFDFC494B2C9DC06319CF8B43D9FA16": nullptr
        },
        "MouseSensitivity_59_C2EB238D406641D68C02BB8D802F96E9": {
            "ADSMouseMultiplier_5_10A1FA5A4196005B0ADB6AA82AAE79B3": 1,
            "AimMouseMultiplier_6_1C7863C14BB2CC832A72BE877C5663A0": 1
        },
        "BulletSpread_56_73A2C2AF47B2BF70CC3620BC3B7F1BEF": FVector2D(0, 0),
        "ShotsFiredInOneSecond_11_DBDF39CA4E96EDD27F32A0A13D3E2FC3": 10,
        "BulletCountOnSingleShot_14_076F49B14A983B99D537C3B7B418D77F": 1,
        "ShotsFiredInBurstMode_16_7B54ACD34B4DDFEE727839883BF7B7E7": 3,
        "BurstFireDelay_19_167DF04742187CCAC08598BC14F7559B": 0.2,
        "CanSingleFire_22_C918D1894A64135D61CEE39BF90DA18B": true,
        "CanBurstFire_24_8408DDBC42C6CDAEA8DB9BBD06475D96": true,
        "CanAutoFire_26_607B05B2469CC6AFFF57129C8A8BA1BE": true
    };
    struct FStruct_ProjectileSettings BulletSettings = {
        "CanPenetrate?_55_37D7284045DE187BDBC5F6B53A087D92": false,
        "MaxBouncePenetration_61_040F6FD84F5BAD9CE0B624964DF28346": 0,
        "Speed_65_C9904CC04329C9F0628BFBB157294B94": 50000,
        "Bounciness_44_D549293A47609C089F96ED846091DE5F": 0.5,
        "Friction_46_DD36A04F4AEFC402D0C467BFE3080FB7": 0.5,
        "GravityScale_34_93F3F1EC49D52CFA067D4A9B9F48EA63": 1,
        "UpVectorFactor_74_F33FFDD44EE8E6C6867D77A07C515B62": 0,
        "SecondsToExplode_71_D9A55BB2484F44C3426B48AB55FE6742": 0,
        "LifespanAfterExplode_84_E128D83D42D3E1B70FE3659560F83D56": 0,
        "SimulatePhysicsAfterStop_87_DDBC5FD04E35D6C3177A2D81A7843308": false,
        "RotationMovementComponent_81_F6E4CC304C1B84D2A38EC7A30CC4B4EC": {
            "UseRotationMovementComponent_1_C8AAC4074153A853281F9D8BBAAB658B": false,
            "RotationRate_9_DEE700734B66D92075A26386BDD3BE3C": FVector(0, 0, 0),
            "PivotOffset_8_236101A44827638A1FDCD080E25DEC96": FVector(0, 0, 0)
        },
        "ProjectileDamageSetup_68_FDEC18A44204C21CA10719BCB3668CAC": {
            "ApplyDamageOnEveryHit_23_2D274BD540055EA69BD72C847BD84C27": false,
            "IsPointDamage_20_B9B3E6864C90036D4AE856AF66FF6D35": false,
            "BaseDamage_4_5520D7F845CAF2F690735CA95077E773": 0,
            "MinimumDamage_6_8ECF15B64F544607BEED7C98B8FD3E00": 0,
            "BaseDamageMultiplier_32_D9A003F047A6F2601CABE886CC1FF68A": 1,
            "DamageMultiplierPerBone_29_A90203C34CD9821284C4819D3C310CE6": {},
            "InnerRadius_8_3C3976C1475FF558851315988572F26A": 150,
            "OuterRadius_10_5C0DD0ED412D57DE447AA3A7BD038719": 300,
            "DamageFalloffExponent_16_F67E579245E9710B2CCD7E82FBB56075": 0.5,
            "DamagePreventationChannel_19_069AB63D4A498308F4BB78AF94DAFB4A": ECollisionChannel::ECC_Visibility,
            "DamageTypeClass_15_F262DB544248CCCD8E9279AFD3C6CC01": nullptr
        },
        "ProjectileMesh_2_6C79889D4C98E830995D709905B1E337": nullptr,
        "ProjectileBeam_39_D9DFF7844E113EB33365B0AC639C9C41": {
            "UseNiagaraSystem_11_593FDBB34F7471BDC107F6AF8AD72E99": false,
            "NiagaraSystem_10_5D953182459F1698C9D994A9AA75B86E": nullptr,
            "ParticleSystem_9_6B66B87643745CA04F39089997B7AAB3": nullptr
        },
        "VisualEffects_28_F85D20284D225F01AAF7879A88325770": {},
        "HitSoundEffects_41_D349D948461F929380BA32AF3ED8E239": {},
        "BounceSoundEffects_56_3ECEBE3048F1AB3DC49848BF8CC8AA17": {},
        "ExplotionSoundEffects_57_CCC7F5C04A01297FB600E8BBD62C83D8": {},
        "PenetrationSetup_17_1E00B9AE4BB2652AFE644BA4001F4D52": {},
        "CalculatedLaunchVelocity_77_3B4EF41349098EC10B4ED7A8D3E44F1C": FVector(0, 0, 0)
    };
    struct FStruct_Default_IRS EmptyIronsight = {
        "DistanceFromCamera_2_9E5130514245E7FAD98A7EBC19A6EECA": 0,
        "FOV_4_AF0F53C44D2340A6FF55039545DD7C78": 90
    };
    struct FStruct_MasterThrowable ThrowableSetup = {
        "TrajectoryPathSettings_60_F526978D4400BCFF87C87F980861EDA2": {
            "TraceObjectTypes_31_563105BA400665B14677099FB3D3F809": {
                ObjectTypeQuery1,
                ObjectTypeQuery2,
                ObjectTypeQuery3,
                ObjectTypeQuery4,
                ObjectTypeQuery5,
                ObjectTypeQuery6
            },
            "BeamColor_4_88451B72404D8E055B7746B62F58990E": FLinearColor(1, 0, 0, 1),
            "TargetColor_5_734BDD70407FBC27B3D116981E953A8F": FLinearColor(1, 0, 0, 1),
            "BeamEmissivePower_8_C7371FB44EC0AAAB243579AA0A118A55": 5,
            "TargetEmissivePower_10_95E512FC41283C47F456FFBC51D79266": 25,
            "BeamSize_13_4FB73A734BA435D71FE4408AA6D4D033": 2,
            "UseSphereForTarget_17_0FB267724800B946E6E602A978FF92B5": true,
            "UseEffectRadiusValueForTarget_24_C3EC6ACB4B99E876D9CD4CAC8CF24C8C": true,
            "CustomRadiusForTarget_23_DF48BE7F499B3B8013228586F126789B": 50
        },
        "ProjectileSettings_63_8F6BFED44CD1A445466E27A1388CEA22": {
            "CanPenetrate?_55_37D7284045DE187BDBC5F6B53A087D92": false,
            "MaxBouncePenetration_61_040F6FD84F5BAD9CE0B624964DF28346": 0,
            "Speed_65_C9904CC04329C9F0628BFBB157294B94": 50000,
            "Bounciness_44_D549293A47609C089F96ED846091DE5F": 0.5,
            "Friction_46_DD36A04F4AEFC402D0C467BFE3080FB7": 0.5,
            "GravityScale_34_93F3F1EC49D52CFA067D4A9B9F48EA63": 1,
            "UpVectorFactor_74_F33FFDD44EE8E6C6867D77A07C515B62": 0,
            "SecondsToExplode_71_D9A55BB2484F44C3426B48AB55FE6742": 0,
            "LifespanAfterExplode_84_E128D83D42D3E1B70FE3659560F83D56": 0,
            "SimulatePhysicsAfterStop_87_DDBC5FD04E35D6C3177A2D81A7843308": false,
            "RotationMovementComponent_81_F6E4CC304C1B84D2A38EC7A30CC4B4EC": {
                "UseRotationMovementComponent_1_C8AAC4074153A853281F9D8BBAAB658B": false,
                "RotationRate_9_DEE700734B66D92075A26386BDD3BE3C": FVector(0, 0, 0),
                "PivotOffset_8_236101A44827638A1FDCD080E25DEC96": FVector(0, 0, 0)
            },
            "ProjectileDamageSetup_68_FDEC18A44204C21CA10719BCB3668CAC": {
                "ApplyDamageOnEveryHit_23_2D274BD540055EA69BD72C847BD84C27": false,
                "IsPointDamage_20_B9B3E6864C90036D4AE856AF66FF6D35": false,
                "BaseDamage_4_5520D7F845CAF2F690735CA95077E773": 0,
                "MinimumDamage_6_8ECF15B64F544607BEED7C98B8FD3E00": 0,
                "BaseDamageMultiplier_32_D9A003F047A6F2601CABE886CC1FF68A": 1,
                "DamageMultiplierPerBone_29_A90203C34CD9821284C4819D3C310CE6": {},
                "InnerRadius_8_3C3976C1475FF558851315988572F26A": 150,
                "OuterRadius_10_5C0DD0ED412D57DE447AA3A7BD038719": 300,
                "DamageFalloffExponent_16_F67E579245E9710B2CCD7E82FBB56075": 0.5,
                "DamagePreventationChannel_19_069AB63D4A498308F4BB78AF94DAFB4A": ECollisionChannel::ECC_Visibility,
                "DamageTypeClass_15_F262DB544248CCCD8E9279AFD3C6CC01": nullptr
            },
            "ProjectileMesh_2_6C79889D4C98E830995D709905B1E337": nullptr,
            "ProjectileBeam_39_D9DFF7844E113EB33365B0AC639C9C41": {
                "UseNiagaraSystem_11_593FDBB34F7471BDC107F6AF8AD72E99": false,
                "NiagaraSystem_10_5D953182459F1698C9D994A9AA75B86E": nullptr,
                "ParticleSystem_9_6B66B87643745CA04F39089997B7AAB3": nullptr
            },
            "VisualEffects_28_F85D20284D225F01AAF7879A88325770": {},
            "HitSoundEffects_41_D349D948461F929380BA32AF3ED8E239": {},
            "BounceSoundEffects_56_3ECEBE3048F1AB3DC49848BF8CC8AA17": {},
            "ExplotionSoundEffects_57_CCC7F5C04A01297FB600E8BBD62C83D8": {},
            "PenetrationSetup_17_1E00B9AE4BB2652AFE644BA4001F4D52": {},
            "CalculatedLaunchVelocity_77_3B4EF41349098EC10B4ED7A8D3E44F1C": FVector(0, 0, 0)
        }
    };
    struct FStruct_MeleeWeapons MeleeWeaponInfo = {
        "AttackAnimations_19_DC5E4BE444781E262D8CFDB10B136B17": {},
        "DamageSettings_4_0EE351664842CD2D63DB91A43AFF2D12": {
            "BaseDamage_2_8E60DC79406FBF433F64A38666CA75F9": 0
        },
        "TraceCount_9_E0B63DFF43F2118B1C10ABB176535097": 0,
        "TraceStartSocket_12_61C109EC4044F564909D07807705B4A3": FName("None"),
        "TraceEndSocket_14_23FC4F8B4D97B475DAFF61A8A286103A": FName("None")
    };
    struct FStruct_AttachmentSettings AttachmentSettings = {
        "AttachmentType_2_A977AF204D9C53781718C5840F7C1134": Enum_AttachmentType::NewEnumerator0,
        "UsableItems-Socket_24_2E088D5049055D9CDC5FF0AF6B36395D": {},
        "ScopeAttachment_28_B27A8668413B707AB45A8BAE7F972DAA": {},
        "MagazineAttachment_8_C3C23C744D59D796CA04A8A0C0C1E275": {
            "MagSize_2_A5E6B67D4116A9AF249D3D96EF03099A": 30,
            "ReloadSpeedMultiplier_5_C33DC0474841A24E33B098A2B27BEF69": 1
        },
        "GripAttachment_11_41C77CE34430BCE50FB111B8D904D70A": {
            "RecoilMultiplierX_8_A5E6B67D4116A9AF249D3D96EF03099A": 1,
            "RecoilMultiplierY_7_C33DC0474841A24E33B098A2B27BEF69": 1
        },
        "BarrelAttachment_14_BF502F74476D5C624BD0C98E376CB6F3": {
            "RecoilMultiplierX_8_A5E6B67D4116A9AF249D3D96EF03099A": 1,
            "RecoilMultiplierY_7_C33DC0474841A24E33B098A2B27BEF69": 1,
            "SoundMultiplier_13_6699E3214927D5A0034B1BB3939ACFDB": 0,
            "VisualEffect_17_C2D513A2465E83898D5DDC848B7C9858": {
                "UseNiagaraSystem_11_593FDBB34F7471BDC107F6AF8AD72E99": false,
                "NiagaraSystem_10_5D953182459F1698C9D994A9AA75B86E": nullptr,
                "ParticleSystem_9_6B66B87643745CA04F39089997B7AAB3": nullptr
            }
        }
    };
     On_Attachment_Updated = ;
     On_Attachment_Resetted = ;
     On_Pawn_Rotation_Mode_Updated = ;
     On_Item_Equipped = ;
    double UseInSeconds = 3;
    struct FStruct_MasterSwaySettings HandSwaySettings = {
        "DefaultSway_31_5CAB56264211C6154505A3BB766D65F5": {
            "EnableTilting_1_A62EEAE14A5B9311C15349932139953A": true,
            "InterpolationSpeed_30_938B9B7E4E712DAD631DE4B5E3ECA9CE": 5,
            "ResetInterpolationSpeed_38_B52EF3164F9A85046560ED97CA73BBF2": 10,
            "MovementSensitivity_20_499D006947D8358739A879815A2E5E1C": 1,
            "JumpSensitivity_21_0C5DFB10487B9B06C4418D9E2AC69E83": 1,
            "RollMultiplier_35_AAFE47414DDEA147C11FD88B1C817A68": 5,
            "LookSensitivity_23_490941BC476C9E8C12DDC1A25C2BBAE5": FVector2D(1, 1),
            "MovementLimits_27_4BA3D10D454F77CFF1DD0F9DA5403084": FVector2D(0, 0),
            "LookLimits_14_8F21050646A4C46166C4A0AB21297A29": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            },
            "JumpLimits_19_24B9CA48477AB278261306ABC0287876": FVector2D(0, 0),
            "OverallLimit_31_AB23CF804A17FA52F382F690E8D62A4B": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            }
        },
        "SwayOnAim_29_AB23CF804A17FA52F382F690E8D62A4B": {
            "EnableTilting_1_A62EEAE14A5B9311C15349932139953A": true,
            "InterpolationSpeed_30_938B9B7E4E712DAD631DE4B5E3ECA9CE": 5,
            "ResetInterpolationSpeed_38_B52EF3164F9A85046560ED97CA73BBF2": 10,
            "MovementSensitivity_20_499D006947D8358739A879815A2E5E1C": 1,
            "JumpSensitivity_21_0C5DFB10487B9B06C4418D9E2AC69E83": 1,
            "RollMultiplier_35_AAFE47414DDEA147C11FD88B1C817A68": 5,
            "LookSensitivity_23_490941BC476C9E8C12DDC1A25C2BBAE5": FVector2D(1, 1),
            "MovementLimits_27_4BA3D10D454F77CFF1DD0F9DA5403084": FVector2D(0, 0),
            "LookLimits_14_8F21050646A4C46166C4A0AB21297A29": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            },
            "JumpLimits_19_24B9CA48477AB278261306ABC0287876": FVector2D(0, 0),
            "OverallLimit_31_AB23CF804A17FA52F382F690E8D62A4B": {
                "Left": 0,
                "Top": 0,
                "Right": 0,
                "Bottom": 0
            }
        }
    };
    struct FTransform WeaponCustomizationTransform = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform FPP_RightHand_Offset = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform FPP_RightHandAIM_Offset = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform FPP_Weapon_BlockUp = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform FPP_Weapon_BlockDown = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform TPP_Weapon_BlockUp = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform TPP_Weapon_BlockDown = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform TPP_RightHand_Offset = {
        "Rotation": FQuat(0, 0, 0, 1),
        "Translation": FVector(0, 0, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    bool bReplicates = true;
    Enum_BaseItemType ItemType;
    FName UniqueItemName;
    class USphereComponent* InteractionSphere;
    bool UsePawnMasterPose;
    bool UseDifferentMeshOnGround;
    class USkeletalMeshComponent* SkeletalMeshComponent;
    class UStaticMeshComponent* StaticMeshComponent;
    bool UseSkeletalMeshOnGround;
    bool HideInFirstPerson;
    bool HideOnBody;
    class USkeletalMesh* SkeletalMesh;
    class UStaticMesh* StaticMesh;
    class USkeletalMesh* SkeletalMeshGround;
    class UStaticMesh* StaticMeshGround;
    class UMaterialInstanceDynamic* PostProcessMaterialInstance;
    bool IsHighlighted?;
    bool IsStackable?;
    int MaximumAmountInStack;
    int MaximumAmountInInventory;
    bool ItemHiddenInGame;
    TArray<struct FStruct_AttachmentSlotInfo*>* CurrentAttachmentSlots;
    int ListPriority;
    class UTexture2D* InventoryIcon;
    Enum_BaseWeaponType WeaponType;
    TArray<struct FStruct_WeaponAnimations> WeaponAnimations;
    TArray<int> PreferedSlots;
    TArray<FName> AcceptableSocketsOnBody;
    FName SocketNameInHand;
    TSubclassOf<UWB_BaseReticle_C> ReticleClass;
    Enum_AmmuniitonType WeaponAmmunitionType;
    TArray<struct FStruct_AttachmentInfo*>* DefaultAttachments;
    Enum_WeaponFireMode FireMode;
    TArray<class UArrowComponent*>* MeleeTraceArrows;
    class USceneCaptureComponent2D* ScopeFrontSceneCapture;
    class USceneCaptureComponent2D* ScopeBackSceneCapture;
    TArray<class AActor*> Attachments;
    TArray<class UWB_WeaponCustomization_Button_C*>* AttachmentWidgets;
    class UTextureRenderTarget2D* ScopeFrontRenderTexture;
    class UTextureRenderTarget2D* ScopeBackRenderTexture;
    class UWidgetComponent* InteractionWidgetComponent;
    class UWB_InteractableItem_C* Interactable_Widget;
    class UProjectileMovementComponent* ProjectileMovementComponent;
    class UBoxComponent* CollisionBox;
    Enum_Equipment_Type EquipmentType;
    int HealthIncrease;
    int ArmorValue;
    int InventoryIncreaseSize;
    Enum_AmmuniitonType AmmunitionType;
    double HealthFromItem;
    double MaxHealthFromItem;
    double ArmorFromItem;
    double EnergyFromItem;
    class UAnimMontage* UsageAnimation;
    class AActor* AttachmentInUseBy;
    class AActor* UpdatedOwner;

};