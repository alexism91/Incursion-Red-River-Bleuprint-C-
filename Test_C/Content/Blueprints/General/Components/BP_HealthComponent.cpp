class UBP_HealthComponent_C : public UHealthComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/General/Components/BP_HealthComponent.BP_HealthComponent_C:ExecuteUbergraph_BP_HealthComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TMap<FName, enum> BodyParts = {
        { FName("head"), EIRRBodyPart::Head }, 
        { FName("neck_01"), EIRRBodyPart::Head }, 
        { FName("spine_02"), EIRRBodyPart::Stomach }, 
        { FName("spine_01"), EIRRBodyPart::Stomach }, 
        { FName("pelvis"), EIRRBodyPart::Stomach }, 
        { FName("upperarm_l"), EIRRBodyPart::Thorax }, 
        { FName("lowerarm_l"), EIRRBodyPart::Stomach }, 
        { FName("hand_l"), EIRRBodyPart::LeftArm }, 
        { FName("upperarm_r"), EIRRBodyPart::Thorax }, 
        { FName("lowerarm_r"), EIRRBodyPart::Stomach }, 
        { FName("hand_r"), EIRRBodyPart::RightArm }, 
        { FName("thigh_l"), EIRRBodyPart::LeftLeg }, 
        { FName("calf_l"), EIRRBodyPart::LeftLeg }, 
        { FName("foot_l"), EIRRBodyPart::LeftFoot }, 
        { FName("ball_l"), EIRRBodyPart::LeftFoot }, 
        { FName("thigh_r"), EIRRBodyPart::RightLeg }, 
        { FName("calf_r"), EIRRBodyPart::RightLeg }, 
        { FName("foot_r"), EIRRBodyPart::RightFoot }, 
        { FName("ball_r"), EIRRBodyPart::RightFoot }, 
        { FName("spine_03"), EIRRBodyPart::Thorax }, 
        { FName("spine_04"), EIRRBodyPart::Thorax }, 
        { FName("spine_05"), EIRRBodyPart::Thorax }, 
        { FName("neck_02"), EIRRBodyPart::Head }, 
        { FName("clavicle_l"), EIRRBodyPart::Thorax }, 
        { FName("clavicle_r"), EIRRBodyPart::Thorax }
    };
    TMap<enum, struct FBodyPartSetup> BodyPartsSetup = {
        { EIRRBodyPart::LeftLeg, {
            "DamageMultiplier": 0.45,
            "EquipmentSlots": FGameplayTagContainer({}),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Left_Lgt_01.AM__HitReact_Left_Lgt_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }, 
        { EIRRBodyPart::RightLeg, {
            "DamageMultiplier": 0.45,
            "EquipmentSlots": FGameplayTagContainer({}),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Right_Lgt_01.AM__HitReact_Right_Lgt_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }, 
        { EIRRBodyPart::LeftArm, {
            "DamageMultiplier": 0.75,
            "EquipmentSlots": FGameplayTagContainer({}),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Left_Med_01.AM__HitReact_Left_Med_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                },
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Left_Lgt_01.AM__HitReact_Left_Lgt_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }, 
        { EIRRBodyPart::RightArm, {
            "DamageMultiplier": 0.75,
            "EquipmentSlots": FGameplayTagContainer({}),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Right_Lgt_01.AM__HitReact_Right_Lgt_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                },
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Right_Med_01.AM__HitReact_Right_Med_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }, 
        { EIRRBodyPart::Stomach, {
            "DamageMultiplier": 1,
            "EquipmentSlots": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Inventory.Equipment Slots.Plate Carrier")),
                FGameplayTag::RequestGameplayTag(FName("Inventory.Equipment Slots.Rig"))
            }),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Front_Lgt_01.AM__HitReact_Front_Lgt_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                },
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Front_Lgt_02.AM__HitReact_Front_Lgt_02'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                },
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Front_Lgt_03.AM__HitReact_Front_Lgt_03'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }, 
        { EIRRBodyPart::Thorax, {
            "DamageMultiplier": 1.2,
            "EquipmentSlots": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Inventory.Equipment Slots.Plate Carrier")),
                FGameplayTag::RequestGameplayTag(FName("Inventory.Equipment Slots.Rig"))
            }),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Front_Lgt_01.AM__HitReact_Front_Lgt_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                },
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Front_Lgt_02.AM__HitReact_Front_Lgt_02'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                },
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Front_Lgt_03.AM__HitReact_Front_Lgt_03'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }, 
        { EIRRBodyPart::Head, {
            "DamageMultiplier": 3.5,
            "EquipmentSlots": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("Inventory.Equipment Slots.Helmet"))
            }),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Front_Med_01.AM__HitReact_Front_Med_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                },
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Front_Med_02.AM__HitReact_Front_Med_02'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }, 
        { EIRRBodyPart::RightFoot, {
            "DamageMultiplier": 0.2,
            "EquipmentSlots": FGameplayTagContainer({}),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Right_Lgt_01.AM__HitReact_Right_Lgt_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }, 
        { EIRRBodyPart::LeftFoot, {
            "DamageMultiplier": 0.2,
            "EquipmentSlots": FGameplayTagContainer({}),
            "HitMontages": {
                {
                    "TP_Animation": "AnimMontage'Test_C/Content/Animations/UE5/TP/Hit/AM__HitReact_Left_Lgt_01.AM__HitReact_Left_Lgt_01'",
                    "FP_Animation": nullptr,
                    "Weapon_Animation": nullptr
                }
            }
        } }
    };
    TMap<FName, float> DamageMultiplierByInstigatorTag = {
        { FName("AI"), 0.75 }, 
        { FName("Boss"), 1.25 }, 
        { FName("Player"), 1.25 }
    };

};