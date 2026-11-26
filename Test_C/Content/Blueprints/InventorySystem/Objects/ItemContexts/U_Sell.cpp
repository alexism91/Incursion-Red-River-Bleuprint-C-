class UU_Sell_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_Sell.U_Sell_C:ExecuteUbergraph_U_Sell'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Sell");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_Dollar_256x256.T_Dollar_256x256'";
    bool bInGameSupported = false;

};