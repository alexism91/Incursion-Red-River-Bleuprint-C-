class UW_IRR_BaseButton_C : public UIRRBaseButtonWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_BaseButton.W_IRR_BaseButton_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "Button",
            "PropertyName": FName("ToolTipWidget"),
            "FunctionName": FName("Get_Button_ToolTipWidget"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Button_ToolTipWidget"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_BaseButton.W_IRR_BaseButton_C:Pressed_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_BaseButton.W_IRR_BaseButton_C:Hovered_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Base/W_IRR_BaseButton.W_IRR_BaseButton_C:ExecuteUbergraph_W_IRR_BaseButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NotificationIcon"), FGuid(0x45D5653F, 0x45A7A220, 0x283A129E, 0xB9A2700F) }, 
        { FName("Notification Vertical Alignment"), FGuid(0x121139C4, 0x48D75740, 0xC4A8A0B9, 0xC80D9DAD) }, 
        { FName("Notification Horizontal Alignment"), FGuid(0x539AB8B8, 0x4AD8C40B, 0x8BDCD7A4, 0xE2C243C2) }, 
        { FName("Notification Icon Padding"), FGuid(0x30A0FD59, 0x42B9C820, 0xD9388E9E, 0x56297CD8) }, 
        { FName("Notification Icon Visibility"), FGuid(0x91C0519B, 0x4DE04CA9, 0x56658E9D, 0x9BA17BE0) }, 
        { FName("Notification Icon Class"), FGuid(0x480BF068, 0x4FD20A05, 0x5ADC3380, 0xCE62E909) }, 
        { FName("ButtonTooltip"), FGuid(0xA9775871, 0x470A66B0, 0x7FDE5396, 0x73E274A0) }, 
        { FName("Horizontal Alignment"), FGuid(0x80B95093, 0x45689960, 0xBCA90794, 0xFDD57A42) }, 
        { FName("Vertical Alignment"), FGuid(0x247A200A, 0x4A39C202, 0x5068A298, 0xEEFF24E1) }, 
        { FName("OnHoverToolTip"), FGuid(0x97C9D210, 0x40B6E7A6, 0x05A7D99A, 0xDFAC7245) }, 
        { FName("ToolTipContent"), FGuid(0x03BDD235, 0x43478040, 0x1B06D9B4, 0x7D304438) }, 
        { FName("ContentPadding"), FGuid(0xD886C9FE, 0x4B4C6CF0, 0x4B7D4C8D, 0x35AA082D) }, 
        { FName("WidgetContent"), FGuid(0x3D8FD8B4, 0x401EEFE2, 0xF35649B6, 0x9F00C34D) }, 
        { FName("ContentOverride"), FGuid(0x00DF81A0, 0x4E689008, 0x48F05397, 0x5F5849CE) }, 
        { FName("FontPreset"), FGuid(0x57B1B5A9, 0x4E7C704C, 0x7A1E29AE, 0x3DC4D9FB) }, 
        { FName("Text"), FGuid(0x00D56726, 0x4FC1635A, 0x1F1AA98A, 0x62782859) }, 
        { FName("IconBrush"), FGuid(0x59EBB647, 0x4EF398CC, 0xE5CF0399, 0x1985F392) }, 
        { FName("ButtonType"), FGuid(0x71CBF77C, 0x48238036, 0xDB1202AF, 0x9A931294) }, 
        { FName("GlowColor"), FGuid(0x6D2A8A60, 0x48D2D7EB, 0xBAA3B3BA, 0xE6DA2876) }, 
        { FName("ButtonBorderBrush_Selected"), FGuid(0x2F6B1167, 0x4D09D9BF, 0x717AE09E, 0xE85F61D5) }, 
        { FName("ButtonBorderBrush_Hovered"), FGuid(0xD01BE579, 0x4571B1CF, 0x87FA23A8, 0x16D48946) }, 
        { FName("ButtonBorderBrush_Standard"), FGuid(0x09AFA312, 0x4F697ACC, 0x6902D38D, 0x3C64DE88) }, 
        { FName("Hovered"), FGuid(0x158B4388, 0xF349307E, 0xAE677715, 0xA6FDC9E6) }, 
        { FName("Pressed"), FGuid(0x925EBFBB, 0x35093EA7, 0xBEF6591D, 0xCF34C177) }, 
        { FName("ButtonBorder"), FGuid(0x92F5B464, 0x72A93679, 0xA9083FDB, 0xA774DCC9) }, 
        { FName("ButtonTextBlock"), FGuid(0x6A470FB8, 0x16583EAB, 0xB3BAACF4, 0x3413AB16) }, 
        { FName("ContentSwitch"), FGuid(0xFCBDA45D, 0x6C0F3F8D, 0xB3D6A3E4, 0x1F3ADD65) }, 
        { FName("Glow"), FGuid(0x2D65A774, 0x0FF03F8E, 0x95C9068B, 0x512CAB04) }, 
        { FName("Icon"), FGuid(0x88288E6E, 0x346C3D59, 0x9979EF81, 0x0814E4DB) }, 
        { FName("IconOvr"), FGuid(0xFE5D03DB, 0xB2503226, 0x95C5137D, 0x4F3AC060) }, 
        { FName("NotificationIconBox"), FGuid(0xF557B23F, 0x4ED5D0E2, 0xA2EBFEB9, 0xF64019A7) }, 
        { FName("TextOvr"), FGuid(0xDFB9439A, 0x9967304A, 0x8A6737AD, 0xF941817A) }, 
        { FName("WidgetContainer"), FGuid(0xC002B928, 0xE2B83899, 0x9D423B33, 0x67E9C460) }, 
        { FName("WidgetOvr"), FGuid(0x16394EAF, 0xBB883D31, 0xA6C298A9, 0x9CDFEB40) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Box,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(427, 75),
        "Margin": {
            "Left": 0.5,
            "Top": 0.5,
            "Right": 0.5,
            "Bottom": 0.5
        },
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Standard/T_IRR_Button_Standard.T_IRR_Button_Standard'",
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
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Box,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(427, 75),
        "Margin": {
            "Left": 0.5,
            "Top": 0.5,
            "Right": 0.5,
            "Bottom": 0.5
        },
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Standard/T_IRR_Button_Hovered.T_IRR_Button_Hovered'",
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
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(1, 1, 1, 1),
            "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
        },
        "DrawAs": ESlateBrushDrawType::Box,
        "Tiling": ESlateBrushTileType::NoTile,
        "Mirroring": ESlateBrushMirrorType::NoMirror,
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(427, 75),
        "Margin": {
            "Left": 0.5,
            "Top": 0.5,
            "Right": 0.5,
            "Bottom": 0.5
        },
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Standard/T_IRR_Button_Highlighted.T_IRR_Button_Highlighted'",
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
    struct FLinearColor GlowColor = FLinearColor(0, 0, 0, 0);
    enum ButtonType = EIRRButtonType::Text;
    struct FSlateBrush IconBrush = {
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
    };
    FText Text = FText("test", CultureInvariant);
    struct FDataTableRowHandle FontPreset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/DT_Inventory_Font_Basic.DT_Inventory_Font_Basic'",
        "RowName": FName("LargeButton")
    };
    struct FMargin ContentPadding = {
        "Left": 0,
        "Top": 0,
        "Right": 0,
        "Bottom": 0
    };
    enum EVerticalAlignment Vertical Alignment = EVerticalAlignment::VAlign_Center;
    enum EHorizontalAlignment Horizontal Alignment = EHorizontalAlignment::HAlign_Center;
    class UWidgetBlueprintGeneratedClass* Notification Icon Class = "WidgetBlueprintGeneratedClass'Test_C/Content/ThirdParty/CompShooterHUD/UI/Icons/WB_Base_Icon_Notification.WB_Base_Icon_Notification_C'";
    enum Notification Icon Visibility = ESlateVisibility::Collapsed;
    struct FMargin Notification Icon Padding = {
        "Left": 0,
        "Top": 0,
        "Right": 0,
        "Bottom": 0
    };
    enum EHorizontalAlignment Notification Horizontal Alignment = EHorizontalAlignment::HAlign_Right;
    enum EVerticalAlignment Notification Vertical Alignment = EVerticalAlignment::VAlign_Center;
    class UIRRAudioData* AudioData = "IRRAudioData'Test_C/Content/Blueprints/UICore/Data/DataAssets/DA_AudioData_Laptop.DA_AudioData_Laptop'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* WidgetOvr;
    class UOverlay* WidgetContainer;
    class UOverlay* TextOvr;
    class UOverlay* NotificationIconBox;
    class UOverlay* IconOvr;
    class UImage* Icon;
    class UWB_FrameBuilder_C* Glow;
    class UWidgetSwitcher* ContentSwitch;
    class UIRRTextBlock* ButtonTextBlock;
    class UBorder* ButtonBorder;
    class UWidgetAnimation* Pressed;
    class UWidgetAnimation* Hovered;
    TSubclassOf<UUserWidget> ContentOverride;
    class UUserWidget* WidgetContent;
    FText ToolTipContent;
    class UW_OnHoverToolTip_C* OnHoverToolTip;
    FText ButtonTooltip;
    class UUserWidget* NotificationIcon;

};