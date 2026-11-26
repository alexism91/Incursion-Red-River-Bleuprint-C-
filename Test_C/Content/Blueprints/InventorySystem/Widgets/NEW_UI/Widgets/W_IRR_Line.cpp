class UW_IRR_Line_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_Line.W_IRR_Line_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_Line.W_IRR_Line_C:ExecuteUbergraph_W_IRR_Line'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("LineThickness"), FGuid(0x0DB7DC03, 0x41BDA9B0, 0x0DD9F987, 0xD99F3500) }, 
        { FName("LineColor"), FGuid(0x3C89FB6D, 0x4E831448, 0x58D86C98, 0xD079EB0B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSlateBrush LineColor = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::Both,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(2560, 1440),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_B.MI_IRR_Basic_B'",
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
    };
    double LineThickness = 1;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* SizeBox_0;
    class UBorder* Border_65;

};