class UW_IRR_Menu_Button_Long_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Menu/W_IRR_Menu_Button_Long.W_IRR_Menu_Button_Long_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "ImageSize": FVector2D(950, 62),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/UICore/Textures/Buttons/Menu/Long/T_IRR_MenuButton_Long_Standard.T_IRR_MenuButton_Long_Standard'"
    };
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "ImageSize": FVector2D(950, 62),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/UICore/Textures/Buttons/Menu/Long/T_IRR_MenuButton_Long_Highlighted.T_IRR_MenuButton_Long_Highlighted'"
    };
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "ImageSize": FVector2D(950, 62),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/UICore/Textures/Buttons/Menu/Long/T_IRR_MenuButton_Long_Highlighted.T_IRR_MenuButton_Long_Highlighted'"
    };
    struct FDataTableRowHandle FontPreset = {
        "RowName": FName("SmallButton")
    };
    struct FMargin ContentPadding = {
        "Left": 32
    };
    enum EHorizontalAlignment Horizontal Alignment = EHorizontalAlignment::HAlign_Left;
    int32 MinWidth = 950;
    int32 MinHeight = 62;
};