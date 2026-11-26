class UWB_QuestMarker_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestMarker.WB_QuestMarker_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestMarker.WB_QuestMarker_C:Toggle_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestMarker.WB_QuestMarker_C:ExecuteUbergraph_WB_QuestMarker'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Screen Marker Radius Percentage"), FGuid(0x5294E4A9, 0x4A8030C5, 0x4649418C, 0xE9C1EC61) }, 
        { FName("Screen Marker Margin"), FGuid(0x3C51C072, 0x463DE7DA, 0xD61CAEA2, 0xE4DC8B62) }, 
        { FName("Units to Meters"), FGuid(0xCB4118E1, 0x40268F41, 0x56ADEB84, 0x09BEB90B) }, 
        { FName("NewVar_0"), FGuid(0xDBA7B195, 0x4AC8E234, 0xBE0C978B, 0x5E0FF2C1) }, 
        { FName("CamLocDelta"), FGuid(0x09358757, 0x4607437B, 0x40AE819F, 0x63997C27) }, 
        { FName("LastCamLoc"), FGuid(0xEA81ABF6, 0x4D73A0CD, 0x6CCD57A2, 0x87BB74F3) }, 
        { FName("VisibleByDistance"), FGuid(0xCC36F411, 0x49D64349, 0x234228A9, 0x103CF963) }, 
        { FName("QuestManager"), FGuid(0x58A402E9, 0x45661A00, 0xEBDBEF9C, 0xBCB99FAF) }, 
        { FName("ControlledPawn"), FGuid(0xE0EF2865, 0x4D124B55, 0x6A1AD88B, 0xC18CB292) }, 
        { FName("OwningController"), FGuid(0x7D607155, 0x403817F9, 0xAA2AC08E, 0xEAA900D9) }, 
        { FName("MarkerVisible"), FGuid(0xF2F980A1, 0x4BEA210D, 0x1068E5B4, 0xD279F876) }, 
        { FName("IndicatorVisible"), FGuid(0x7EF7B682, 0x4D2532C9, 0x2B0FBDAA, 0x30ADE69E) }, 
        { FName("TargetName"), FGuid(0x28F4BD75, 0x46E47B34, 0x78CF0F83, 0x22E3A7D4) }, 
        { FName("MarkerInfo"), FGuid(0xAE2616E2, 0x40CB8466, 0x37616792, 0x77E79F0C) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_MarkerInfo MarkerInfo = {
        "DisplayOnScreen_40_774587234CB5E64AA89025A8E8C5A022": true,
        "DİsplayOnCompass_44_987AF086434C38D2A2C65AABB129CACB": false,
        "DisplayMarker_11_AF76AF2F495208D9A3B093B51EAE7897": true,
        "KeepOnScreenEdge_49_80DA92B34B8B5F91B36856AE01A1B7E9": true,
        "KeepOnCompassEdge_48_A0E0359F4CBDC4430132FA90B36B46D4": false,
        "TakeLocationFromMarkerTarget_57_B1BC1C814784AECB91CE9497C554722F": true,
        "MarkerIcon_52_EB8355B34A9973EBF1F03AB7FEC0BCCC": {
            "IconAsMaterial_2_4A474DC84D26775F86CEE8BBA44AC442": nullptr,
            "IconAsTexture_5_4C9E12714B1E3CB2A29F1187CF338840": nullptr,
            "TextureColor_10_ABB06DCA4C9B4F38D32192B75EA17872": FLinearColor(1, 1, 1, 1)
        },
        "DisplayBetweenDistance_42_B769215147482EF4563981A2F8CEA47C": FVector2D(0, 0),
        "NearestLocation_21_B62E0327454CF4A7F84E43978D846C82": FVector(0, 0, 0),
        "Offset_31_A14E68154780FB766F7556A37F1C96E9": FVector(0, 0, 0),
        "MarkerTarget_5_F726BDFA43BCA98F29680583A8C1D47F": nullptr
    };
    bool MarkerVisible = true;
    bool VisibleByDistance = true;
    struct FVector LastCamLoc = FVector(0, 0, 0);
    struct FVector CamLocDelta = FVector(0, 0, 0);
    struct FVector2D NewVar_0 = FVector2D(0, 0);
    double Units to Meters = 150;
    double Screen Marker Margin = 200;
    double Screen Marker Radius Percentage = 0.6;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* IconSize;
    class UImage* Icon;
    class UImage* Fade;
    class UIRRTextBlock* Distance;
    class UBorder* Container;
    class UWidgetAnimation* Toggle;
    FName TargetName;
    bool IndicatorVisible;
    class APlayerController* OwningController;
    class APawn* ControlledPawn;
    class UManager_Quest_C* QuestManager;

};