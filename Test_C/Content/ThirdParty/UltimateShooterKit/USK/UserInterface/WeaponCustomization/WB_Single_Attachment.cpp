class UWB_Single_Attachment_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WeaponCustomization/WB_Single_Attachment.WB_Single_Attachment_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WeaponCustomization/WB_Single_Attachment.WB_Single_Attachment_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WeaponCustomization/WB_Single_Attachment.WB_Single_Attachment_C:ExecuteUbergraph_WB_Single_Attachment'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("InUse"), FGuid(0x215AAD1F, 0x4A65022C, 0xC98C318F, 0x4EC24654) }, 
        { FName("On_Select"), FGuid(0x51501599, 0x4F4595AA, 0x22A95AAD, 0x1D482D64) }, 
        { FName("Attachment"), FGuid(0xB5B532EC, 0x42E3BA65, 0xD67084B0, 0xF84FB601) }, 
        { FName("Reset"), FGuid(0x172173F6, 0x40F5E030, 0x55CAD7B5, 0xB41419E5) }, 
        { FName("bIsSelected"), FGuid(0xBA10F578, 0x43488F52, 0xF4A6859A, 0x9F7D6289) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     On_Select = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* LeftBorder;
    class UTextBlock* ItemName;
    class UBorder* IconShadow;
    class UBorder* Icon;
    class UButton* Button;
    bool bIsSelected;
    bool Reset;
    class AActor* Attachment;
    bool InUse;

};