class UW_IRR_Menu_Button_Medium_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Menu/W_IRR_Menu_Button_Medium.W_IRR_Menu_Button_Medium_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "ImageSize": FVector2D(584, 62),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/UICore/Textures/Buttons/Menu/Medium/T_IRR_MenuButton_Medium_Standard.T_IRR_MenuButton_Medium_Standard'"
    };
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "ImageSize": FVector2D(584, 62),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/UICore/Textures/Buttons/Menu/Medium/T_IRR_MenuButton_Medium_Highlighted.T_IRR_MenuButton_Medium_Highlighted'"
    };
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "ImageSize": FVector2D(584, 62),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/UICore/Textures/Buttons/Menu/Medium/T_IRR_MenuButton_Medium_Highlighted.T_IRR_MenuButton_Medium_Highlighted'"
    };
    struct FDataTableRowHandle FontPreset = {
        "RowName": FName("SectionHeader")
    };
    struct FMargin ContentPadding = {
        "Left": 32
    };
    enum EHorizontalAlignment Horizontal Alignment = EHorizontalAlignment::HAlign_Left;
    int32 MinWidth = 584;
    int32 MinHeight = 62;
};