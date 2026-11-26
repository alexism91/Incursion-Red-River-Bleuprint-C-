class UU_Consume_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_Consume.U_Consume_C:ExecuteUbergraph_U_Consume'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText ContextName = FText("Consume");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/Consume-Icon.Consume-Icon'";
    bool bHideoutSupported = false;

};