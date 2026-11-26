class UU_AddToFavorites_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_AddToFavorites.U_AddToFavorites_C:ExecuteUbergraph_U_AddToFavorites'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Add to favorites");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_Plus_256x256.T_Plus_256x256'";
    bool bAddToVendor = true;

};