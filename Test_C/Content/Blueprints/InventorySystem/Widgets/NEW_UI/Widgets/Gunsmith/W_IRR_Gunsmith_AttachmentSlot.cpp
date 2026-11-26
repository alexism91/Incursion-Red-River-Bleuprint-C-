class UW_IRR_Gunsmith_AttachmentSlot_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_AttachmentSlot.W_IRR_Gunsmith_AttachmentSlot_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_AttachmentSlot.W_IRR_Gunsmith_AttachmentSlot_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_AttachmentSlot.W_IRR_Gunsmith_AttachmentSlot_C:ExecuteUbergraph_W_IRR_Gunsmith_AttachmentSlot'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Gunsmith Attachment Slot"), FGuid(0xD15D066F, 0x4F9B10EA, 0x790D30AC, 0x0FF06419) }, 
        { FName("OnGunsmithAttachmentSlotClicked"), FGuid(0x54765784, 0x4C158209, 0x9CF1738B, 0x85824016) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnGunsmithAttachmentSlotClicked = ;
    struct FGunsmithAttachmentSlot Gunsmith Attachment Slot = {
        "MainContainer": {
            "MainContainerUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
            "ContainerElements": {},
            "ContainerItems": {}
        },
        "ContainerIndex": 0,
        "LocalOffset": FVector2D(0, 0),
        "Start": FVector2D(0, 0),
        "End": FVector2D(0, 0),
        "LeaderEnd": FVector2D(0, 0),
        "bForeground": false,
        "bBelowWeapon": false
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseButton_C* W_IRR_BaseButton;

};