class UW_Compass_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_Compass.W_Compass_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_Compass.W_Compass_C:Toggle_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/W_Compass.W_Compass_C:ExecuteUbergraph_W_Compass'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("AddNumericDirections"), FGuid(0xBF6E0EB1, 0x4F85A569, 0xE9FBC29E, 0x1BB41F81) }, 
        { FName("NumericDirectionMultiplier"), FGuid(0x692398E0, 0x457AFEF9, 0x1C1F7BA3, 0xBB3063A4) }, 
        { FName("DirectionsOnCompass"), FGuid(0xD79A065B, 0x44DEBDE8, 0x38E83997, 0x29A05062) }, 
        { FName("CompassMarkers"), FGuid(0x2E4DEB79, 0x4D59EA9D, 0xF4EE0A9B, 0x6D1854A2) }, 
        { FName("MaximumCompassTranslation"), FGuid(0x0B8993CD, 0x481C992D, 0xC76C04B7, 0xCE754BD9) }, 
        { FName("Directions"), FGuid(0xD95390E0, 0x4A54FB60, 0x17C4839B, 0xEE2F3FCF) }, 
        { FName("NumericDirections"), FGuid(0x87093D18, 0x4A056EC2, 0x92E1B7AB, 0xEB6BCE63) }, 
        { FName("Toggle"), FGuid(0xD545B7B5, 0xA8D03DB3, 0xA0683E3B, 0x5B42F155) }, 
        { FName("CompassMarkerOverlay"), FGuid(0x93FD4FD3, 0x15C8324B, 0xB2868133, 0xB2442A16) }, 
        { FName("Container"), FGuid(0xDD06EE25, 0x5ECD3D91, 0x9F0A70B1, 0x9335F5C8) }, 
        { FName("DirectionOverlay"), FGuid(0x1680A1F7, 0xFB5C329A, 0x8C0EEB60, 0x853FE2EE) }, 
        { FName("DynamicBackground"), FGuid(0x60C83533, 0x53813CF5, 0x83851257, 0xBF938B4A) }, 
        { FName("Triangle"), FGuid(0x87FE6876, 0x3C123951, 0x9471972C, 0x1743C469) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double MaximumCompassTranslation = 270;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UBorder* Triangle;
    class UBorder* DynamicBackground;
    class UOverlay* DirectionOverlay;
    class UBorder* Container;
    class UOverlay* CompassMarkerOverlay;
    class UWidgetAnimation* Toggle;
    TArray<struct FStruct_DirectionInfo> NumericDirections;
    TArray<class UWB_SingleDirection_C*>* Directions;
    TArray<class UWB_QuestMarker_C*>* CompassMarkers;
    TArray<struct FStruct_DirectionInfo> DirectionsOnCompass;
    int NumericDirectionMultiplier;
    bool AddNumericDirections;

};