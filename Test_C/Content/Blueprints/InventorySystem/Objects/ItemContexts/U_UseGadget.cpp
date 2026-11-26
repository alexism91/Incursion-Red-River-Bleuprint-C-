class UU_UseGadget_C : public UItemContext
{
public:
    FText ContextName = FText("Use Gadget");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/Consume-Icon.Consume-Icon'";
    bool bAddToInspector = false;
    bool bHideoutSupported = false;
    TArray<class UIA_UseGadget_C*> ToTriggerActions = {
        "IA_UseGadget_C'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_UseGadget.Default__U_UseGadget_C:IA_UseDrawGadget_C_0'"
    };

};