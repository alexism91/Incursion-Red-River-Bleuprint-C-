class UWB_DropContainer_Min_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_DropContainer_Min.WB_DropContainer_Min_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_DropContainer_Min.WB_DropContainer_Min_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_DropContainer_Min.WB_DropContainer_Min_C:ExecuteUbergraph_WB_DropContainer_Min'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("DropCount"), FGuid(0x7AF6E774, 0x4E5076E6, 0xF86907BF, 0x1D514977) }, 
        { FName("ItemToDrop"), FGuid(0xF081D9E6, 0x41BD9FC1, 0x41ABBBBA, 0x26C57229) }, 
        { FName("On_Drop"), FGuid(0x1FD06393, 0x46B4EE28, 0x71E2D8A8, 0x79F96B3B) }, 
        { FName("On_Cancel"), FGuid(0x9D7C5F21, 0x438D36B2, 0x9E3F41B7, 0x6DAF0A45) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     On_Cancel = ;
     On_Drop = ;
    int32 DropCount = 1;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* DropText2;
    class UTextBlock* DropText;
    class USlider* DropSlider;
    class UProgressBar* DropProgress;
    class UTextBlock* DropItemName2;
    class UTextBlock* DropItemName;
    class UOverlay* DropContainer;
    class UButton* DropButton2;
    class UButton* DropButton;
    class UBorder* DropBG2;
    class UBorder* DropBG;
    class UTextBlock* DropAmount;
    class UWidgetSwitcher* ContentSwitcher;
    class UTextBlock* CancelText2;
    class UTextBlock* CancelText;
    class UButton* CancelButton2;
    class UButton* CancelButton;
    class UBorder* CancelBG2;
    class UBorder* CancelBG;
    class AActor* ItemToDrop;

};