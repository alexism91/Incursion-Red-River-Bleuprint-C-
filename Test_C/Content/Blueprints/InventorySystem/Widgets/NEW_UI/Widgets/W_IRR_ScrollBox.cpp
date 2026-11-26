class UW_IRR_ScrollBox_C : public UScrollBox
{
public:
    struct FScrollBoxStyle WidgetStyle = {
        "BarThickness": 5
    };
    struct FScrollBarStyle WidgetBarStyle = {
        "VerticalBackgroundImage": {
            "DrawAs": ESlateBrushDrawType::Image,
            "ImageType": ESlateBrushImageType::FullColor,
            "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_B.MI_IRR_Basic_B'"
        },
        "HorizontalBottomSlotImage": {
            "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_A.MI_IRR_Basic_A'",
            "ResourceName": FName("None")
        },
        "NormalThumbImage": {
            "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_A.MI_IRR_Basic_A'",
            "ResourceName": FName("None")
        },
        "HoveredThumbImage": {
            "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_A.MI_IRR_Basic_A'",
            "ResourceName": FName("None")
        },
        "DraggedThumbImage": {
            "ResourceObject": "MaterialInstanceConstant'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Materials/MI_IRR_Basic_A.MI_IRR_Basic_A'",
            "ResourceName": FName("None")
        },
        "Thickness": 5
    };
    struct FVector2D ScrollbarThickness = FVector2D(5, 5);
    struct FMargin ScrollBarPadding = {
        "Left": 16,
        "Top": 0,
        "Right": 0,
        "Bottom": 16
    };
    bool AlwaysShowScrollbar = true;
};