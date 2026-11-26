class UBP_HitComponent_C : public UHitComponent
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Framework/Components/BP_HitComponent.BP_HitComponent_C:ExecuteUbergraph_BP_HitComponent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TMap<enum, struct FQUA_AnimArray> MontagesPerBodyPart = {
        { EQUA_HitSection::RightLeg, {
            "Animations": {
                "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_HitReactionLegRight_01_UE5.AM_HitReactionLegRight_01_UE5'"
            }
        } }, 
        { EQUA_HitSection::LeftLeg, {
            "Animations": {
                "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_HitReactionLegLeft_01_UE5.AM_HitReactionLegLeft_01_UE5'"
            }
        } }, 
        { EQUA_HitSection::RightArm, {
            "Animations": {
                "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_HitReactionHandRight_01_UE5.AM_HitReactionHandRight_01_UE5'"
            }
        } }, 
        { EQUA_HitSection::LeftArm, {
            "Animations": {
                "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_HitReactionHandLeft_01_UE5.AM_HitReactionHandLeft_01_UE5'"
            }
        } }, 
        { EQUA_HitSection::UpperBody, {
            "Animations": {
                "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_HitReactionStrongBodyFrontRightUnarmed_UE5.AM_HitReactionStrongBodyFrontRightUnarmed_UE5'",
                "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_HitReactionStrongBodyFrontLeftUnarmed_UE5.AM_HitReactionStrongBodyFrontLeftUnarmed_UE5'"
            }
        } }, 
        { EQUA_HitSection::Head, {
            "Animations": {
                "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_HitReactionStrongBodyFrontLeft_UE5.AM_HitReactionStrongBodyFrontLeft_UE5'",
                "AnimMontage'Test_C/Content/Animations/UE5/TP/AM_HitReactionStrongBodyFrontRight_UE5.AM_HitReactionStrongBodyFrontRight_UE5'"
            }
        } }
    };
    TMap<enum, struct FQUA_NameArray> BonesPerBodyPart = {
        { EQUA_HitSection::RightLeg, {
            "Animations": {
                FName("thigh_r"),
                FName("calf_r"),
                FName("foot_r")
            }
        } }, 
        { EQUA_HitSection::LeftLeg, {
            "Animations": {
                FName("thigh_l"),
                FName("calf_l"),
                FName("foot_l")
            }
        } }, 
        { EQUA_HitSection::RightArm, {
            "Animations": {
                FName("clavicle_r"),
                FName("upperarm_r"),
                FName("lowerarm_r"),
                FName("hand_r")
            }
        } }, 
        { EQUA_HitSection::LeftArm, {
            "Animations": {
                FName("clavicle_l"),
                FName("upperarm_l"),
                FName("lowerarm_l"),
                FName("hand_l")
            }
        } }, 
        { EQUA_HitSection::UpperBody, {
            "Animations": {
                FName("spine_01"),
                FName("spine_02"),
                FName("spine_03"),
                FName("pelvis")
            }
        } }, 
        { EQUA_HitSection::Head, {
            "Animations": {
                FName("neck_01"),
                FName("head")
            }
        } }
    };
    struct FActorComponentTickFunction PrimaryComponentTick = {
        "bStartWithTickEnabled": false
    };

};