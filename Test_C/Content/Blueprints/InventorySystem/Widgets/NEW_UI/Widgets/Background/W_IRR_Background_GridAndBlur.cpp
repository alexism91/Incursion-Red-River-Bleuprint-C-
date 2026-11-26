class UW_IRR_Background_GridAndBlur_C : public UW_IRR_Background_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Background/W_IRR_Background_GridAndBlur.W_IRR_Background_GridAndBlur_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush PrimaryBackgroundBrush = {
        "ImageSize": FVector2D(1920, 1005),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Background/Background/T_IRR_BackgroundGrid.T_IRR_BackgroundGrid'"
    };
    struct FSlateBrush SecondaryBackgroundBrush = {
        "TintColor": {
            "SpecifiedColor": FLinearColor(0, 0, 0, 0)
        }
    };
    struct FSlateBrush BorderBrush = {
        "Margin": {
            "Left": 0.05,
            "Top": 0.05,
            "Right": 0.05,
            "Bottom": 0.05
        }
    };
};