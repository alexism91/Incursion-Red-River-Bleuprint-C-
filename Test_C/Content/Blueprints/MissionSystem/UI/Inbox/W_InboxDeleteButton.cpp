class UW_InboxDeleteButton_C : public UW_IRR_Button_Small_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Inbox/W_InboxDeleteButton.W_InboxDeleteButton_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("UID"), FGuid(0x83A91528, 0x4EA9B0C7, 0x5667138D, 0x420752E0) }
    };
    struct FGuid UID = FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000);
    struct FSlateBrush IconBrush = {
        "ImageSize": FVector2D(11, 11),
        "ResourceObject": "Texture2D'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Textures/Icons/T_InspectWindow_Close.T_InspectWindow_Close'"
    };
};