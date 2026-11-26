class UWB_InteractableItem_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_InteractableItem.WB_InteractableItem_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_InteractableItem.WB_InteractableItem_C:PopupAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WB_InteractableItem.WB_InteractableItem_C:ExecuteUbergraph_WB_InteractableItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnWidgetDestroyed"), FGuid(0x8912DCA0, 0x4DBF4BD0, 0x0542A4B1, 0x55835DF9) }, 
        { FName("RarityColors"), FGuid(0x020ACFF4, 0x462492D1, 0xB459FD81, 0xD283A534) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TMap<enum Enum_ItemRarity, struct FLinearColor> RarityColors = {
        { Enum_ItemRarity::NewEnumerator1, FLinearColor(1, 1, 1, 1) }, 
        { Enum_ItemRarity::NewEnumerator2, FLinearColor(0,671875, 0,013092, 0, 1) }, 
        { Enum_ItemRarity::NewEnumerator3, FLinearColor(0,404823, 0, 1, 1) }, 
        { Enum_ItemRarity::Enum_MAX, FLinearColor(1, 0,307249, 0, 1) }
    };
     OnWidgetDestroyed = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::Hidden;
    class UTextBlock* Type;
    class UBorder* TopFadeBG;
    class UTextBlock* ItemName;
    class UBorder* ItemIconShadow;
    class USizeBox* ItemIconContainer;
    class UBorder* ItemIcon;
    class UTextBlock* ItemAmount;
    class UTextBlock* Description;
    class UBorder* CenterFadeBG;
    class UBorder* CenterBottomFadeBG;
    class UBorder* BottomVerticalLine;
    class UBorder* BottomLine_1;
    class UBorder* BottomLine;
    class UWidgetAnimation* PopupAnim;

};