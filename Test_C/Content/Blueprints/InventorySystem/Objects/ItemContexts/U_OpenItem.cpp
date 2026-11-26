class UU_OpenItem_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_OpenItem.U_OpenItem_C:ExecuteUbergraph_U_OpenItem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Open");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/open.open'";
    bool bAddToVendor = true;

};