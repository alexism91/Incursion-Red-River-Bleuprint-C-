class UW_GCPS_Marker_LevelZone_C : public UIRRMarkerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_Marker_LevelZone.W_GCPS_Marker_LevelZone_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_Marker_LevelZone.W_GCPS_Marker_LevelZone_C:ExecuteUbergraph_W_GCPS_Marker_LevelZone'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("HasTooltip?"), FGuid(0xF9A94ED8, 0x46B327C3, 0x05FF4C91, 0x75F8E05D) }, 
        { FName("ToolTipRef"), FGuid(0xB1C33DEA, 0x4852BE3C, 0xFFF0D4B3, 0xD25AFB65) }, 
        { FName("IRRTextBlock_63"), FGuid(0x110E05EF, 0x4F9885E8, 0xDFD100B1, 0x9A5C0BDA) }, 
        { FName("MarkerContainer"), FGuid(0xC16DD54E, 0xF12C34F1, 0xAF6141C2, 0x4C148102) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* MarkerContainer;
    class UIRRTextBlock* IRRTextBlock_63;
    class UUserWidget* ToolTipRef;
    bool HasTooltip?;

};