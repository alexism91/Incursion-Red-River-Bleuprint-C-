class UW_IRR_TabButton_Big_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_TabButton_Big.W_IRR_TabButton_Big_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "ImageSize": FVector2D(199, 60),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Tab/T_TabSelectStandard.T_TabSelectStandard'"
    };
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "ImageSize": FVector2D(199, 60),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Tab/T_TabSelectHover.T_TabSelectHover'"
    };
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "ImageSize": FVector2D(199, 62),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Tab/T_TabSelectHighlight.T_TabSelectHighlight'"
    };
    FText Text = FText("tab");
    struct FDataTableRowHandle FontPreset = {
        "RowName": FName("LargTabButton")
    };
    struct FMargin Notification Icon Padding = {
        "Right": 12
    };
    bool bIsSelectable = true;
    int32 MinWidth = 200;
    int32 MinHeight = 60;
};