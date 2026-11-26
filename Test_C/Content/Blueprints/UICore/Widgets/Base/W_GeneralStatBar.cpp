class UW_GeneralStatBar_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_GeneralStatBar.W_GeneralStatBar_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_GeneralStatBar.W_GeneralStatBar_C:ExecuteUbergraph_W_GeneralStatBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Max Value"), FGuid(0x487C0D7F, 0x41501977, 0x949AE3A9, 0x0CE75A54) }, 
        { FName("Base Value"), FGuid(0x8E464657, 0x41C866FD, 0x9242879A, 0xCD58D533) }, 
        { FName("Current Value"), FGuid(0x1C97F45B, 0x4B91307D, 0xC2EC1FBD, 0x50F4AA51) }, 
        { FName("BarBorderPadding"), FGuid(0xBD43FA04, 0x48881437, 0x300EBD83, 0x5603E67D) }, 
        { FName("BarFillType"), FGuid(0x8E05B1CD, 0x45086B30, 0xC878D6A2, 0x67766EB7) }, 
        { FName("PositiveStyle"), FGuid(0x3E41E470, 0x4DB58D93, 0x9F0C51AC, 0x25059DAF) }, 
        { FName("NegativeStyle"), FGuid(0x6C99D2E3, 0x469A9A1B, 0xBCD1B186, 0xD2DF3940) }, 
        { FName("BaseStyle"), FGuid(0xA4B5B262, 0x4641806A, 0x1C7C5D91, 0xF878C2ED) }, 
        { FName("PB_ProgressBar_Base"), FGuid(0x72C4F130, 0x84D1338A, 0xAF416409, 0x978551AB) }, 
        { FName("PB_ProgressBar_Negative"), FGuid(0xAE48237D, 0x759A312F, 0xA589CB00, 0x68875B30) }, 
        { FName("PB_ProgressBar_Positive"), FGuid(0x975223F9, 0xEF083473, 0xA7C0A1D3, 0x1548E1FD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FProgressBarStyle BaseStyle = {
        "BackgroundImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(0, 0, 0, 0),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Box,
            "Tiling": ESlateBrushTileType::NoTile,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(0, 0),
            "Margin": {
                "Left": 0.416667,
                "Top": 0.416667,
                "Right": 0.416667,
                "Bottom": 0.416667
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
            "ResourceName": FName("../../../Engine/Content/Slate/Common/ProgressBar_Background.png")
        },
        "FillImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(1, 1, 1, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Box,
            "Tiling": ESlateBrushTileType::NoTile,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(0, 0),
            "Margin": {
                "Left": 0.416667,
                "Top": 0.416667,
                "Right": 0.416667,
                "Bottom": 0.416667
            },
            "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_A.MI_IRR_Basic_A'",
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
        "MarqueeImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(1, 1, 1, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Image,
            "Tiling": ESlateBrushTileType::Horizontal,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(20, 12),
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
            "ResourceName": FName("../../../Engine/Content/Slate/Common/ProgressBar_Marquee.png")
        },
        "EnableFillAnimation": false
    };
    struct FProgressBarStyle NegativeStyle = {
        "BackgroundImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(1, 1, 1, 0),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Box,
            "Tiling": ESlateBrushTileType::NoTile,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(0, 0),
            "Margin": {
                "Left": 0.416667,
                "Top": 0.416667,
                "Right": 0.416667,
                "Bottom": 0.416667
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
            "ResourceName": FName("../../../Engine/Content/Slate/Common/ProgressBar_Background.png")
        },
        "FillImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(1, 1, 1, 0,513043),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Image,
            "Tiling": ESlateBrushTileType::NoTile,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(5000, 500),
            "Margin": {
                "Left": 0,
                "Top": 0.165,
                "Right": 0,
                "Bottom": 0.168349
            },
            "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Textures/General/T_Stripes.T_Stripes'",
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
            "ResourceName": FName("../../../Engine/Content/Slate/Common/ProgressBar_Fill.png")
        },
        "MarqueeImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(1, 1, 1, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Image,
            "Tiling": ESlateBrushTileType::Both,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(55,4637, 12),
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
            "ResourceName": FName("../../../Engine/Content/Slate/Common/ProgressBar_Marquee.png")
        },
        "EnableFillAnimation": false
    };
    struct FProgressBarStyle PositiveStyle = {
        "BackgroundImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(0, 0, 0, 0),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Box,
            "Tiling": ESlateBrushTileType::NoTile,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(0, 0),
            "Margin": {
                "Left": 0.416667,
                "Top": 0.416667,
                "Right": 0.416667,
                "Bottom": 0.416667
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
            "ResourceName": FName("../../../Engine/Content/Slate/Common/ProgressBar_Background.png")
        },
        "FillImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(0,056128, 0,768151, 0,291771, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Box,
            "Tiling": ESlateBrushTileType::NoTile,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(0, 0),
            "Margin": {
                "Left": 0.416667,
                "Top": 0.416667,
                "Right": 0.416667,
                "Bottom": 0.416667
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
            "ResourceName": FName("../../../Engine/Content/Slate/Common/ProgressBar_Fill.png")
        },
        "MarqueeImage": {
            "TintColor": {
                "SpecifiedColor": FLinearColor(1, 1, 1, 1),
                "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
            },
            "DrawAs": ESlateBrushDrawType::Image,
            "Tiling": ESlateBrushTileType::Horizontal,
            "Mirroring": ESlateBrushMirrorType::NoMirror,
            "ImageType": ESlateBrushImageType::FullColor,
            "ImageSize": FVector2D(20, 12),
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
            "ResourceName": FName("../../../Engine/Content/Slate/Common/ProgressBar_Marquee.png")
        },
        "EnableFillAnimation": false
    };
    struct FVector2D BarBorderPadding = FVector2D(0, 0);
    double Current Value = 75;
    double Base Value = 50;
    double Max Value = 100;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UProgressBar* PB_ProgressBar_Positive;
    class UProgressBar* PB_ProgressBar_Negative;
    class UProgressBar* PB_ProgressBar_Base;
    byte BarFillType;

};