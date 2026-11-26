class UW_GCPS_Marker_General_C : public UIRRObjectiveMarkerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_Marker_General.W_GCPS_Marker_General_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "MarkerIconImage",
            "PropertyName": FName("OnMouseButtonDownEvent"),
            "FunctionName": FName("On_Icon_MouseButtonDown"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("On_Icon_MouseButtonDown"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        },
        {
            "ObjectName": "MarkerIconShadowBackdrop",
            "PropertyName": FName("OnMouseButtonDownEvent"),
            "FunctionName": FName("On_Icon_MouseButtonDown"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("On_Icon_MouseButtonDown"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_Marker_General.W_GCPS_Marker_General_C:Select_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/Minimap/W_GCPS_Marker_General.W_GCPS_Marker_General_C:ExecuteUbergraph_W_GCPS_Marker_General'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("LockedContentColor"), FGuid(0x4408E383, 0x48371C7E, 0xCA8D70BB, 0x10ABF7FE) }, 
        { FName("CompletedContentColor"), FGuid(0xC1F6C4E8, 0x40EFB0C6, 0x56642B80, 0xB25E70B8) }, 
        { FName("ActiveContentColor"), FGuid(0x8D02A31E, 0x4B945EED, 0x65827192, 0x7B2E1564) }, 
        { FName("HasTooltip?"), FGuid(0xE952939E, 0x4BAE1D5A, 0xA3309697, 0x13DDB9C1) }, 
        { FName("ToolTipRef"), FGuid(0xB23F4804, 0x44BBCC74, 0xDA89B88B, 0x95C553DB) }, 
        { FName("Select"), FGuid(0x0A0A2394, 0x463B4B5D, 0x5F25CF94, 0x25ADB2D6) }, 
        { FName("Left"), FGuid(0xA763DF02, 0x4B8F05A5, 0x858AF0A2, 0xD1282725) }, 
        { FName("Left_1"), FGuid(0xE27D7482, 0x4F43BCDD, 0xD6230D95, 0x225B1D84) }, 
        { FName("Left_2"), FGuid(0x172973EC, 0x42F33741, 0x2334B199, 0x32891593) }, 
        { FName("Left_3"), FGuid(0xBD846AE6, 0x4991472B, 0x91BF219A, 0x938CFDDC) }, 
        { FName("MarkerBackgroundBorder"), FGuid(0xD7A62CA8, 0x4D233DBD, 0x6E83F5AF, 0x1DF4EDD2) }, 
        { FName("MarkerBorder"), FGuid(0x51C83331, 0x4E50168F, 0x492BA184, 0xD8CE8E59) }, 
        { FName("MarkerHighlightedOverlay"), FGuid(0xE96A4037, 0x4CD61CB2, 0x56D5F18C, 0x4B89B6D3) }, 
        { FName("MarkerIconBorder"), FGuid(0x94A0854F, 0x4A72775B, 0xAEC35494, 0x26681CCC) }, 
        { FName("MarkerSelectedOverlay"), FGuid(0x6D54189D, 0x4ABF3A94, 0x9EA7AD8E, 0x79616283) }, 
        { FName("Right"), FGuid(0xE62B5096, 0x4F1E29A7, 0x0C479093, 0x76A3E110) }, 
        { FName("Right_1"), FGuid(0xB7AAD763, 0x44C6BF99, 0x0A1DEFB1, 0xEE418ED6) }, 
        { FName("Right_2"), FGuid(0xE1AFA9A7, 0x4E120497, 0x1BE0F7BA, 0x5D3B4234) }, 
        { FName("Right_3"), FGuid(0x17806C1B, 0x428A4197, 0x16D8E4A9, 0xE55AA5CA) }, 
        { FName("Top"), FGuid(0xA51382A1, 0x4AA2689D, 0xE6D80FA5, 0x20705BCA) }, 
        { FName("Top_1"), FGuid(0x0B700B2E, 0x43FD351C, 0xC211DA91, 0x758A9260) }, 
        { FName("Top_2"), FGuid(0x498C4028, 0x45B0E3B5, 0x5EC031B2, 0xC0F81944) }, 
        { FName("Top_3"), FGuid(0x94EA457B, 0x4F3F9F62, 0xDFF3C790, 0xA7779C8E) }, 
        { FName("Top_4"), FGuid(0x07693BDC, 0x4FDA3F11, 0x0B87B2A3, 0xFC1D6EF7) }, 
        { FName("Top_5"), FGuid(0xA6704F9B, 0x4193F817, 0x3D53FBB9, 0xE57539A6) }, 
        { FName("Top_6"), FGuid(0x21128D98, 0x4FCF5831, 0x21021C8F, 0xF09C44D6) }, 
        { FName("Top_7"), FGuid(0x3B5E4FFC, 0x4BFB904B, 0xA6CBCA8E, 0x297A2EC7) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor ActiveContentColor = FLinearColor(0,947307, 0,376262, 0,003347, 1);
    struct FLinearColor CompletedContentColor = FLinearColor(0,084039, 0,302083, 0,130389, 1);
    struct FLinearColor LockedContentColor = FLinearColor(1, 1, 1, 0,6);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* Top_7;
    class USizeBox* Top_6;
    class USizeBox* Top_5;
    class USizeBox* Top_4;
    class USizeBox* Top_3;
    class USizeBox* Top_2;
    class USizeBox* Top_1;
    class USizeBox* Top;
    class USizeBox* Right_3;
    class USizeBox* Right_2;
    class USizeBox* Right_1;
    class USizeBox* Right;
    class UOverlay* MarkerSelectedOverlay;
    class UBorder* MarkerIconBorder;
    class UOverlay* MarkerHighlightedOverlay;
    class UBorder* MarkerBorder;
    class UBorder* MarkerBackgroundBorder;
    class USizeBox* Left_3;
    class USizeBox* Left_2;
    class USizeBox* Left_1;
    class USizeBox* Left;
    class UWidgetAnimation* Select;
    class UUserWidget* ToolTipRef;
    bool HasTooltip?;

};