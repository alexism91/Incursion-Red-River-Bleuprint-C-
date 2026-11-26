class UW_IRR_Laptop_SearchFilter_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_Laptop_SearchFilter.W_IRR_Laptop_SearchFilter_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Laptop/W_IRR_Laptop_SearchFilter.W_IRR_Laptop_SearchFilter_C:ExecuteUbergraph_W_IRR_Laptop_SearchFilter'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FSlateBrush ButtonBorderBrush_Standard = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Medium/Square/T_IRR_Medium_Square_Standard.T_IRR_Medium_Square_Standard'"
    };
    struct FSlateBrush ButtonBorderBrush_Hovered = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Medium/Square/T_IRR_Medium_Square_Standard.T_IRR_Medium_Square_Standard'"
    };
    struct FSlateBrush ButtonBorderBrush_Selected = {
        "ImageSize": FVector2D(116, 32),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Buttons/Medium/Square/T_IRR_Medium_Square_Standard_Hovered.T_IRR_Medium_Square_Standard_Hovered'"
    };
    FText Text = FText("Test", CultureInvariant);
    struct FDataTableRowHandle FontPreset = {
        "RowName": FName("SmallTabButton")
    };
    struct FMargin ContentPadding = {
        "Left": 6,
        "Right": 6
    };
    FText ToolTipContent = FText("Click To Remove Filter.");
    enum EHorizontalAlignment Horizontal Alignment = EHorizontalAlignment::HAlign_Left;
    int32 MinWidth = 100;
    int32 MinHeight = 32;

};