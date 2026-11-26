class UW_GCPS_UI_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_UI.W_GCPS_UI_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_UI.W_GCPS_UI_C:FadeInOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_UI.W_GCPS_UI_C:ExecuteUbergraph_W_GCPS_UI'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("As BP GCPSComponent"), FGuid(0x7AEC66A0, 0x41B0D7F0, 0x25F9DF94, 0x3D9312B8) }, 
        { FName("Zoom"), FGuid(0x861B53F2, 0x4735AD54, 0xAFD7F3B9, 0xA04D2DA9) }, 
        { FName("Dimensions"), FGuid(0x2F2C2959, 0x4433125D, 0x6B542D9C, 0x2F62A1EB) }, 
        { FName("FadeInOut"), FGuid(0xF2B29D12, 0x7C953D15, 0xA09BBC17, 0xC443EE1C) }, 
        { FName("Fade"), FGuid(0x72193133, 0xD4BD3D42, 0xAC1738BB, 0xD9A4CBF7) }, 
        { FName("Image_58"), FGuid(0x33F03CC4, 0x4E9173BD, 0x9299D1A5, 0x52EB9C50) }, 
        { FName("Image_106"), FGuid(0xA37D8E98, 0xE62A328F, 0xB5777F11, 0xF31C38E8) }, 
        { FName("IMG_Cursor"), FGuid(0x87A25153, 0xD32D38A6, 0xBC4D7D44, 0xCA4C9271) }, 
        { FName("Mouse"), FGuid(0xEB8004C0, 0xCF763F04, 0xAFF9AD40, 0xC2FDB66D) }, 
        { FName("RootCanvas"), FGuid(0x8E48332B, 0x55F832A7, 0x9A050F26, 0xB9CE9CC3) }, 
        { FName("Switcher"), FGuid(0xF46B3DCF, 0x1CC73493, 0x92803F24, 0x2B6A80C6) }, 
        { FName("UtilityBar"), FGuid(0x98847DFF, 0x6C5F397A, 0x903A6E07, 0xB34D27DB) }, 
        { FName("W_GCPS_ExpandableMissionBox"), FGuid(0xC5E561F6, 0x4AC5291F, 0xCDD369A8, 0xF8BE8BD6) }, 
        { FName("W_GCPS_Map"), FGuid(0x015D0D72, 0xFE0B36C6, 0x83EC5CBB, 0xF85D2440) }, 
        { FName("W_GCPS_TopBar"), FGuid(0x9BFAC1A9, 0x716B3A87, 0x883DE224, 0x9D9F04AE) }, 
        { FName("W_IRR_Background"), FGuid(0x33576FBD, 0x4FB43975, 0x88380056, 0xDD264DBF) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Dimensions = 300000;
    double Zoom = 0.5;
    bool bIsFocusable = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_GCPS_TopBar_C* W_GCPS_TopBar;
    class UW_GCPS_Map_C* W_GCPS_Map;
    class UW_GCPS_ExpandableMissionBox_C* W_GCPS_ExpandableMissionBox;
    class UW_UtilityBar_C* UtilityBar;
    class UWidgetSwitcher* Switcher;
    class UCanvasPanel* RootCanvas;
    class UOverlay* IMG_Cursor;
    class UImage* Image_106;
    class UImage* Image_58;
    class UWidgetAnimation* FadeInOut;
    class UBP_GCPSComponent_C* As BP GCPSComponent;

};