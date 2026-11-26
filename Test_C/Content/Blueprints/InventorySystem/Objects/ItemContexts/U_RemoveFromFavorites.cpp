class UU_RemoveFromFavorites_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_RemoveFromFavorites.U_RemoveFromFavorites_C:ExecuteUbergraph_U_RemoveFromFavorites'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Remove from favorites");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_Minus_256x256.T_Minus_256x256'";
    bool bAddToVendor = true;

};