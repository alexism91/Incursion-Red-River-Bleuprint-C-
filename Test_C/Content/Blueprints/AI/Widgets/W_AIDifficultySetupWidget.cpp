class UW_AIDifficultySetupWidget_C : public UIRRAIDifficultySetupWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/AI/Widgets/W_AIDifficultySetupWidget.W_AIDifficultySetupWidget_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("StopLabel_Conscript"), FGuid(0x2F96CFF1, 0x4ED200C2, 0xF5A1529D, 0x6F3C6B3D) }, 
        { FName("StopLabel_Elite"), FGuid(0x5B767D56, 0x4C2F87A5, 0xA78FB6B3, 0x2D0D6368) }, 
        { FName("StopLabel_Regular"), FGuid(0xBBE470C0, 0x4542874F, 0x34C1EBB8, 0x27D55C7D) }, 
        { FName("StopLabel_Veteran"), FGuid(0x8B29C3CA, 0x498FDB05, 0x8E7402B0, 0xC632AABC) }, 
        { FName("StopMarker_0"), FGuid(0xD46EAE85, 0x4E8DC182, 0x4C160099, 0xA1CA9EA7) }, 
        { FName("StopMarker_1"), FGuid(0x926A3F8D, 0x46DA72CC, 0x145133AB, 0x57A0B8BC) }, 
        { FName("StopMarker_2"), FGuid(0xE453DBC8, 0x40783956, 0xE32F3589, 0xF70AADA7) }, 
        { FName("StopMarker_3"), FGuid(0x7E8B80E6, 0x4FEC0E9F, 0xAD1F78B3, 0xDB5CD2F1) }, 
        { FName("TrackLine"), FGuid(0x52DD04DE, 0x42484B9D, 0x2C1DE894, 0x54868F0D) }
    };
    TArray<struct FIRRAIDifficultyStop> Stops = {
        {
            "VariantId": FName("Easy"),
            "DisplayName": FText("Recruit", Immutable),
            "Description": FText("Poorly trained troops. They are slow to spot you, lose you at range and miss often while they find their aim. Flashlights and lasers won't give you away. They also never heard of throwing grenades luckily.")
        },
        {
            "VariantId": FName("Normal"),
            "DisplayName": FText("Regular", Immutable),
            "Description": FText("A decent challenge. Enemies react quickly, share contacts and punish mistakes, but give you a moment to respond.")
        },
        {
            "VariantId": FName("Hard"),
            "DisplayName": FText("Veteran", Immutable),
            "Description": FText("Seasoned fighters. They see further, react faster and shoot straighter. Crossing open ground under their watch might not be the best idea.")
        },
        {
            "VariantId": FName("Extreme"),
            "DisplayName": FText("Elite", Immutable),
            "Description": FText("The best they have. They spot you almost instantly, pass contacts across a wide area and aim for the <Strong>head</>. Every mistake counts.", Immutable)
        }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* TrackLine;
    class UImage* StopMarker_3;
    class UImage* StopMarker_2;
    class UImage* StopMarker_1;
    class UImage* StopMarker_0;
    class UW_IRR_TabButton_Small_C* StopLabel_Veteran;
    class UW_IRR_TabButton_Small_C* StopLabel_Regular;
    class UW_IRR_TabButton_Small_C* StopLabel_Elite;
    class UW_IRR_TabButton_Small_C* StopLabel_Conscript;
};