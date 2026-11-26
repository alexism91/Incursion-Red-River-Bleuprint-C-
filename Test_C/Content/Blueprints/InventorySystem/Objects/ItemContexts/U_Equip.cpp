class UU_Equip_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_Equip.U_Equip_C:ExecuteUbergraph_U_Equip'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Equip");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/Equip-Icon.Equip-Icon'";

};