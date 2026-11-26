class UU_Drop_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_Drop.U_Drop_C:ExecuteUbergraph_U_Drop'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Drop");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/Drop-Icon.Drop-Icon'";
    bool bHideoutSupported = false;

};