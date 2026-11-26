class UWB_SingleConsumable_Min_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_SingleConsumable_Min.WB_SingleConsumable_Min_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/MinimalInventory/WB_SingleConsumable_Min.WB_SingleConsumable_Min_C:ExecuteUbergraph_WB_SingleConsumable_Min'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnRequestUse"), FGuid(0x849DF1E9, 0x4ED1CB1A, 0xFED55793, 0x4B87844F) }, 
        { FName("OnRequestDrop"), FGuid(0xCAAE60B4, 0x4DC0E851, 0x3DD002A4, 0x2B8EFA9D) }, 
        { FName("Item"), FGuid(0x460EF4A6, 0x4F280E8C, 0xECF4C8B8, 0xF78A0E3E) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnRequestDrop = ;
     OnRequestUse = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* ItemName;
    class UBorder* IconShadow;
    class USizeBox* IconContainer;
    class UBorder* Icon;
    class UBorder* HoveredBG;
    class UTextBlock* Amount;
    class AActor* Item;

};