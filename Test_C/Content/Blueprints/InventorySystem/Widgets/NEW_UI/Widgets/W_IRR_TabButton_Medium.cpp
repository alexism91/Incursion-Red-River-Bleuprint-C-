class UW_IRR_TabButton_Medium_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_TabButton_Medium.W_IRR_TabButton_Medium_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Medium/Standard/T_IRR_Medium_Standard_Standard.T_IRR_Medium_Standard_Standard'"
    };
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Medium/Standard/T_IRR_Medium_Standard_Standard.T_IRR_Medium_Standard_Standard'"
    };
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Medium/Standard/T_IRR_Medium_Standard_Hovered.T_IRR_Medium_Standard_Hovered'"
    };
    FText Text = FText("tab");
    struct FDataTableRowHandle FontPreset = {
        "RowName": FName("SmallTabButton")
    };
    bool bIsSelectable = true;
    int32 MinWidth = 175;
    int32 MinHeight = 32;
};