class UW_IRR_Background_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Background/W_IRR_Background.W_IRR_Background_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Background/W_IRR_Background.W_IRR_Background_C:ExecuteUbergraph_W_IRR_Background'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("BlurStrenght"), FGuid(0xBE923F3C, 0x407A4B3A, 0x815765A1, 0xF91D2192) }, 
        { FName("BorderBrush"), FGuid(0x4072980F, 0x4783A7BD, 0x6477A095, 0x05E01A08) }, 
        { FName("SecondaryBackgroundBrush"), FGuid(0x34FFF2C6, 0x493B4F6E, 0xA19A2E8C, 0xE2DB606F) }, 
        { FName("PrimaryBackgroundBrush"), FGuid(0x503DBD32, 0x40F5CDC6, 0xCA1EC1A4, 0x9F44F40C) }, 
        { FName("BackgroundBlur_1"), FGuid(0x4E51E226, 0x257537D9, 0xB940AB0A, 0x15AAF767) }, 
        { FName("Border"), FGuid(0xF3E40D29, 0x7707352D, 0xB2F7E58E, 0x2DA4CDE0) }, 
        { FName("Border_3"), FGuid(0x153DBD15, 0xB55F339F, 0xB7AF0BCF, 0x4D2ACE68) }, 
        { FName("Border_4"), FGuid(0xD96A2580, 0x7D2933C8, 0x86925536, 0xE72D8948) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSlateBrush PrimaryBackgroundBrush = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::Both,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(1219, 616),
        "Margin": {
            "Left": 0,
            "Top": 0,
            "Right": 0,
            "Bottom": 0
        },
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Background/T_IRR_TopographicBackground.T_IRR_TopographicBackground'",
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
    struct FSlateBrush SecondaryBackgroundBrush = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(0,002, 0,0035, 0,002, 0,6),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Image,
        "Tiling": ESlateBrushTileType::Both,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(1920, 1080),
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
    };
    struct FSlateBrush BorderBrush = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Box,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(146, 146),
        "Margin": {
            "Left": 0.1,
            "Top": 0.1,
            "Right": 0.1,
            "Bottom": 0.1
        },
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Border/T_IRR_Universal_Border_Gradient.T_IRR_Universal_Border_Gradient'",
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
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* Border_4;
    class UBorder* Border_3;
    class UBorder* Border;
    class UBackgroundBlur* BackgroundBlur_1;
    float BlurStrenght;

};