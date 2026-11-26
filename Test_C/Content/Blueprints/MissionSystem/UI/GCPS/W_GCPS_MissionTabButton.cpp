class UW_GCPS_MissionTabButton_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_MissionTabButton.W_GCPS_MissionTabButton_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/MissionSystem/Textures/GCPS/T_IRR_ExpandableMissionHeaderButton.T_IRR_ExpandableMissionHeaderButton'"
    };
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/MissionSystem/Textures/GCPS/T_IRR_ExpandableMissionHeaderButtonHovered.T_IRR_ExpandableMissionHeaderButtonHovered'"
    };
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/MissionSystem/Textures/GCPS/T_IRR_ExpandableMissionHeaderButtonSelected.T_IRR_ExpandableMissionHeaderButtonSelected'"
    };
    FText Text = FText("Missions");
    struct FDataTableRowHandle FontPreset = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/DT_GCPS_Font_Basic.DT_GCPS_Font_Basic'",
        "RowName": FName("Header")
    };
    bool bIsSelectable = true;
    int32 MinWidth = 116;
    int32 MinHeight = 32;
};