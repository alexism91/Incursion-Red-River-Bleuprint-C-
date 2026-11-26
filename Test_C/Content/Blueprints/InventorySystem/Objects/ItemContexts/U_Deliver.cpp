class UU_Deliver_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_Deliver.U_Deliver_C:ExecuteUbergraph_U_Deliver'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Deliver");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/Equip-Icon.Equip-Icon'";
    bool bInGameSupported = false;

};