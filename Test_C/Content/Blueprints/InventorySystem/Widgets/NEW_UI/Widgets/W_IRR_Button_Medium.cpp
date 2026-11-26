class UW_IRR_Button_Medium_C : public UW_IRR_BaseButton_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/W_IRR_Button_Medium.W_IRR_Button_Medium_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    FText Text = FText("tab");
    struct FDataTableRowHandle FontPreset = {
        "RowName": FName("SectionHeader")
    };
    bool bIsSelectable = true;
    int32 MinWidth = 320;
    int32 MinHeight = 42;
};