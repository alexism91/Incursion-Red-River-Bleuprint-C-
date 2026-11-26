class UWB_WeaponCustomization_Button_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WeaponCustomization/WB_WeaponCustomization_Button.WB_WeaponCustomization_Button_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WeaponCustomization/WB_WeaponCustomization_Button.WB_WeaponCustomization_Button_C:Popup_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WeaponCustomization/WB_WeaponCustomization_Button.WB_WeaponCustomization_Button_C:ListPopup_INST'"
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WeaponCustomization/WB_WeaponCustomization_Button.WB_WeaponCustomization_Button_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/UserInterface/WeaponCustomization/WB_WeaponCustomization_Button.WB_WeaponCustomization_Button_C:ExecuteUbergraph_WB_WeaponCustomization_Button'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Item"), FGuid(0x581B75D2, 0x418371E6, 0xD3C1658E, 0x7F3F8726) }, 
        { FName("On_List_Closed"), FGuid(0x62EE7A90, 0x4E2C085E, 0xAEF28C97, 0x3C94E686) }, 
        { FName("AttachmentType"), FGuid(0x82EEDDDC, 0x4B7ADFDA, 0x8D92D0AD, 0x44460B53) }, 
        { FName("EmptySlot"), FGuid(0x90A38CE8, 0x493EE18A, 0x2218BE9A, 0xEE8CEBF0) }, 
        { FName("AvailableAttachments"), FGuid(0x98A897C1, 0x41E13432, 0x24208987, 0xC1E6FD91) }, 
        { FName("On_List_Opened"), FGuid(0x71799B3F, 0x455400E1, 0x399E4F92, 0xCBE8BF30) }, 
        { FName("ListVisible"), FGuid(0x7F681B4D, 0x48B059B3, 0x02FF74BE, 0x29DBE36A) }, 
        { FName("AttachmentInfo"), FGuid(0x5C37366F, 0x4E459BB6, 0x04DD638B, 0xBD083CF0) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_AttachmentWidget AttachmentInfo = {
        "SocketOffset_5_D210C0E24E32367C9D0DFA85C6A75898": FVector(0, 0, 0),
        "AttachmentIcon_2_C56C7A5C442486CE434FFB83FAA850B4": nullptr
    };
     On_List_Opened = ;
     On_List_Closed = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* Light;
    class UBorder* IconShadow;
    class UBorder* Icon;
    class UButton* Dummy;
    class UBorder* Circle;
    class UVerticalBox* AttachmentList;
    class UWidgetAnimation* Popup;
    class UWidgetAnimation* ListPopup;
    bool ListVisible;
    TArray<class UWB_Single_Attachment_C*>* AvailableAttachments;
    class UWB_Single_Attachment_C* EmptySlot;
    Enum_AttachmentType AttachmentType;
    class AActor* Item;

};