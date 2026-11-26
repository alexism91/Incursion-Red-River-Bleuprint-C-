class UWB_Reticle_SniperRifle_C : public UWB_BaseReticle_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/Reticle/WB_Reticle_SniperRifle.WB_Reticle_SniperRifle_C:WidgetTree'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ReticleBlocked"), FGuid(0x638AFD4D, 0x420AE503, 0x0B2605AD, 0x3A22BDD5) }, 
        { FName("ReticleVisible"), FGuid(0xDF6D6B2E, 0x4554F2BF, 0x61FB4AA6, 0x355761FD) }, 
        { FName("ColorInterpSpeed"), FGuid(0xD5A4400A, 0x46CF1E8B, 0x93F83A9C, 0x54BE409A) }, 
        { FName("ColorTimer"), FGuid(0x03E0ACB6, 0x4DA8C5D9, 0xAE1C2A81, 0xEF92BC2E) }, 
        { FName("TargetColor"), FGuid(0xF95DE033, 0x44AB507D, 0x7B974BB8, 0x2BD6CA0B) }, 
        { FName("DefaultColor"), FGuid(0x0BEBB793, 0x4B5A1331, 0x633DDFB6, 0xE7AA99BA) }, 
        { FName("WidgetIsReady"), FGuid(0x0E6BF18E, 0x42BF26C5, 0x15571280, 0x1226B029) }, 
        { FName("LastRecoilAdded"), FGuid(0x198BA9EE, 0x49CA6ACE, 0x0E4C8EA0, 0xE4C0CA24) }, 
        { FName("TargetRecoil"), FGuid(0xEE492415, 0x4DBE1A26, 0x5A439592, 0xE35152F5) }, 
        { FName("CurrentRecoil"), FGuid(0xF78952D1, 0x46CDB564, 0x149C9F9C, 0x907024A3) }, 
        { FName("Reticle_CurrentSpread"), FGuid(0xADC1EB42, 0x4A11631F, 0x5A388EAC, 0xEB437679) }, 
        { FName("Reticle_MaxSpread"), FGuid(0xF57738C9, 0x4D54DAE4, 0xB05D019C, 0xFBEC036A) }, 
        { FName("Reticle_MinSpread"), FGuid(0x19D086BE, 0x466A3D13, 0x1E373FAD, 0xCCFB3232) }, 
        { FName("IsStatic"), FGuid(0xE23BE918, 0x4F114938, 0xA7B936AD, 0x41962019) }, 
        { FName("EmptyContent"), FGuid(0x75E4A120, 0x4395E3E6, 0xD2F89795, 0x8C8150F0) }, 
        { FName("ReticleUniqueName"), FGuid(0xC0126985, 0x4296467A, 0x6C435AA4, 0x34FDB353) }, 
        { FName("AvailableReticles"), FGuid(0xFFF3CFA5, 0x4D65224E, 0x780DF095, 0xBAA617C1) }, 
        { FName("CrosshairPool"), FGuid(0x29253BAC, 0x425081E6, 0x637EC584, 0xC7820B07) }
    };
    TArray<class UWidgetBlueprintGeneratedClass*> CrosshairPool = {
        "WidgetBlueprintGeneratedClass'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/Reticle/WB_Reticle_SniperRifle.WB_Reticle_SniperRifle_C'"
    };
    bool bHasScriptImplementedTick = false;
    class UImage* RightImage;
    class USizeBox* Right;
    class UImage* LeftImage;
    class USizeBox* Left;
    class UImage* CenterImage;

};