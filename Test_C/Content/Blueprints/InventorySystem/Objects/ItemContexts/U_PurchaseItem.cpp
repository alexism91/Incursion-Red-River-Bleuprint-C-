class UU_PurchaseItem_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_PurchaseItem.U_PurchaseItem_C:ExecuteUbergraph_U_PurchaseItem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Purchase Item");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_Dollar_256x256.T_Dollar_256x256'";
    bool bAddToVendor = true;
    bool bHideoutSupported = false;
    bool bInGameSupported = false;

};