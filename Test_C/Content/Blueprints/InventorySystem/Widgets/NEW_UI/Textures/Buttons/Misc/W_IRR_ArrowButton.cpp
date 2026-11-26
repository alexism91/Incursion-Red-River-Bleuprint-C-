class UW_IRR_ArrowButton_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Misc/W_IRR_ArrowButton.W_IRR_ArrowButton_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "DrawAs": ESlateBrushDrawType::NoDrawType
    };
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "DrawAs": ESlateBrushDrawType::NoDrawType
    };
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "DrawAs": ESlateBrushDrawType::NoDrawType
    };
    enum ButtonType = EIRRButtonType::Icon;
    struct FSlateBrush IconBrush = {
        "ImageType": ESlateBrushImageType::FullColor,
        "ImageSize": FVector2D(9, 13),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Icons/T_IRR_VendorArrow.T_IRR_VendorArrow'"
    };
    int32 MinWidth = 13;
    int32 MinHeight = 13;
};