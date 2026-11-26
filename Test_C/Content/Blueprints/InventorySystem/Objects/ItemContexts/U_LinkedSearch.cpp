class UU_LinkedSearch_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_LinkedSearch.U_LinkedSearch_C:ExecuteUbergraph_U_LinkedSearch'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Compatible Search");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_ItemCompatible.T_ItemCompatible'";
    bool bAddToVendor = true;
    bool bInGameSupported = false;

};