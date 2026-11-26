class UW_InGame_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_InGame.W_InGame_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_InGame.W_InGame_C:ExecuteUbergraph_W_InGame'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Content"), FGuid(0x9387E703, 0x2C623DC1, 0xA139E514, 0x24C7FA89) }, 
        { FName("W_AlphaWatermark"), FGuid(0x93B1FC38, 0x431034A7, 0xB44BCA9F, 0x63BDE4E9) }, 
        { FName("W_AttachmentWheel"), FGuid(0x179E51DB, 0xFF063C4B, 0xA59C30AC, 0xC62DFF9B) }, 
        { FName("W_Compass"), FGuid(0x63F405C7, 0x06C13C03, 0xA524E404, 0xB99958EE) }, 
        { FName("W_IRR_MissionBriefingOverlay"), FGuid(0x3C74E447, 0x4C336806, 0x27BA1C9F, 0x5DB7DFFC) }, 
        { FName("W_IRR_MissionBriefingSubtitles"), FGuid(0xF22F5164, 0x4BB68EC9, 0xC2DF0E91, 0xC3583DED) }, 
        { FName("W_IRR_RaidTimer"), FGuid(0xA0BCEAAF, 0xB7FB32E5, 0x8EFFA700, 0x0C5BB4EA) }, 
        { FName("W_StaminaAndHealthBars"), FGuid(0x77FF53FE, 0x54803CA2, 0x9CE0DA3C, 0x3D236A22) }, 
        { FName("W_WeaponUI"), FGuid(0xD670AC3E, 0xFF913ABE, 0x85E3C1D9, 0x8A7AA5BF) }, 
        { FName("WBP_Chatbox"), FGuid(0x3ADBE401, 0x64203853, 0xB4C45000, 0x77C6621D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum TickFrequency = EWidgetTickFrequency::Never;
    class UWBP_Chatbox_C* WBP_Chatbox;
    class UW_WeaponUI_C* W_WeaponUI;
    class UW_StaminaAndHealthBars_C* W_StaminaAndHealthBars;
    class UW_IRR_RaidTimer_C* W_IRR_RaidTimer;
    class UW_IRR_MissionBriefingSubtitles_C* W_IRR_MissionBriefingSubtitles;
    class UW_IRR_MissionBriefingOverlay_C* W_IRR_MissionBriefingOverlay;
    class UW_Compass_C* W_Compass;
    class UW_AttachmentWheel_C* W_AttachmentWheel;
    class UW_AlphaWatermark_C* W_AlphaWatermark;
    class UOverlay* Content;

};