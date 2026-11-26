class USGE_Fractured_Debug_C : public USGE_Fractured_C
{
public:
    float FractureChance = 100;
    TArray<enum> FractureBodyParts = {
        RightArm,
        LeftArm,
        RightLeg,
        LeftLeg,
        RightFoot,
        LeftFoot,
        Head,
        Thorax,
        Stomach
    };
    float FractureDamageThreshold = 0;
};