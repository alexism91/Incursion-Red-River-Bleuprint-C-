class UU_FindItem_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_FindItem.U_FindItem_C:ExecuteUbergraph_U_FindItem'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Find Item");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_Loupe_256x256.T_Loupe_256x256'";
    bool bAddToVendor = true;
    bool bInGameSupported = false;

};