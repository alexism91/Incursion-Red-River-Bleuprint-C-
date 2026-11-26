class UU_Modify_C : public UItemContext
{
public:
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Objects/ItemContexts/U_Modify.U_Modify_C:ExecuteUbergraph_U_Modify'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FDataTableRowHandle Tutorial = {
        "DataTable": "DataTable'Test_C/Content/Blueprints/TutorialSystem/DT_Tutorials.DT_Tutorials'",
        "RowName": FName("WeaponBench")
    };
    FText ContextName = FText("Modify");
    class UTexture2D* ContextIcon = "Texture2D'Test_C/Content/ThirdParty/CompShooterHUD/Textures/Icons/Context_Icons/Consume-Icon.Consume-Icon'";
    bool bAddToVendor = true;
    bool bInGameSupported = false;
    TArray<FString> CategoryString;

};