class UW_IRR_HorizontalTabList_C : public UIRRTabListWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_HorizontalTabList.W_IRR_HorizontalTabList_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_HorizontalTabList.W_IRR_HorizontalTabList_C:ExecuteUbergraph_W_IRR_HorizontalTabList'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ContentPadding"), FGuid(0x20358C22, 0x42498FF8, 0xCBC81283, 0xBB04482B) }, 
        { FName("TabButtonPadding"), FGuid(0xC40C8F6A, 0x4E2BE97B, 0xE6C92987, 0x0BF21EEE) }, 
        { FName("RightNavRow"), FGuid(0x062ABAB3, 0x461BBFF1, 0x7860C593, 0xAADB2B35) }, 
        { FName("LeftNavRow"), FGuid(0x02880C5F, 0x4B807BA4, 0x3F825D95, 0x2E695F66) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle LeftNavRow = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/UICore/Data/DT_UI_InputActions.DT_UI_InputActions'",
        "RowName": FName("LeftNav")
    };
    struct FDataTableRowHandle RightNavRow = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/UICore/Data/DT_UI_InputActions.DT_UI_InputActions'",
        "RowName": FName("RightNav")
    };
    struct FMargin TabButtonPadding = {
        "Left": 0,
        "Top": 0,
        "Right": 0,
        "Bottom": 0
    };
    struct FMargin ContentPadding = {
        "Left": 0,
        "Top": 38,
        "Right": 0,
        "Bottom": 0
    };
    TArray<struct FIRRTabDescriptor> PreregisteredTabInfoArray = {
        {
            "TabType": EIRRButtonType::Text,
            "TabId": FName("1"),
            "TabText": FText("test", CultureInvariant),
            "TabTooltip": FText(""),
            "IconBrush": {
                "TintColor": {
                    "SpecifiedColor": FLinearColor(1, 1, 1, 1),
                    "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                },
                "DrawAs": ESlateBrushDrawType::Image,
                "Tiling": ESlateBrushTileType::NoTile,
                "Mirroring": ESlateBrushMirrorType::NoMirror,
                "ImageType": ESlateBrushImageType::NoImage,
                "ImageSize": FVector2D(32, 32),
                "Margin": {
                    "Left": 0,
                    "Top": 0,
                    "Right": 0,
                    "Bottom": 0
                },
                "ResourceObject": nullptr,
                "OutlineSettings": {
                    "CornerRadii": FVector4(0, 0, 0, 0),
                    "Color": {
                        "SpecifiedColor": FLinearColor(0, 0, 0, 0),
                        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
                    },
                    "Width": 0,
                    "RoundingType": ESlateBrushRoundingType::HalfHeightRadius,
                    "bUseBrushTransparency": false
                },
                "UVRegion": FBox2D(TIntVector2<float>(0, 0), TIntVector2<float>(0, 0), 0),
                "bIsDynamicallyLoaded": false,
                "ResourceName": FName("None")
            },
            "bEnabled": true,
            "TabButtonClass": "WidgetBlueprintGeneratedClass'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_BaseButton.W_IRR_BaseButton_C'",
            "TabContentClass": nullptr,
            "CreatedTabContentWidget": nullptr
        }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* RightNav;
    class UImage* LeftNav;
    class UHorizontalBox* ButtonPanel;
    class UWidget* PrevContent;

};