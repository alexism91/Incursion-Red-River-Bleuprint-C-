class UW_IRR_Button_Small_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_Button_Small.W_IRR_Button_Small_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "ImageSize": FVector2D(31, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Small/T_IRR_Button_Small_Standard.T_IRR_Button_Small_Standard'"
    };
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "ImageSize": FVector2D(31, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Small/T_IRR_Button_Small_Hovered.T_IRR_Button_Small_Hovered'"
    };
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "ImageSize": FVector2D(31, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Small/T_IRR_Button_Small_Hovered.T_IRR_Button_Small_Hovered'"
    };
    enum ButtonType = EIRRButtonType::Icon;
    struct FSlateBrush IconBrush = {
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(14, 15),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Icons/T_Plus_32x32.T_Plus_32x32'"
    };
    FText Text = FText("<>", CultureInvariant);
    struct FDataTableRowHandle FontPreset = {
        "RowName": FName("SmallButton")
    };
    bool bIsSelectable = true;
    int32 MinWidth = 32;
    int32 MinHeight = 32;
};