class UW_IRR_Background_Gradient_C : public UW_IRR_Background_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Background/W_IRR_Background_Gradient.W_IRR_Background_Gradient_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush PrimaryBackgroundBrush = {
        "Tiling": ESlateBrushTileType::NoTile,
        "ImageSize": FVector2D(2560, 1440),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Background/Background/T_IRR_Gradient_Background.T_IRR_Gradient_Background'"
    };
    struct FSlateBrush SecondaryBackgroundBrush = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(0,002, 0,0035, 0,002, 0)
        },
        "DrawAs": ESlateBrushDrawType::NoDrawType
    };
    struct FSlateBrush BorderBrush = {
        "DrawAs": ESlateBrushDrawType::NoDrawType,
        "ResourceObject": nullptr
    };
    float BlurStrenght = 2;
};