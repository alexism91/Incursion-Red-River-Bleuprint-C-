class UWB_CompassAndMarkers_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_CompassAndMarkers.WB_CompassAndMarkers_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_CompassAndMarkers.WB_CompassAndMarkers_C:Toggle_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_CompassAndMarkers.WB_CompassAndMarkers_C:SpecialAreaToggle_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/WB_CompassAndMarkers.WB_CompassAndMarkers_C:ExecuteUbergraph_WB_CompassAndMarkers'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NumericDirectionMultiplier"), FGuid(0xBFE9F209, 0x47BBA2BC, 0xFD1203A2, 0xD766FF8C) }, 
        { FName("AddNumericDirections"), FGuid(0x033F541C, 0x4D8D53A6, 0x26F27687, 0xEE7C127F) }, 
        { FName("NumericDirections"), FGuid(0xC7269973, 0x4B0DFA1C, 0x5CF73E94, 0x9EAF6857) }, 
        { FName("DirectionsOnCompass"), FGuid(0x9711BF4C, 0x4B1AC9F0, 0xE25FC981, 0x2DBF5C4E) }, 
        { FName("SpecialAreaVisible"), FGuid(0xA0F6B88A, 0x487E92C1, 0xF7B84683, 0x7C28CE51) }, 
        { FName("CompassActive"), FGuid(0xB007D307, 0x43FBABB4, 0x63EA4CA8, 0xCA0809F5) }, 
        { FName("CompassMarkers"), FGuid(0x91BD9CCD, 0x40211FD2, 0xCB6C62BE, 0x90F443DA) }, 
        { FName("CompassVisible"), FGuid(0xB156F736, 0x419EB034, 0xCD9B7683, 0x96B1DCFE) }, 
        { FName("MaximumCompassTranslation"), FGuid(0x34D8A70E, 0x436F5B5E, 0x3637A3B6, 0xDB7B3305) }, 
        { FName("Directions"), FGuid(0x6B7CAD17, 0x45B5F9F2, 0x976379A0, 0x6F48533B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double MaximumCompassTranslation = 270;
    bool CompassVisible = true;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UBorder* Triangle;
    class UTextBlock* SpecialAreaName;
    class UBorder* SpecialAreaBG;
    class UBorder* DynamicBackground;
    class UOverlay* DirectionOverlay;
    class UBorder* Container;
    class UOverlay* CompassMarkerOverlay;
    class UBorder* Compass;
    class UBorder* Background2;
    class UBorder* Background;
    class UWidgetAnimation* Toggle;
    class UWidgetAnimation* SpecialAreaToggle;
    TArray<class UWB_SingleDirection_C*>* Directions;
    TArray<class UWB_QuestMarker_C*>* CompassMarkers;
    bool CompassActive;
    bool SpecialAreaVisible;

};