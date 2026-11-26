class UWB_Particle_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_Particle.WB_Particle_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_Particle.WB_Particle_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_Particle.WB_Particle_C:ExecuteUbergraph_WB_Particle'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("RandomAngle"), FGuid(0x52D9D0CD, 0x4F7BEA74, 0x8E881D8F, 0x5E6A1EC5) }, 
        { FName("UseParticleRotation"), FGuid(0x73056766, 0x44A44C5D, 0x6DB8A7AC, 0x9F9FBEDA) }, 
        { FName("ParticleSpread"), FGuid(0xB39B4D88, 0x4B5178AE, 0x418CD092, 0xC14A41BA) }, 
        { FName("TriggerActive"), FGuid(0x87A1F4E3, 0x4F34AC02, 0xFA7436BE, 0x4572DDF4) }, 
        { FName("RandomPlaybackspeed"), FGuid(0xA7F0ABE2, 0x45046148, 0x209545A0, 0xCE7446C9) }, 
        { FName("IsDesignTime"), FGuid(0x7A92C77F, 0x43257687, 0xB1EF3196, 0xF5157FA5) }, 
        { FName("TriggerMethod"), FGuid(0x2790DA96, 0x49C7EBF9, 0x83460D93, 0x26703919) }, 
        { FName("Size"), FGuid(0x0FF58EC3, 0x499B3735, 0x64B7ECA4, 0xBD6E6D08) }, 
        { FName("Angle"), FGuid(0xFB993154, 0x40B307F0, 0x55D67684, 0x3FB48ECC) }, 
        { FName("Shear"), FGuid(0x81F99866, 0x4F21E31D, 0x10950F97, 0x7557D38B) }, 
        { FName("Translation"), FGuid(0xAC899A09, 0x4F068CEE, 0x9502088C, 0xD653F6BA) }, 
        { FName("Scale"), FGuid(0xA3ADD73A, 0x4AD32444, 0xF3672CAA, 0x572D92BF) }, 
        { FName("RandomTranslation"), FGuid(0x563D65A0, 0x4A49D245, 0xC8978CA7, 0x26B5A331) }, 
        { FName("Parent"), FGuid(0x1CA5061E, 0x41282544, 0xFE334DA2, 0x628DDBBF) }, 
        { FName("RandomScale"), FGuid(0x1C29A657, 0x47F2655E, 0x95521C94, 0x98C564C1) }, 
        { FName("Value"), FGuid(0x3E0BE81A, 0x46BB26F3, 0xF0D58FB4, 0x53F9C582) }, 
        { FName("bCanTrigger"), FGuid(0x01A265DA, 0x4845F9D3, 0xBD1F438A, 0x32E7EEBC) }, 
        { FName("PlaybackSpeed"), FGuid(0x9DC75463, 0x4B55AB5B, 0x9FEB598E, 0xE3A8F40D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D RandomTranslation = FVector2D(0, 0);
    struct FVector2D Scale = FVector2D(0, 0);
    struct FVector2D Translation = FVector2D(0, 0);
    struct FVector2D Shear = FVector2D(0, 0);
    struct FVector2D Size = FVector2D(0, 0);
    bool bHasScriptImplementedPaint = false;
    bool bIsVolatile = true;
    class UImage* ParticleImage;
    class UOverlay* OV_ParticleFX;
    class UBorder* B_Particle;
    class UBorder* B_Color;
    class UWidgetAnimation* Fade;
    double PlaybackSpeed;
    bool bCanTrigger;
    double Value;
    double RandomScale;
    class UWB_Effect_C* Parent;
    double Angle;
    ETriggerMethod TriggerMethod;
    bool IsDesignTime;
    double RandomPlaybackspeed;
    bool TriggerActive;
    double ParticleSpread;
    bool UseParticleRotation;
    double RandomAngle;

};