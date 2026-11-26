class UWB_FilterButton_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_FilterButton.WB_FilterButton_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_FilterButton.WB_FilterButton_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_FilterButton.WB_FilterButton_C:ExecuteUbergraph_WB_FilterButton'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FilterName"), FGuid(0x3AF06CC9, 0x4884935A, 0xDFB69AB3, 0x6465ED6B) }, 
        { FName("On_Selected"), FGuid(0x1F12295B, 0x4A156841, 0x318CC997, 0x113AF1D7) }, 
        { FName("Icon"), FGuid(0x589AA99C, 0x49CAF59E, 0x082C3FAE, 0x5253800D) }, 
        { FName("IconSize"), FGuid(0x4B7F219E, 0x41B0AC8B, 0xEAAFD6B2, 0x19E03D15) }, 
        { FName("SelectedColor"), FGuid(0x8FA7CEB4, 0x4CD79788, 0x582D0883, 0x934F41A9) }, 
        { FName("IsSelected"), FGuid(0xE2464C05, 0x4B9BD548, 0x673B98B3, 0x6C1392BA) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor SelectedColor = FLinearColor(0,005604, 0,261237, 1, 1);
    struct FVector2D IconSize = FVector2D(40, 40);
    class UTexture2D* Icon = "Texture2D'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/Textures/Equipments/T_Helmet1.T_Helmet1'";
     On_Selected = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* IconSizer;
    class UBorder* FilterIconShadow;
    class UBorder* FilterIcon;
    class UButton* FilterButton;
    bool IsSelected;
    FName FilterName;

};