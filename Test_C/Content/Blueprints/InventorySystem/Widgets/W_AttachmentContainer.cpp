class UW_AttachmentContainer_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/W_AttachmentContainer.W_AttachmentContainer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/W_AttachmentContainer.W_AttachmentContainer_C:ExecuteUbergraph_W_AttachmentContainer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ParentWrapBoxRef"), FGuid(0x97B26A74, 0x4D0A6FF5, 0x8A5964BE, 0xFF4E2437) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWrapBox* AttachmentsWrapBox;
    class UWrapBox* ParentWrapBoxRef;

};