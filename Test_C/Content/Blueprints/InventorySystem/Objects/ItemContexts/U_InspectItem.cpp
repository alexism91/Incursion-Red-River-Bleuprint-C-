class UU_InspectItem_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_InspectItem.U_InspectItem_C:ExecuteUbergraph_U_InspectItem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Inspect");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/inspection.inspection'";
    bool bAddToRewards = true;
    bool bAddToVendor = true;
    bool bAddToInspector = false;
    bool bValidIfPending = true;

};