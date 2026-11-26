class UU_Repair_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_Repair.U_Repair_C:ExecuteUbergraph_U_Repair'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Repair");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/T_Dollar_256x256.T_Dollar_256x256'";
    bool bInGameSupported = false;

};