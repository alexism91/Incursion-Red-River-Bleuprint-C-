class UW_GCPS_Map_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_Map.W_GCPS_Map_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_Map.W_GCPS_Map_C:ExecuteUbergraph_W_GCPS_Map'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("GCPS_UI_Ref"), FGuid(0xDED814C6, 0x4C6D0749, 0x9D581584, 0x10217D9F) }, 
        { FName("HoveredMarker"), FGuid(0x4CE9D42C, 0x4288EE36, 0x27CF758D, 0x12ED04BE) }, 
        { FName("Zoom"), FGuid(0xED61EFD7, 0x452D7C1B, 0x7AD8499A, 0x9918E5D6) }, 
        { FName("ZoomMax"), FGuid(0x4856A861, 0x45A1DCE3, 0x99D8D09C, 0x0306EEA2) }, 
        { FName("ZoomMin"), FGuid(0x1D24D882, 0x47A9ADF0, 0x00CBC195, 0xEB34534C) }, 
        { FName("ZoomStep"), FGuid(0x409DF670, 0x49D7C74C, 0x080EB7B2, 0x7A4F4DD8) }, 
        { FName("PingOffset"), FGuid(0x3711328F, 0x4B0D72D8, 0xF0B150B8, 0x2E1B8298) }, 
        { FName("Mouse Position"), FGuid(0xD9A2F534, 0x480610DC, 0x16A2EC88, 0x82D9C84F) }, 
        { FName("Markers"), FGuid(0xDD0FF0EA, 0x433F5943, 0x124FEF9B, 0x1129808F) }, 
        { FName("Dragging Map"), FGuid(0xB820F19C, 0x486B5077, 0x1B65409D, 0x176F0FD3) }, 
        { FName("MapInstance"), FGuid(0xD71EA656, 0x485535F1, 0xC91B2186, 0xC31CE232) }, 
        { FName("BaseOverlay"), FGuid(0xCA540BE1, 0xD30A36A5, 0xA0DB2D43, 0xEA909924) }, 
        { FName("CanvasPanel_0"), FGuid(0xFAA7234E, 0xE543387B, 0x958766A7, 0x79BA2A05) }, 
        { FName("FogOfWar"), FGuid(0x7263535B, 0x12BB3FFA, 0xADCBD907, 0xEEF2BBC5) }, 
        { FName("FrameBorder"), FGuid(0xD10450EE, 0xFBB23254, 0x87EF8C23, 0x6D51FAB5) }, 
        { FName("LinesContainer"), FGuid(0x576B7E10, 0x41AC3F0E, 0xAD9885C7, 0xA52F64AD) }, 
        { FName("Map"), FGuid(0x0E55361D, 0xC8393578, 0x8E0E8984, 0xCD3C004F) }, 
        { FName("MarkerOverlay-1"), FGuid(0x4FB7C7DC, 0x3D963A70, 0x8E6F41E8, 0xABFCC137) }, 
        { FName("MarkerOverlay-2"), FGuid(0xF6596966, 0x38433C17, 0xBA3D8414, 0x63CB861B) }, 
        { FName("MarkerOverlay-3"), FGuid(0x294953C3, 0x4F7A36E5, 0x4EF155AE, 0x28FEF45E) }, 
        { FName("MarkerOverlay-4"), FGuid(0xBC5A4872, 0xB37E3922, 0x82AFF8F5, 0xED9287A7) }, 
        { FName("ToolTipOverlay"), FGuid(0x631810BF, 0xBEDC39F7, 0xB175E237, 0x7CDEE706) }, 
        { FName("W_IRR_Background_GridAndBlur"), FGuid(0x3CECE8CD, 0x83BD3D5A, 0x90214A10, 0x6A912BBD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D Mouse Position = FVector2D(0, 0);
    struct FVector2D PingOffset = FVector2D(-5, -8);
    double ZoomStep = 0.1;
    double ZoomMin = 0.4;
    double ZoomMax = 3;
    double Zoom = 1;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur;
    class UOverlay* ToolTipOverlay;
    class UOverlay* MarkerOverlay-4;
    class UOverlay* MarkerOverlay-3;
    class UOverlay* MarkerOverlay-2;
    class UOverlay* MarkerOverlay-1;
    class UImage* Map;
    class UOverlay* LinesContainer;
    class UBorder* FrameBorder;
    class UImage* FogOfWar;
    class UCanvasPanel* CanvasPanel_0;
    class UOverlay* BaseOverlay;
    class UMaterialInstanceDynamic* MapInstance;
    bool Dragging Map;
    TArray<class UIRRMarkerWidget*>* Markers;
    class UIRRMarkerWidget* HoveredMarker;
    class UW_GCPS_UI_C* GCPS_UI_Ref;

};